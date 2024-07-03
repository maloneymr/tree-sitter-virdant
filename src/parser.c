#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  sym_package = 25,
  sym_item = 26,
  sym_moddef = 27,
  sym__decl = 28,
  sym__component = 29,
  sym_incoming = 30,
  sym_outgoing = 31,
  sym_reg = 32,
  sym_connect = 33,
  sym_connect_type = 34,
  sym_expr = 35,
  sym_expr_call = 36,
  sym_expr_idx = 37,
  sym_expr_lit = 38,
  sym_expr_reference = 39,
  sym__word_lit = 40,
  sym__expr_list = 41,
  sym_type = 42,
  sym_type_word = 43,
  aux_sym_package_repeat1 = 44,
  aux_sym_moddef_repeat1 = 45,
  aux_sym__expr_list_repeat1 = 46,
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
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '(', 59,
        ')', 60,
        ',', 64,
        '-', 5,
        ':', 51,
        ';', 46,
        '<', 4,
        'C', 24,
        'W', 30,
        '[', 62,
        ']', 63,
        'i', 26,
        'm', 31,
        'o', 27,
        'p', 37,
        'r', 12,
        '{', 45,
        '}', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ':') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '}') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 41:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_incoming);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_incoming);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_outgoing);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_outgoing);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_reg);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_direct);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_latched);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_type_clock);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_nat);
      if (lookahead == 'w') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
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
  [22] = {.lex_state = 2},
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
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 39},
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
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 39},
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
  },
  [1] = {
    [sym_package] = STATE(65),
    [sym_item] = STATE(14),
    [sym_moddef] = STATE(37),
    [aux_sym_package_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_incoming,
    ACTIONS(13), 1,
      anon_sym_outgoing,
    ACTIONS(15), 1,
      anon_sym_reg,
    ACTIONS(17), 1,
      sym_path,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [27] = 7,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_incoming,
    ACTIONS(24), 1,
      anon_sym_outgoing,
    ACTIONS(27), 1,
      anon_sym_reg,
    ACTIONS(30), 1,
      sym_path,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [54] = 9,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_nat,
    STATE(17), 1,
      sym_expr,
    STATE(23), 1,
      sym__word_lit,
    STATE(59), 1,
      sym__expr_list,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [85] = 7,
    ACTIONS(11), 1,
      anon_sym_incoming,
    ACTIONS(13), 1,
      anon_sym_outgoing,
    ACTIONS(15), 1,
      anon_sym_reg,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [112] = 7,
    ACTIONS(11), 1,
      anon_sym_incoming,
    ACTIONS(13), 1,
      anon_sym_outgoing,
    ACTIONS(15), 1,
      anon_sym_reg,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [139] = 7,
    ACTIONS(11), 1,
      anon_sym_incoming,
    ACTIONS(13), 1,
      anon_sym_outgoing,
    ACTIONS(15), 1,
      anon_sym_reg,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_moddef_repeat1,
    STATE(58), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [166] = 8,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_nat,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__word_lit,
    STATE(24), 1,
      sym_expr,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [194] = 8,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_nat,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym__word_lit,
    STATE(24), 1,
      sym_expr,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [222] = 7,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(38), 1,
      sym_expr,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [247] = 7,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(24), 1,
      sym_expr,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [272] = 7,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_word,
    ACTIONS(41), 1,
      sym_nat,
    STATE(23), 1,
      sym__word_lit,
    STATE(35), 1,
      sym_expr,
    STATE(20), 4,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [297] = 5,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_public,
    ACTIONS(58), 1,
      anon_sym_module,
    STATE(37), 1,
      sym_moddef,
    STATE(13), 2,
      sym_item,
      aux_sym_package_repeat1,
  [314] = 5,
    ACTIONS(5), 1,
      anon_sym_public,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_moddef,
    STATE(13), 2,
      sym_item,
      aux_sym_package_repeat1,
  [331] = 1,
    ACTIONS(63), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [339] = 1,
    ACTIONS(65), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [347] = 5,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__expr_list_repeat1,
  [363] = 1,
    ACTIONS(75), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [371] = 1,
    ACTIONS(77), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [379] = 1,
    ACTIONS(79), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [387] = 1,
    ACTIONS(81), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [395] = 2,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 4,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_reg,
      sym_path,
  [405] = 1,
    ACTIONS(85), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
  [413] = 3,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [424] = 4,
    ACTIONS(89), 1,
      sym_type_clock,
    ACTIONS(91), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(42), 1,
      sym_type,
  [437] = 4,
    ACTIONS(89), 1,
      sym_type_clock,
    ACTIONS(91), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(43), 1,
      sym_type,
  [450] = 2,
    ACTIONS(95), 1,
      sym_nat,
    ACTIONS(93), 3,
      anon_sym_LPAREN,
      sym_path,
      sym_word,
  [459] = 4,
    ACTIONS(89), 1,
      sym_type_clock,
    ACTIONS(91), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_type_word,
    STATE(49), 1,
      sym_type,
  [472] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [478] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [484] = 1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [490] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__expr_list_repeat1,
  [500] = 2,
    STATE(12), 1,
      sym_connect_type,
    ACTIONS(106), 2,
      sym_direct,
      sym_latched,
  [508] = 1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [514] = 3,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [524] = 3,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym__expr_list_repeat1,
  [534] = 1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [540] = 3,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
  [550] = 1,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [555] = 1,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [560] = 1,
    ACTIONS(122), 1,
      sym_id,
  [564] = 1,
    ACTIONS(124), 1,
      anon_sym_SEMI,
  [568] = 1,
    ACTIONS(126), 1,
      anon_sym_on,
  [572] = 1,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
  [576] = 1,
    ACTIONS(130), 1,
      sym_id,
  [580] = 1,
    ACTIONS(132), 1,
      sym_nat,
  [584] = 1,
    ACTIONS(134), 1,
      sym_nat,
  [588] = 1,
    ACTIONS(136), 1,
      sym_path,
  [592] = 1,
    ACTIONS(138), 1,
      anon_sym_SEMI,
  [596] = 1,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
  [600] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
  [604] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [608] = 1,
    ACTIONS(146), 1,
      anon_sym_SEMI,
  [612] = 1,
    ACTIONS(148), 1,
      anon_sym_module,
  [616] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [620] = 1,
    ACTIONS(152), 1,
      anon_sym_COLON,
  [624] = 1,
    ACTIONS(154), 1,
      anon_sym_COLON,
  [628] = 1,
    ACTIONS(156), 1,
      anon_sym_SEMI,
  [632] = 1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
  [636] = 1,
    ACTIONS(160), 1,
      sym_id,
  [640] = 1,
    ACTIONS(162), 1,
      sym_id,
  [644] = 1,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
  [648] = 1,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
  [652] = 1,
    ACTIONS(168), 1,
      sym_id,
  [656] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [660] = 1,
    ACTIONS(172), 1,
      sym_id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 314,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 347,
  [SMALL_STATE(18)] = 363,
  [SMALL_STATE(19)] = 371,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 387,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 437,
  [SMALL_STATE(27)] = 450,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 472,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 490,
  [SMALL_STATE(33)] = 500,
  [SMALL_STATE(34)] = 508,
  [SMALL_STATE(35)] = 514,
  [SMALL_STATE(36)] = 524,
  [SMALL_STATE(37)] = 534,
  [SMALL_STATE(38)] = 540,
  [SMALL_STATE(39)] = 550,
  [SMALL_STATE(40)] = 555,
  [SMALL_STATE(41)] = 560,
  [SMALL_STATE(42)] = 564,
  [SMALL_STATE(43)] = 568,
  [SMALL_STATE(44)] = 572,
  [SMALL_STATE(45)] = 576,
  [SMALL_STATE(46)] = 580,
  [SMALL_STATE(47)] = 584,
  [SMALL_STATE(48)] = 588,
  [SMALL_STATE(49)] = 592,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 600,
  [SMALL_STATE(52)] = 604,
  [SMALL_STATE(53)] = 608,
  [SMALL_STATE(54)] = 612,
  [SMALL_STATE(55)] = 616,
  [SMALL_STATE(56)] = 620,
  [SMALL_STATE(57)] = 624,
  [SMALL_STATE(58)] = 628,
  [SMALL_STATE(59)] = 632,
  [SMALL_STATE(60)] = 636,
  [SMALL_STATE(61)] = 640,
  [SMALL_STATE(62)] = 644,
  [SMALL_STATE(63)] = 648,
  [SMALL_STATE(64)] = 652,
  [SMALL_STATE(65)] = 656,
  [SMALL_STATE(66)] = 660,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 6, 0, 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_reference, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 5, 0, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lit, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect_type, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect_type, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 1),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, 0, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_word, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, 0, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, 0, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 6, 0, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
