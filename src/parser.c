#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_public = 1,
  anon_sym_module = 2,
  anon_sym_LBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_RBRACE = 5,
  anon_sym_incoming = 6,
  anon_sym_COLON = 7,
  anon_sym_outgoing = 8,
  anon_sym_reg = 9,
  anon_sym_on = 10,
  sym_direct = 11,
  sym_latched = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_COMMA = 18,
  sym_type_clock = 19,
  anon_sym_Word = 20,
  sym_path = 21,
  sym_word = 22,
  sym_nat = 23,
  sym_id = 24,
  sym_comment_line = 25,
  sym_comment_block = 26,
  sym_package = 27,
  sym_item = 28,
  sym_moddef = 29,
  sym__decl = 30,
  sym__component = 31,
  sym_incoming = 32,
  sym_outgoing = 33,
  sym_reg = 34,
  sym_connect = 35,
  sym_connect_type = 36,
  sym_expr = 37,
  sym_expr_call = 38,
  sym_expr_idx = 39,
  sym_expr_lit = 40,
  sym_expr_reference = 41,
  sym__word_lit = 42,
  sym__expr_list = 43,
  sym_type = 44,
  sym_type_word = 45,
  aux_sym_package_repeat1 = 46,
  aux_sym_moddef_repeat1 = 47,
  aux_sym__expr_list_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_public] = "public",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_incoming] = "incoming",
  [anon_sym_COLON] = ":",
  [anon_sym_outgoing] = "outgoing",
  [anon_sym_reg] = "reg",
  [anon_sym_on] = "on",
  [sym_direct] = "direct",
  [sym_latched] = "latched",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_type_clock] = "type_clock",
  [anon_sym_Word] = "Word",
  [sym_path] = "path",
  [sym_word] = "word",
  [sym_nat] = "nat",
  [sym_id] = "id",
  [sym_comment_line] = "comment_line",
  [sym_comment_block] = "comment_block",
  [sym_package] = "package",
  [sym_item] = "item",
  [sym_moddef] = "moddef",
  [sym__decl] = "_decl",
  [sym__component] = "_component",
  [sym_incoming] = "incoming",
  [sym_outgoing] = "outgoing",
  [sym_reg] = "reg",
  [sym_connect] = "connect",
  [sym_connect_type] = "connect_type",
  [sym_expr] = "expr",
  [sym_expr_call] = "expr_call",
  [sym_expr_idx] = "expr_idx",
  [sym_expr_lit] = "expr_lit",
  [sym_expr_reference] = "expr_reference",
  [sym__word_lit] = "_word_lit",
  [sym__expr_list] = "_expr_list",
  [sym_type] = "type",
  [sym_type_word] = "type_word",
  [aux_sym_package_repeat1] = "package_repeat1",
  [aux_sym_moddef_repeat1] = "moddef_repeat1",
  [aux_sym__expr_list_repeat1] = "_expr_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_incoming] = anon_sym_incoming,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_outgoing] = anon_sym_outgoing,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_on] = anon_sym_on,
  [sym_direct] = sym_direct,
  [sym_latched] = sym_latched,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_type_clock] = sym_type_clock,
  [anon_sym_Word] = anon_sym_Word,
  [sym_path] = sym_path,
  [sym_word] = sym_word,
  [sym_nat] = sym_nat,
  [sym_id] = sym_id,
  [sym_comment_line] = sym_comment_line,
  [sym_comment_block] = sym_comment_block,
  [sym_package] = sym_package,
  [sym_item] = sym_item,
  [sym_moddef] = sym_moddef,
  [sym__decl] = sym__decl,
  [sym__component] = sym__component,
  [sym_incoming] = sym_incoming,
  [sym_outgoing] = sym_outgoing,
  [sym_reg] = sym_reg,
  [sym_connect] = sym_connect,
  [sym_connect_type] = sym_connect_type,
  [sym_expr] = sym_expr,
  [sym_expr_call] = sym_expr_call,
  [sym_expr_idx] = sym_expr_idx,
  [sym_expr_lit] = sym_expr_lit,
  [sym_expr_reference] = sym_expr_reference,
  [sym__word_lit] = sym__word_lit,
  [sym__expr_list] = sym__expr_list,
  [sym_type] = sym_type,
  [sym_type_word] = sym_type_word,
  [aux_sym_package_repeat1] = aux_sym_package_repeat1,
  [aux_sym_moddef_repeat1] = aux_sym_moddef_repeat1,
  [aux_sym__expr_list_repeat1] = aux_sym__expr_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incoming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outgoing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [sym_direct] = {
    .visible = true,
    .named = true,
  },
  [sym_latched] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_type_clock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Word] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_nat] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_moddef] = {
    .visible = true,
    .named = true,
  },
  [sym__decl] = {
    .visible = false,
    .named = true,
  },
  [sym__component] = {
    .visible = false,
    .named = true,
  },
  [sym_incoming] = {
    .visible = true,
    .named = true,
  },
  [sym_outgoing] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_connect] = {
    .visible = true,
    .named = true,
  },
  [sym_connect_type] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_idx] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__word_lit] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_list] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moddef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_connect_type = 2,
  field_expr = 3,
  field_method = 4,
  field_name = 5,
  field_on = 6,
  field_subject = 7,
  field_target = 8,
  field_type = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_connect_type] = "connect_type",
  [field_expr] = "expr",
  [field_method] = "method",
  [field_name] = "name",
  [field_on] = "on",
  [field_subject] = "subject",
  [field_target] = "target",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_connect_type, 1},
    {field_expr, 2},
    {field_target, 0},
  [5] =
    {field_name, 1},
    {field_type, 3},
  [7] =
    {field_name, 1},
    {field_on, 5},
    {field_type, 3},
  [10] =
    {field_method, 2},
    {field_subject, 0},
  [12] =
    {field_args, 4},
    {field_method, 2},
    {field_subject, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        '(', 62,
        ')', 63,
        ',', 67,
        '-', 9,
        '/', 2,
        ':', 54,
        ';', 49,
        '<', 8,
        'C', 28,
        'W', 34,
        '[', 65,
        ']', 66,
        'i', 30,
        'm', 35,
        'o', 31,
        'p', 41,
        'r', 16,
        '{', 48,
        '}', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == '}') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 44:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_incoming);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_incoming);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_outgoing);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_outgoing);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_reg);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_direct);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_latched);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_type_clock);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'g') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_nat);
      if (lookahead == 'w') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment_block);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_incoming] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_outgoing] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [sym_direct] = ACTIONS(1),
    [sym_latched] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_type_clock] = ACTIONS(1),
    [anon_sym_Word] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
  [1] = {
    [sym_package] = STATE(65),
    [sym_item] = STATE(14),
    [sym_moddef] = STATE(37),
    [aux_sym_package_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_incoming,
    ACTIONS(15), 1,
      anon_sym_outgoing,
    ACTIONS(17), 1,
      anon_sym_reg,
    ACTIONS(19), 1,
      sym_path,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [31] = 8,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_incoming,
    ACTIONS(26), 1,
      anon_sym_outgoing,
    ACTIONS(29), 1,
      anon_sym_reg,
    ACTIONS(32), 1,
      sym_path,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [62] = 10,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(43), 1,
      sym_nat,
    STATE(17), 1,
      sym_expr,
    STATE(23), 1,
      sym__word_lit,
    STATE(59), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [97] = 8,
    ACTIONS(13), 1,
      anon_sym_incoming,
    ACTIONS(15), 1,
      anon_sym_outgoing,
    ACTIONS(17), 1,
      anon_sym_reg,
    ACTIONS(19), 1,
      sym_path,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [128] = 8,
    ACTIONS(13), 1,
      anon_sym_incoming,
    ACTIONS(15), 1,
      anon_sym_outgoing,
    ACTIONS(17), 1,
      anon_sym_reg,
    ACTIONS(19), 1,
      sym_path,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [159] = 8,
    ACTIONS(13), 1,
      anon_sym_incoming,
    ACTIONS(15), 1,
      anon_sym_outgoing,
    ACTIONS(17), 1,
      anon_sym_reg,
    ACTIONS(19), 1,
      sym_path,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_moddef_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [190] = 9,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(43), 1,
      sym_nat,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__word_lit,
    STATE(24), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [222] = 9,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(43), 1,
      sym_nat,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__word_lit,
    STATE(24), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [254] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(43), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(38), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [283] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(43), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(24), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [312] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(43), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(35), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [341] = 6,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_public,
    ACTIONS(60), 1,
      anon_sym_module,
    STATE(37), 1,
      sym_moddef,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(13), 2,
      sym_item,
      aux_sym_package_repeat1,
  [362] = 6,
    ACTIONS(7), 1,
      anon_sym_public,
    ACTIONS(9), 1,
      anon_sym_module,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_moddef,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(13), 2,
      sym_item,
      aux_sym_package_repeat1,
  [383] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(65), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [395] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(67), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [407] = 6,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_DASH_GT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [427] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(77), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [439] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(79), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [451] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(81), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [463] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(83), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [475] = 3,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 4,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_reg,
      sym_path,
  [489] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(87), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [501] = 4,
    ACTIONS(71), 1,
      anon_sym_DASH_GT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [516] = 5,
    ACTIONS(91), 1,
      sym_type_clock,
    ACTIONS(93), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(42), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [533] = 5,
    ACTIONS(91), 1,
      sym_type_clock,
    ACTIONS(93), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(43), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [550] = 3,
    ACTIONS(97), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(95), 3,
      anon_sym_LPAREN,
      sym_path,
      sym_word,
  [563] = 5,
    ACTIONS(91), 1,
      sym_type_clock,
    ACTIONS(93), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(49), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [580] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [590] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [600] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [610] = 4,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [624] = 3,
    STATE(12), 1,
      sym_connect_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(108), 2,
      sym_direct,
      sym_latched,
  [636] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [646] = 4,
    ACTIONS(71), 1,
      anon_sym_DASH_GT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [660] = 4,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [674] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [684] = 4,
    ACTIONS(71), 1,
      anon_sym_DASH_GT,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [698] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [707] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(122), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [716] = 2,
    ACTIONS(124), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [724] = 2,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [732] = 2,
    ACTIONS(128), 1,
      anon_sym_on,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [740] = 2,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [748] = 2,
    ACTIONS(132), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [756] = 2,
    ACTIONS(134), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [764] = 2,
    ACTIONS(136), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [772] = 2,
    ACTIONS(138), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [780] = 2,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [788] = 2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [796] = 2,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [804] = 2,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [812] = 2,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [820] = 2,
    ACTIONS(150), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [828] = 2,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [836] = 2,
    ACTIONS(154), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [844] = 2,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [852] = 2,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [860] = 2,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [868] = 2,
    ACTIONS(162), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [876] = 2,
    ACTIONS(164), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [884] = 2,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [892] = 2,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [900] = 2,
    ACTIONS(170), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [908] = 2,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [916] = 2,
    ACTIONS(174), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 312,
  [SMALL_STATE(13)] = 341,
  [SMALL_STATE(14)] = 362,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 395,
  [SMALL_STATE(17)] = 407,
  [SMALL_STATE(18)] = 427,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 451,
  [SMALL_STATE(21)] = 463,
  [SMALL_STATE(22)] = 475,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 501,
  [SMALL_STATE(25)] = 516,
  [SMALL_STATE(26)] = 533,
  [SMALL_STATE(27)] = 550,
  [SMALL_STATE(28)] = 563,
  [SMALL_STATE(29)] = 580,
  [SMALL_STATE(30)] = 590,
  [SMALL_STATE(31)] = 600,
  [SMALL_STATE(32)] = 610,
  [SMALL_STATE(33)] = 624,
  [SMALL_STATE(34)] = 636,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 660,
  [SMALL_STATE(37)] = 674,
  [SMALL_STATE(38)] = 684,
  [SMALL_STATE(39)] = 698,
  [SMALL_STATE(40)] = 707,
  [SMALL_STATE(41)] = 716,
  [SMALL_STATE(42)] = 724,
  [SMALL_STATE(43)] = 732,
  [SMALL_STATE(44)] = 740,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 756,
  [SMALL_STATE(47)] = 764,
  [SMALL_STATE(48)] = 772,
  [SMALL_STATE(49)] = 780,
  [SMALL_STATE(50)] = 788,
  [SMALL_STATE(51)] = 796,
  [SMALL_STATE(52)] = 804,
  [SMALL_STATE(53)] = 812,
  [SMALL_STATE(54)] = 820,
  [SMALL_STATE(55)] = 828,
  [SMALL_STATE(56)] = 836,
  [SMALL_STATE(57)] = 844,
  [SMALL_STATE(58)] = 852,
  [SMALL_STATE(59)] = 860,
  [SMALL_STATE(60)] = 868,
  [SMALL_STATE(61)] = 876,
  [SMALL_STATE(62)] = 884,
  [SMALL_STATE(63)] = 892,
  [SMALL_STATE(64)] = 900,
  [SMALL_STATE(65)] = 908,
  [SMALL_STATE(66)] = 916,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 6, 0, 7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_reference, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 5, 0, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lit, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect_type, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect_type, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, 0, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 1),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, 0, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_word, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, 0, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, 0, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 6, 0, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_virdant(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
