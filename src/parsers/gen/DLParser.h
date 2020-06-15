/*
 * Copyright (c) 2018, 2019, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation. The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have included with MySQL.
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */


// Generated from F:/Orga/deepLang\DLParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


#include "MySQLBaseRecognizer.h"




class PARSERS_PUBLIC_TYPE DLParser : public DLBaseRecognizer {
public:
  enum {
    ACCOUNT_SYMBOL = 1, ASCII_SYMBOL = 2, ALWAYS_SYMBOL = 3, BACKUP_SYMBOL = 4, 
    BEGIN_SYMBOL = 5, BYTE_SYMBOL = 6, CACHE_SYMBOL = 7, CHARSET_SYMBOL = 8, 
    CHECKSUM_SYMBOL = 9, CLOSE_SYMBOL = 10, COMMENT_SYMBOL = 11, COMMIT_SYMBOL = 12, 
    CONTAINS_SYMBOL = 13, DEALLOCATE_SYMBOL = 14, DO_SYMBOL = 15, END_SYMBOL = 16, 
    EXECUTE_SYMBOL = 17, FLUSH_SYMBOL = 18, FOLLOWS_SYMBOL = 19, FORMAT_SYMBOL = 20, 
    GROUP_REPLICATION_SYMBOL = 21, HANDLER_SYMBOL = 22, HELP_SYMBOL = 23, 
    HOST_SYMBOL = 24, INSTALL_SYMBOL = 25, LANGUAGE_SYMBOL = 26, NO_SYMBOL = 27, 
    OPEN_SYMBOL = 28, OPTIONS_SYMBOL = 29, OWNER_SYMBOL = 30, PARSER_SYMBOL = 31, 
    PARTITION_SYMBOL = 32, PORT_SYMBOL = 33, PRECEDES_SYMBOL = 34, PREPARE_SYMBOL = 35, 
    REMOVE_SYMBOL = 36, REPAIR_SYMBOL = 37, RESET_SYMBOL = 38, RESTORE_SYMBOL = 39, 
    ROLLBACK_SYMBOL = 40, SAVEPOINT_SYMBOL = 41, SECURITY_SYMBOL = 42, SERVER_SYMBOL = 43, 
    SIGNED_SYMBOL = 44, SLAVE_SYMBOL = 45, SOCKET_SYMBOL = 46, SONAME_SYMBOL = 47, 
    START_SYMBOL = 48, STOP_SYMBOL = 49, TRUNCATE_SYMBOL = 50, UNICODE_SYMBOL = 51, 
    UNINSTALL_SYMBOL = 52, UPGRADE_SYMBOL = 53, WRAPPER_SYMBOL = 54, XA_SYMBOL = 55, 
    SHUTDOWN_SYMBOL = 56, ACTION_SYMBOL = 57, ADDDATE_SYMBOL = 58, AFTER_SYMBOL = 59, 
    AGAINST_SYMBOL = 60, AGGREGATE_SYMBOL = 61, ALGORITHM_SYMBOL = 62, ANALYZE_SYMBOL = 63, 
    ANY_SYMBOL = 64, AT_SYMBOL = 65, AUTHORS_SYMBOL = 66, AUTO_INCREMENT_SYMBOL = 67, 
    AUTOEXTEND_SIZE_SYMBOL = 68, AVG_ROW_LENGTH_SYMBOL = 69, AVG_SYMBOL = 70, 
    BINLOG_SYMBOL = 71, BIT_SYMBOL = 72, BLOCK_SYMBOL = 73, BOOL_SYMBOL = 74, 
    BOOLEAN_SYMBOL = 75, BTREE_SYMBOL = 76, CASCADED_SYMBOL = 77, CATALOG_NAME_SYMBOL = 78, 
    CHAIN_SYMBOL = 79, CHANGED_SYMBOL = 80, CHANNEL_SYMBOL = 81, CIPHER_SYMBOL = 82, 
    CLIENT_SYMBOL = 83, CLASS_ORIGIN_SYMBOL = 84, COALESCE_SYMBOL = 85, 
    CODE_SYMBOL = 86, COLLATION_SYMBOL = 87, COLUMN_NAME_SYMBOL = 88, COLUMN_FORMAT_SYMBOL = 89, 
    COLUMNS_SYMBOL = 90, COMMITTED_SYMBOL = 91, COMPACT_SYMBOL = 92, COMPLETION_SYMBOL = 93, 
    COMPRESSED_SYMBOL = 94, COMPRESSION_SYMBOL = 95, ENCRYPTION_SYMBOL = 96, 
    CONCURRENT_SYMBOL = 97, CONNECTION_SYMBOL = 98, CONSISTENT_SYMBOL = 99, 
    CONSTRAINT_CATALOG_SYMBOL = 100, CONSTRAINT_SCHEMA_SYMBOL = 101, CONSTRAINT_NAME_SYMBOL = 102, 
    CONTEXT_SYMBOL = 103, CONTRIBUTORS_SYMBOL = 104, CPU_SYMBOL = 105, CUBE_SYMBOL = 106, 
    CURRENT_SYMBOL = 107, CURSOR_NAME_SYMBOL = 108, DATA_SYMBOL = 109, DATAFILE_SYMBOL = 110, 
    DATETIME_SYMBOL = 111, DATE_SYMBOL = 112, DAY_SYMBOL = 113, DEFAULT_AUTH_SYMBOL = 114, 
    DEFINER_SYMBOL = 115, DELAY_KEY_WRITE_SYMBOL = 116, DES_KEY_FILE_SYMBOL = 117, 
    DIAGNOSTICS_SYMBOL = 118, DIRECTORY_SYMBOL = 119, DISABLE_SYMBOL = 120, 
    DISCARD_SYMBOL = 121, DISK_SYMBOL = 122, DUMPFILE_SYMBOL = 123, DUPLICATE_SYMBOL = 124, 
    DYNAMIC_SYMBOL = 125, ENDS_SYMBOL = 126, ENUM_SYMBOL = 127, ENGINE_SYMBOL = 128, 
    ENGINES_SYMBOL = 129, ERROR_SYMBOL = 130, ERRORS_SYMBOL = 131, ESCAPE_SYMBOL = 132, 
    EVENT_SYMBOL = 133, EVENTS_SYMBOL = 134, EVERY_SYMBOL = 135, EXPANSION_SYMBOL = 136, 
    EXPORT_SYMBOL = 137, EXTENDED_SYMBOL = 138, EXTENT_SIZE_SYMBOL = 139, 
    FAULTS_SYMBOL = 140, FAST_SYMBOL = 141, FOUND_SYMBOL = 142, ENABLE_SYMBOL = 143, 
    FULL_SYMBOL = 144, FILE_SYMBOL = 145, FILE_BLOCK_SIZE_SYMBOL = 146, 
    FILTER_SYMBOL = 147, FIRST_SYMBOL = 148, FIXED_SYMBOL = 149, GENERAL_SYMBOL = 150, 
    GEOMETRY_SYMBOL = 151, GEOMETRYCOLLECTION_SYMBOL = 152, GET_FORMAT_SYMBOL = 153, 
    GRANTS_SYMBOL = 154, GLOBAL_SYMBOL = 155, HASH_SYMBOL = 156, HOSTS_SYMBOL = 157, 
    HOUR_SYMBOL = 158, IDENTIFIED_SYMBOL = 159, IGNORE_SERVER_IDS_SYMBOL = 160, 
    INVOKER_SYMBOL = 161, IMPORT_SYMBOL = 162, INDEXES_SYMBOL = 163, INITIAL_SIZE_SYMBOL = 164, 
    INSTANCE_SYMBOL = 165, INNODB_SYMBOL = 166, IO_SYMBOL = 167, IPC_SYMBOL = 168, 
    ISOLATION_SYMBOL = 169, ISSUER_SYMBOL = 170, INSERT_METHOD_SYMBOL = 171, 
    JSON_SYMBOL = 172, KEY_BLOCK_SIZE_SYMBOL = 173, LAST_SYMBOL = 174, LEAVES_SYMBOL = 175, 
    LESS_SYMBOL = 176, LEVEL_SYMBOL = 177, LINESTRING_SYMBOL = 178, LIST_SYMBOL = 179, 
    LOCAL_SYMBOL = 180, LOCKS_SYMBOL = 181, LOGFILE_SYMBOL = 182, LOGS_SYMBOL = 183, 
    MAX_ROWS_SYMBOL = 184, MASTER_SYMBOL = 185, MASTER_HEARTBEAT_PERIOD_SYMBOL = 186, 
    MASTER_HOST_SYMBOL = 187, MASTER_PORT_SYMBOL = 188, MASTER_LOG_FILE_SYMBOL = 189, 
    MASTER_LOG_POS_SYMBOL = 190, MASTER_USER_SYMBOL = 191, MASTER_PASSWORD_SYMBOL = 192, 
    MASTER_SERVER_ID_SYMBOL = 193, MASTER_CONNECT_RETRY_SYMBOL = 194, MASTER_RETRY_COUNT_SYMBOL = 195, 
    MASTER_DELAY_SYMBOL = 196, MASTER_SSL_SYMBOL = 197, MASTER_SSL_CA_SYMBOL = 198, 
    MASTER_SSL_CAPATH_SYMBOL = 199, MASTER_TLS_VERSION_SYMBOL = 200, MASTER_SSL_CERT_SYMBOL = 201, 
    MASTER_SSL_CIPHER_SYMBOL = 202, MASTER_SSL_CRL_SYMBOL = 203, MASTER_SSL_CRLPATH_SYMBOL = 204, 
    MASTER_SSL_KEY_SYMBOL = 205, MASTER_AUTO_POSITION_SYMBOL = 206, MAX_CONNECTIONS_PER_HOUR_SYMBOL = 207, 
    MAX_QUERIES_PER_HOUR_SYMBOL = 208, MAX_STATEMENT_TIME_SYMBOL = 209, 
    MAX_SIZE_SYMBOL = 210, MAX_UPDATES_PER_HOUR_SYMBOL = 211, MAX_USER_CONNECTIONS_SYMBOL = 212, 
    MEDIUM_SYMBOL = 213, MEMORY_SYMBOL = 214, MERGE_SYMBOL = 215, MESSAGE_TEXT_SYMBOL = 216, 
    MICROSECOND_SYMBOL = 217, MIGRATE_SYMBOL = 218, MINUTE_SYMBOL = 219, 
    MIN_ROWS_SYMBOL = 220, MODIFY_SYMBOL = 221, MODE_SYMBOL = 222, MONTH_SYMBOL = 223, 
    MULTILINESTRING_SYMBOL = 224, MULTIPOINT_SYMBOL = 225, MULTIPOLYGON_SYMBOL = 226, 
    MUTEX_SYMBOL = 227, MYSQL_ERRNO_SYMBOL = 228, NAME_SYMBOL = 229, NAMES_SYMBOL = 230, 
    NATIONAL_SYMBOL = 231, NCHAR_SYMBOL = 232, NDBCLUSTER_SYMBOL = 233, 
    NEVER_SYMBOL = 234, NEXT_SYMBOL = 235, NEW_SYMBOL = 236, NO_WAIT_SYMBOL = 237, 
    NODEGROUP_SYMBOL = 238, NONE_SYMBOL = 239, NUMBER_SYMBOL = 240, NVARCHAR_SYMBOL = 241, 
    OFFSET_SYMBOL = 242, OLD_PASSWORD_SYMBOL = 243, ONE_SHOT_SYMBOL = 244, 
    ONE_SYMBOL = 245, PACK_KEYS_SYMBOL = 246, PAGE_SYMBOL = 247, PARTIAL_SYMBOL = 248, 
    PARTITIONING_SYMBOL = 249, PARTITIONS_SYMBOL = 250, PASSWORD_SYMBOL = 251, 
    PHASE_SYMBOL = 252, PLUGIN_DIR_SYMBOL = 253, PLUGIN_SYMBOL = 254, PLUGINS_SYMBOL = 255, 
    POINT_SYMBOL = 256, POLYGON_SYMBOL = 257, PRESERVE_SYMBOL = 258, PREV_SYMBOL = 259, 
    PRIVILEGES_SYMBOL = 260, PROCESS_SYMBOL = 261, PROCESSLIST_SYMBOL = 262, 
    PROFILE_SYMBOL = 263, PROFILES_SYMBOL = 264, PROXY_SYMBOL = 265, QUARTER_SYMBOL = 266, 
    QUERY_SYMBOL = 267, QUICK_SYMBOL = 268, READ_ONLY_SYMBOL = 269, REBUILD_SYMBOL = 270, 
    RECOVER_SYMBOL = 271, REDO_BUFFER_SIZE_SYMBOL = 272, REDOFILE_SYMBOL = 273, 
    REDUNDANT_SYMBOL = 274, RELAY_SYMBOL = 275, RELAYLOG_SYMBOL = 276, RELAY_LOG_FILE_SYMBOL = 277, 
    RELAY_LOG_POS_SYMBOL = 278, RELAY_THREAD_SYMBOL = 279, RELOAD_SYMBOL = 280, 
    REORGANIZE_SYMBOL = 281, REPEATABLE_SYMBOL = 282, REPLICATION_SYMBOL = 283, 
    REPLICATE_DO_DB_SYMBOL = 284, REPLICATE_IGNORE_DB_SYMBOL = 285, REPLICATE_DO_TABLE_SYMBOL = 286, 
    REPLICATE_IGNORE_TABLE_SYMBOL = 287, REPLICATE_WILD_DO_TABLE_SYMBOL = 288, 
    REPLICATE_WILD_IGNORE_TABLE_SYMBOL = 289, REPLICATE_REWRITE_DB_SYMBOL = 290, 
    RESUME_SYMBOL = 291, RETURNED_SQLSTATE_SYMBOL = 292, RETURNS_SYMBOL = 293, 
    REVERSE_SYMBOL = 294, ROLLUP_SYMBOL = 295, ROTATE_SYMBOL = 296, ROUTINE_SYMBOL = 297, 
    ROWS_SYMBOL = 298, ROW_COUNT_SYMBOL = 299, ROW_FORMAT_SYMBOL = 300, 
    ROW_SYMBOL = 301, RTREE_SYMBOL = 302, SCHEDULE_SYMBOL = 303, SCHEMA_NAME_SYMBOL = 304, 
    SECOND_SYMBOL = 305, SERIAL_SYMBOL = 306, SERIALIZABLE_SYMBOL = 307, 
    SESSION_SYMBOL = 308, SIMPLE_SYMBOL = 309, SHARE_SYMBOL = 310, SLOW_SYMBOL = 311, 
    SNAPSHOT_SYMBOL = 312, SOUNDS_SYMBOL = 313, SOURCE_SYMBOL = 314, SQL_AFTER_GTIDS_SYMBOL = 315, 
    SQL_AFTER_MTS_GAPS_SYMBOL = 316, SQL_BEFORE_GTIDS_SYMBOL = 317, SQL_CACHE_SYMBOL = 318, 
    SQL_BUFFER_RESULT_SYMBOL = 319, SQL_NO_CACHE_SYMBOL = 320, SQL_THREAD_SYMBOL = 321, 
    STACKED_SYMBOL = 322, STARTS_SYMBOL = 323, STATS_AUTO_RECALC_SYMBOL = 324, 
    STATS_PERSISTENT_SYMBOL = 325, STATS_SAMPLE_PAGES_SYMBOL = 326, STATUS_SYMBOL = 327, 
    STORAGE_SYMBOL = 328, STRING_SYMBOL = 329, SUBCLASS_ORIGIN_SYMBOL = 330, 
    SUBDATE_SYMBOL = 331, SUBJECT_SYMBOL = 332, SUBPARTITION_SYMBOL = 333, 
    SUBPARTITIONS_SYMBOL = 334, SUPER_SYMBOL = 335, SUSPEND_SYMBOL = 336, 
    SWAPS_SYMBOL = 337, SWITCHES_SYMBOL = 338, TABLE_NAME_SYMBOL = 339, 
    TABLES_SYMBOL = 340, TABLE_CHECKSUM_SYMBOL = 341, TABLESPACE_SYMBOL = 342, 
    TEMPORARY_SYMBOL = 343, TEMPTABLE_SYMBOL = 344, TEXT_SYMBOL = 345, THAN_SYMBOL = 346, 
    TRANSACTION_SYMBOL = 347, TRIGGERS_SYMBOL = 348, TIMESTAMP_SYMBOL = 349, 
    TIMESTAMP_ADD_SYMBOL = 350, TIMESTAMP_DIFF_SYMBOL = 351, TIME_SYMBOL = 352, 
    TYPES_SYMBOL = 353, TYPE_SYMBOL = 354, UDF_RETURNS_SYMBOL = 355, FUNCTION_SYMBOL = 356, 
    UNCOMMITTED_SYMBOL = 357, UNDEFINED_SYMBOL = 358, UNDO_BUFFER_SIZE_SYMBOL = 359, 
    UNDOFILE_SYMBOL = 360, UNKNOWN_SYMBOL = 361, UNTIL_SYMBOL = 362, USER_RESOURCES_SYMBOL = 363, 
    USER_SYMBOL = 364, USE_FRM_SYMBOL = 365, VARIABLES_SYMBOL = 366, VIEW_SYMBOL = 367, 
    VALUE_SYMBOL = 368, WARNINGS_SYMBOL = 369, WAIT_SYMBOL = 370, WEEK_SYMBOL = 371, 
    WORK_SYMBOL = 372, WEIGHT_STRING_SYMBOL = 373, X509_SYMBOL = 374, XID_SYMBOL = 375, 
    XML_SYMBOL = 376, YEAR_SYMBOL = 377, CONST = 378, IDENTIFIER = 379, 
    QUOTED_STRING = 380, OPEN_PAR_SYMBOL = 381, CLOSE_PAR_SYMBOL = 382, 
    OPEN_SQUARE_SYMBOL = 383, CLOSE_SQUARE_SYMBOL = 384, AT_SIGN_SYMBOL = 385, 
    DOT_SYMBOL = 386, PLUS_OPERATOR = 387, MINUS_OPERATOR = 388, MULT_OPERATOR = 389, 
    DIV_OPERATOR = 390, MOD_OPERATOR = 391, ASSIGN_OPERATOR = 392, EQUAL_OPERATOR = 393, 
    LOGICAL_AND_OPERATOR = 394, LOGICAL_OR_OPERATOR = 395, BITWISE_AND_OPERATOR = 396, 
    LOGICAL_NOT_OPERATOR = 397, BITWISE_NOT_OPERATOR = 398, COMMA_SYMBOL = 399, 
    IF_SYMBOL = 400, THEN_SYMBOL = 401, ELSE_SYMBOL = 402, FOR_SYMBOL = 403, 
    SEMICOLON_SYMBOL = 404, OPEN_CURLY_SYMBOL = 405, CLOSE_CURLY_SYMBOL = 406, 
    BREAK_SYMBOL = 407, RETURN_SYMBOL = 408, JSON_SEPARATOR_SYMBOL = 409, 
    MUT_SYMBOL = 410, SIG_SYMBOL = 411, ALIAS_SYMBOL = 412, FUN_SYMBOL = 413, 
    LET_SYMBOL = 414, COLON_SYMBOL = 415, LETMUT_SYMBOL = 416, CLASS_SYMBOL = 417, 
    EXTENDS_SYMBOL = 418, IMPL_SYMBOL = 419, CONSTRUCTOR_SYMBOL = 420, PRIVATE_SYMBOL = 421, 
    PUBLIC_SYMBOL = 422, INTERFACE_SYMBOL = 423
  };

