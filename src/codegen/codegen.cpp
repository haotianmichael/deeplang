#include "codegen.h"

#include "wabt/src/binary-writer.h"
#include "wabt/src/error.h"
#include "wabt/src/ir.h"
#include "wabt/src/validator.h"

namespace dp {
namespace internal {

enum class Result {
	Ok,
	Error
};

class WasmVisitor {
public:
	Result visitModule(Module* node) {
		for (auto& stmt : node->stmts) {
			visitStatement(stmt.get());
		}
		return Result::Ok;
	}

	Result visitStatement(Statement* stmt) {
		switch (stmt->kind) {
		case AstKind::ExpressionStatement:
			visitExpressionStatement(static_cast<ExpressionStatement*>(stmt));
			break;
		case AstKind::FunctionDeclaration:
			visitFunction(static_cast<FunctionDeclaration*>(stmt));
			break;
		case AstKind::VariableDeclaration:
			visitVariableDeclaration(static_cast<VariableDeclaration*>(stmt));
			break;
		default:
			return Result::Error;
		}
		return Result::Ok;
	}

	Result visitFunction(FunctionDeclaration* funNode) {
		auto           name = funNode->id.name;
		wabt::Location loc;
		auto           func_field = std::make_unique<wabt::FuncModuleField>(loc, name);

		func = &func_field->func;

		visitFunctionType(funNode->signature.get());
		visitBlockExpression(funNode->body.get());

		module->AppendField(std::move(func_field));
		return Result::Ok;
	}

	Result visitFunctionType(FunctionType* node) {
		wabt::Location loc;

		// TODO: params type
		func->decl.sig.result_types.push_back(wabt::Type::I32);

		auto type_field = std::make_unique<wabt::TypeModuleField>(loc);
		auto type       = std::make_unique<wabt::FuncType>();

		type->sig = func->decl.sig;
		type_field->type.reset(type.release());

		module->AppendField(std::move(type_field));
		return Result::Ok;
	}

	Result visitVariableDeclaration(VariableDeclaration* varDecl) {
		std::string    name = varDecl->id.name;
		wabt::Type     type = wabt::Type::I32;
		wabt::Location loc;
		func->bindings.emplace(name, wabt::Binding(loc, func->local_types.size()));
		func->local_types.AppendDecl(type, func->local_types.size());
		return Result::Ok;
	}

	Result visitExpressionStatement(ExpressionStatement* exprStmt) {
		return visitExpression(exprStmt->expr.get());
	}

	// Expression

	Result visitLiteral(LiteralExpression* lit) {
		wabt::Location              loc;
		std::unique_ptr<wabt::Expr> expr =
				std::make_unique<wabt::ConstExpr>(wabt::Const::I32(lit->i32val, loc), loc);
		exprs.push_back(std::move(expr));
		return Result::Ok;
	}

	Result visitExpression(Expression* expr) {
		switch (expr->kind) {
		case AstKind::LiteralExpression:
			visitLiteral(static_cast<LiteralExpression*>(expr));
			break;
		case AstKind::PathExpression:
			visitPathExpression(static_cast<PathExpression*>(expr));
			break;
		case AstKind::BinaryExpression:
			visitBinaryExpression(static_cast<BinaryExpression*>(expr));
			break;
		case AstKind::BlockExpression:
			visitBlockExpression(static_cast<BlockExpession*>(expr));
		default:
			return Result::Error;
		}
		return Result::Ok;
	}

	Result visitBlockExpression(BlockExpession* block) {
		for (auto& stmt : block->stmts) {
			visitStatement(stmt.get());
		}
		return Result::Ok;
	}

	Result visitPathExpression(PathExpression* path) {
		wabt::Location              loc;
		int                         ind = func->bindings.FindIndex(path->id.name);
		std::unique_ptr<wabt::Expr> expr;
		//= std::make_unique<ConstExpr>(Const::I32(lit->i32val, loc), loc);
		exprs.push_back(std::move(expr));
		return Result::Ok;
	}

	Result visitBinaryExpression(BinaryExpression* node) {
		wabt::Location              loc;
		std::unique_ptr<wabt::Expr> expr;
		switch (node->op) {
		case BinaryOperator::Plus:
			expr = std::make_unique<wabt::BinaryExpr>(wabt::Opcode::I32Add, loc);
			break;
		case BinaryOperator::Minus:
			expr = std::make_unique<wabt::BinaryExpr>(wabt::Opcode::I32Sub, loc);
			break;
		case BinaryOperator::Mult:
			expr = std::make_unique<wabt::BinaryExpr>(wabt::Opcode::I32Mul, loc);
			break;
		case BinaryOperator::Div:
			expr = std::make_unique<wabt::BinaryExpr>(wabt::Opcode::I32DivS, loc);
			break;
			//case BinaryOperator::BitwiseAnd:
			//	expr = std::make_unique<BinaryExpr>(Opcode::I32And, loc);
			//	break;
			//case BinaryOperator::BitwiseOr:
			//	expr = std::make_unique<BinaryExpr>(Opcode::I32Or, loc);
			//	break;
		}

		exprs.push_back(std::move(expr));

		return Result::Ok;
	}

	std::string result() {
		return std::string();
	}

	WasmVisitor()
			: module(std::make_unique<wabt::Module>()) {
	}

	std::unique_ptr<wabt::Module> module;
	wabt::ExprList                exprs;
	wabt::Func*                   func;
};

static void WriteBufferToFile(wabt::string_view         filename,
															const wabt::OutputBuffer& buffer) {
	//if (s_dump_module) {
	//	std::unique_ptr<FileStream> stream = FileStream::CreateStdout();
	//	if (s_verbose) {
	//		stream->Writef(";; dump\n");
	//	}
	//	if (!buffer.data.empty()) {
	//		stream->WriteMemoryDump(buffer.data.data(), buffer.data.size());
	//	}
	//}

	buffer.WriteToFile(filename);
}

std::string CodeGen::generateWasm(Module* mod) {
	auto visitor = std::make_unique<WasmVisitor>();
	visitor->visitModule(mod);

	wabt::Errors          errors;
	wabt::ValidateOptions options;
	auto                  result = wabt::ValidateModule(visitor->module.get(), &errors, options);
	if (wabt::Succeeded(result)) {
		wabt::MemoryStream       stream;
		wabt::WriteBinaryOptions options;
		result = wabt::WriteBinaryModule(&stream, visitor->module.get(), options);

		if (wabt::Succeeded(result)) {
			WriteBufferToFile("a.wasm", stream.output_buffer());
		}
	}

	return std::string();
}

} // namespace internal
} // namespace dp