  enum {
    RuleExp = 0, RuleArrayExp = 1, RuleArrayAccessExp = 2, RuleArrayPatternMatchExp = 3, 
    RuleCallExp = 4, RulePointExp = 5, RuleOpExp = 6, RuleAryOp = 7, RuleUnAryOp = 8, 
    RuleNewExp = 9, RuleExpList = 10, RuleStatement = 11, RuleCompoundBlock = 12, 
    RuleBlockList = 13, RuleJumpStatement = 14, RuleType = 15, RuleFunctionType = 16, 
    RuleRefType = 17, RuleDecl = 18, RuleFunctionDecl = 19, RuleSignature = 20, 
    RuleFunctionDef = 21, RuleParamList = 22, RuleVarDecl = 23, RuleClassDecl = 24, 
    RuleClassHead = 25, RuleClassBody = 26, RuleConstructor = 27, RuleAccessSpecifier = 28, 
    RuleInterfaceList = 29, RuleInterfaceDecl = 30, RuleInterfaceHead = 31, 
    RuleInterfaceBody = 32, RuleProgram = 33
  };

  DLParser(antlr4::TokenStream *input);
  ~DLParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ExpContext;
  class ArrayExpContext;
  class ArrayAccessExpContext;
  class ArrayPatternMatchExpContext;
  class CallExpContext;
  class PointExpContext;
  class OpExpContext;
  class AryOpContext;
  class UnAryOpContext;
  class NewExpContext;
  class ExpListContext;
  class StatementContext;
  class CompoundBlockContext;
  class BlockListContext;
  class JumpStatementContext;
  class TypeContext;
  class FunctionTypeContext;
  class RefTypeContext;
  class DeclContext;
  class FunctionDeclContext;
  class SignatureContext;
  class FunctionDefContext;
  class ParamListContext;
  class VarDeclContext;
  class ClassDeclContext;
  class ClassHeadContext;
  class ClassBodyContext;
  class ConstructorContext;
  class AccessSpecifierContext;
  class InterfaceListContext;
  class InterfaceDeclContext;
  class InterfaceHeadContext;
  class InterfaceBodyContext;
  class ProgramContext; 

  class PARSERS_PUBLIC_TYPE ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *QUOTED_STRING();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExpContext *exp();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpContext* exp();

  class PARSERS_PUBLIC_TYPE ArrayExpContext : public antlr4::ParserRuleContext {
  public:
    ArrayExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_SQUARE_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_SQUARE_SYMBOL();
    ExpListContext *expList();
    ArrayAccessExpContext *arrayAccessExp();
    ArrayPatternMatchExpContext *arrayPatternMatchExp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayExpContext* arrayExp();

  class PARSERS_PUBLIC_TYPE ArrayAccessExpContext : public antlr4::ParserRuleContext {
  public:
    ArrayAccessExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *OPEN_SQUARE_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_SQUARE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayAccessExpContext* arrayAccessExp();

  class PARSERS_PUBLIC_TYPE ArrayPatternMatchExpContext : public antlr4::ParserRuleContext {
  public:
    ArrayPatternMatchExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();
    antlr4::tree::TerminalNode *AT_SIGN_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ExpListContext *expList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayPatternMatchExpContext* arrayPatternMatchExp();

  class PARSERS_PUBLIC_TYPE CallExpContext : public antlr4::ParserRuleContext {
  public:
    CallExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExpListContext *expList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallExpContext* callExp();

  class PARSERS_PUBLIC_TYPE PointExpContext : public antlr4::ParserRuleContext {
  public:
    PointExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();
    antlr4::tree::TerminalNode *DOT_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointExpContext* pointExp();

  class PARSERS_PUBLIC_TYPE OpExpContext : public antlr4::ParserRuleContext {
  public:
    OpExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    AryOpContext *aryOp();
    UnAryOpContext *unAryOp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpExpContext* opExp();

  class PARSERS_PUBLIC_TYPE AryOpContext : public antlr4::ParserRuleContext {
  public:
    AryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS_OPERATOR();
    antlr4::tree::TerminalNode *MINUS_OPERATOR();
    antlr4::tree::TerminalNode *MULT_OPERATOR();
    antlr4::tree::TerminalNode *DIV_OPERATOR();
    antlr4::tree::TerminalNode *MOD_OPERATOR();
    antlr4::tree::TerminalNode *ASSIGN_OPERATOR();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    antlr4::tree::TerminalNode *LOGICAL_AND_OPERATOR();
    antlr4::tree::TerminalNode *LOGICAL_OR_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AryOpContext* aryOp();

  class PARSERS_PUBLIC_TYPE UnAryOpContext : public antlr4::ParserRuleContext {
  public:
    UnAryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITWISE_AND_OPERATOR();
    antlr4::tree::TerminalNode *LOGICAL_NOT_OPERATOR();
    antlr4::tree::TerminalNode *BITWISE_NOT_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnAryOpContext* unAryOp();

  class PARSERS_PUBLIC_TYPE NewExpContext : public antlr4::ParserRuleContext {
  public:
    NewExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    ExpListContext *expList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewExpContext* newExp();

  class PARSERS_PUBLIC_TYPE ExpListContext : public antlr4::ParserRuleContext {
  public:
    ExpListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpContext *exp();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    ExpListContext *expList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpListContext* expList();

  class PARSERS_PUBLIC_TYPE StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    antlr4::tree::TerminalNode *THEN_SYMBOL();
    std::vector<CompoundBlockContext *> compoundBlock();
    CompoundBlockContext* compoundBlock(size_t i);
    antlr4::tree::TerminalNode *ELSE_SYMBOL();
    antlr4::tree::TerminalNode *FOR_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON_SYMBOL();
    antlr4::tree::TerminalNode* SEMICOLON_SYMBOL(size_t i);
    JumpStatementContext *jumpStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class PARSERS_PUBLIC_TYPE CompoundBlockContext : public antlr4::ParserRuleContext {
  public:
    CompoundBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();
    BlockListContext *blockList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundBlockContext* compoundBlock();

  class PARSERS_PUBLIC_TYPE BlockListContext : public antlr4::ParserRuleContext {
  public:
    BlockListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();
    BlockListContext *blockList();
    ExpContext *exp();
    DeclContext *decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockListContext* blockList();

  class PARSERS_PUBLIC_TYPE JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK_SYMBOL();
    antlr4::tree::TerminalNode *RETURN_SYMBOL();
    ExpContext *exp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStatementContext* jumpStatement();

  class PARSERS_PUBLIC_TYPE TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class PARSERS_PUBLIC_TYPE FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *JSON_SEPARATOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeContext* functionType();

  class PARSERS_PUBLIC_TYPE RefTypeContext : public antlr4::ParserRuleContext {
  public:
    RefTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITWISE_AND_OPERATOR();
    TypeContext *type();
    antlr4::tree::TerminalNode *MUT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefTypeContext* refType();

  class PARSERS_PUBLIC_TYPE DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclContext *functionDecl();
    VarDeclContext *varDecl();
    ClassDeclContext *classDecl();
    InterfaceDeclContext *interfaceDecl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class PARSERS_PUBLIC_TYPE FunctionDeclContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignatureContext *signature();
    FunctionDefContext *functionDef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclContext* functionDecl();

  class PARSERS_PUBLIC_TYPE SignatureContext : public antlr4::ParserRuleContext {
  public:
    SignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIG_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ALIAS_SYMBOL();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignatureContext* signature();

  class PARSERS_PUBLIC_TYPE FunctionDefContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUN_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CompoundBlockContext *compoundBlock();
    ParamListContext *paramList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefContext* functionDef();

  class PARSERS_PUBLIC_TYPE ParamListContext : public antlr4::ParserRuleContext {
  public:
    ParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    ParamListContext *paramList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamListContext* paramList();

  class PARSERS_PUBLIC_TYPE VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET_SYMBOL();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON_SYMBOL();
    TypeContext *type();
    antlr4::tree::TerminalNode *EQUAL_OPERATOR();
    ExpContext *exp();
    antlr4::tree::TerminalNode *LETMUT_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class PARSERS_PUBLIC_TYPE ClassDeclContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    ClassBodyContext *classBody();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDeclContext* classDecl();

  class PARSERS_PUBLIC_TYPE ClassHeadContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *EXTENDS_SYMBOL();
    antlr4::tree::TerminalNode *IMPL_SYMBOL();
    InterfaceListContext *interfaceList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadContext* classHead();

  class PARSERS_PUBLIC_TYPE ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessSpecifierContext *accessSpecifier();
    DeclContext *decl();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();
    ClassBodyContext *classBody();
    ConstructorContext *constructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyContext* classBody();

  class PARSERS_PUBLIC_TYPE ConstructorContext : public antlr4::ParserRuleContext {
  public:
    ConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRUCTOR_SYMBOL();
    antlr4::tree::TerminalNode *OPEN_PAR_SYMBOL();
    ParamListContext *paramList();
    antlr4::tree::TerminalNode *CLOSE_PAR_SYMBOL();
    CompoundBlockContext *compoundBlock();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorContext* constructor();

  class PARSERS_PUBLIC_TYPE AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIVATE_SYMBOL();
    antlr4::tree::TerminalNode *PUBLIC_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessSpecifierContext* accessSpecifier();

  class PARSERS_PUBLIC_TYPE InterfaceListContext : public antlr4::ParserRuleContext {
  public:
    InterfaceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE_SYMBOL();
    antlr4::tree::TerminalNode *COMMA_SYMBOL();
    InterfaceListContext *interfaceList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceListContext* interfaceList();

  class PARSERS_PUBLIC_TYPE InterfaceDeclContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceHeadContext *interfaceHead();
    antlr4::tree::TerminalNode *OPEN_CURLY_SYMBOL();
    InterfaceBodyContext *interfaceBody();
    antlr4::tree::TerminalNode *CLOSE_CURLY_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceDeclContext* interfaceDecl();

  class PARSERS_PUBLIC_TYPE InterfaceHeadContext : public antlr4::ParserRuleContext {
  public:
    InterfaceHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *EXTENDS_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceHeadContext* interfaceHead();

  class PARSERS_PUBLIC_TYPE InterfaceBodyContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();
    InterfaceBodyContext *interfaceBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceBodyContext* interfaceBody();

  class PARSERS_PUBLIC_TYPE ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclContext *decl();
    antlr4::tree::TerminalNode *SEMICOLON_SYMBOL();
    ProgramContext *program();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

