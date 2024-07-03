#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_DASH_GT = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  aux_sym__word_lit_token1 = 16,
  anon_sym_COMMA = 17,
  anon_sym_Clock = 18,
  anon_sym_Word = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  sym_path = 22,
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
  sym__connect_type = 34,
  sym_expr = 35,
  sym__expr_call = 36,
  sym__expr_idx = 37,
  sym__expr_base = 38,
  sym__expr_lit = 39,
  sym__expr_reference = 40,
  sym__word_lit = 41,
  sym__expr_list = 42,
  sym_typ = 43,
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__word_lit_token1] = "_word_lit_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_Clock] = "Clock",
  [anon_sym_Word] = "Word",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_path] = "path",
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
  [sym__connect_type] = "_connect_type",
  [sym_expr] = "expr",
  [sym__expr_call] = "_expr_call",
  [sym__expr_idx] = "_expr_idx",
  [sym__expr_base] = "_expr_base",
  [sym__expr_lit] = "_expr_lit",
  [sym__expr_reference] = "_expr_reference",
  [sym__word_lit] = "_word_lit",
  [sym__expr_list] = "_expr_list",
  [sym_typ] = "typ",
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__word_lit_token1] = aux_sym__word_lit_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Clock] = anon_sym_Clock,
  [anon_sym_Word] = anon_sym_Word,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_path] = sym_path,
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
  [sym__connect_type] = sym__connect_type,
  [sym_expr] = sym_expr,
  [sym__expr_call] = sym__expr_call,
  [sym__expr_idx] = sym__expr_idx,
  [sym__expr_base] = sym__expr_base,
  [sym__expr_lit] = sym__expr_lit,
  [sym__expr_reference] = sym__expr_reference,
  [sym__word_lit] = sym__word_lit,
  [sym__expr_list] = sym__expr_list,
  [sym_typ] = sym_typ,
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Clock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Word] = {
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
  [sym_path] = {
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
  [sym__connect_type] = {
    .visible = false,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_call] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_idx] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_base] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_lit] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_reference] = {
    .visible = false,
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
  [sym_typ] = {
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
  field_connect_type = 1,
  field_name = 2,
  field_on = 3,
  field_target = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_connect_type] = "connect_type",
  [field_name] = "name",
  [field_on] = "on",
  [field_target] = "target",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_connect_type, 1},
    {field_target, 0},
  [4] =
    {field_name, 1},
    {field_type, 3},
  [6] =
    {field_name, 1},
    {field_on, 5},
    {field_type, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '(', 60,
        ')', 61,
        ',', 63,
        '-', 5,
        ':', 51,
        ';', 46,
        '<', 4,
        'C', 24,
        'W', 30,
        '[', 66,
        ']', 67,
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
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '<') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '}') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(59);
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
      if (lookahead == 'd') ADVANCE(65);
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
      if (lookahead == 'k') ADVANCE(64);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 41:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__word_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Clock);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 39},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__word_lit_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Clock] = ACTIONS(1),
    [anon_sym_Word] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
  },
  [1] = {
    [sym_package] = STATE(59),
    [sym_item] = STATE(13),
    [sym_moddef] = STATE(31),
    [aux_sym_package_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      sym_nat,
    STATE(23), 1,
      sym_expr,
    STATE(53), 1,
      sym__expr_list,
    ACTIONS(13), 2,
      aux_sym__word_lit_token1,
      sym_path,
    STATE(19), 6,
      sym__expr_call,
      sym__expr_idx,
      sym__expr_base,
      sym__expr_lit,
      sym__expr_reference,
      sym__word_lit,
  [28] = 7,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_incoming,
    ACTIONS(21), 1,
      anon_sym_outgoing,
    ACTIONS(23), 1,
      anon_sym_reg,
    ACTIONS(25), 1,
      sym_path,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(52), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [55] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_nat,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_expr,
    ACTIONS(13), 2,
      aux_sym__word_lit_token1,
      sym_path,
    STATE(19), 6,
      sym__expr_call,
      sym__expr_idx,
      sym__expr_base,
      sym__expr_lit,
      sym__expr_reference,
      sym__word_lit,
  [80] = 7,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_incoming,
    ACTIONS(34), 1,
      anon_sym_outgoing,
    ACTIONS(37), 1,
      anon_sym_reg,
    ACTIONS(40), 1,
      sym_path,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(52), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [107] = 7,
    ACTIONS(19), 1,
      anon_sym_incoming,
    ACTIONS(21), 1,
      anon_sym_outgoing,
    ACTIONS(23), 1,
      anon_sym_reg,
    ACTIONS(25), 1,
      sym_path,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_moddef_repeat1,
    STATE(52), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [134] = 7,
    ACTIONS(19), 1,
      anon_sym_incoming,
    ACTIONS(21), 1,
      anon_sym_outgoing,
    ACTIONS(23), 1,
      anon_sym_reg,
    ACTIONS(25), 1,
      sym_path,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_moddef_repeat1,
    STATE(52), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [161] = 7,
    ACTIONS(19), 1,
      anon_sym_incoming,
    ACTIONS(21), 1,
      anon_sym_outgoing,
    ACTIONS(23), 1,
      anon_sym_reg,
    ACTIONS(25), 1,
      sym_path,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_moddef_repeat1,
    STATE(52), 6,
      sym__decl,
      sym__component,
      sym_incoming,
      sym_outgoing,
      sym_reg,
      sym_connect,
  [188] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_nat,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_expr,
    ACTIONS(13), 2,
      aux_sym__word_lit_token1,
      sym_path,
    STATE(19), 6,
      sym__expr_call,
      sym__expr_idx,
      sym__expr_base,
      sym__expr_lit,
      sym__expr_reference,
      sym__word_lit,
  [213] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_nat,
    STATE(34), 1,
      sym_expr,
    ACTIONS(13), 2,
      aux_sym__word_lit_token1,
      sym_path,
    STATE(19), 6,
      sym__expr_call,
      sym__expr_idx,
      sym__expr_base,
      sym__expr_lit,
      sym__expr_reference,
      sym__word_lit,
  [235] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_nat,
    STATE(41), 1,
      sym_expr,
    ACTIONS(13), 2,
      aux_sym__word_lit_token1,
      sym_path,
    STATE(19), 6,
      sym__expr_call,
      sym__expr_idx,
      sym__expr_base,
      sym__expr_lit,
      sym__expr_reference,
      sym__word_lit,
  [257] = 5,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_nat,
    STATE(36), 1,
      sym_expr,
    ACTIONS(13), 2,
      aux_sym__word_lit_token1,
      sym_path,
    STATE(19), 6,
      sym__expr_call,
      sym__expr_idx,
      sym__expr_base,
      sym__expr_lit,
      sym__expr_reference,
      sym__word_lit,
  [279] = 5,
    ACTIONS(5), 1,
      anon_sym_public,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_moddef,
    STATE(14), 2,
      sym_item,
      aux_sym_package_repeat1,
  [296] = 5,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_public,
    ACTIONS(58), 1,
      anon_sym_module,
    STATE(31), 1,
      sym_moddef,
    STATE(14), 2,
      sym_item,
      aux_sym_package_repeat1,
  [313] = 2,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 4,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_reg,
      sym_path,
  [323] = 1,
    ACTIONS(63), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [330] = 1,
    ACTIONS(65), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [337] = 1,
    ACTIONS(67), 4,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [344] = 2,
    ACTIONS(71), 1,
      anon_sym_DASH_GT,
    ACTIONS(69), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [353] = 2,
    STATE(12), 1,
      sym__connect_type,
    ACTIONS(73), 2,
      sym_direct,
      sym_latched,
  [361] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym__expr_list_repeat1,
  [371] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [377] = 3,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym__expr_list_repeat1,
  [387] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [393] = 3,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym__expr_list_repeat1,
  [403] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [409] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [415] = 3,
    ACTIONS(94), 1,
      anon_sym_Clock,
    ACTIONS(96), 1,
      anon_sym_Word,
    STATE(38), 1,
      sym_typ,
  [425] = 3,
    ACTIONS(94), 1,
      anon_sym_Clock,
    ACTIONS(96), 1,
      anon_sym_Word,
    STATE(39), 1,
      sym_typ,
  [435] = 3,
    ACTIONS(94), 1,
      anon_sym_Clock,
    ACTIONS(96), 1,
      anon_sym_Word,
    STATE(40), 1,
      sym_typ,
  [445] = 1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_public,
      anon_sym_module,
  [451] = 1,
    ACTIONS(100), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [456] = 1,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_on,
  [461] = 1,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [466] = 1,
    ACTIONS(104), 1,
      sym_id,
  [470] = 1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [474] = 1,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
  [478] = 1,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [482] = 1,
    ACTIONS(112), 1,
      anon_sym_SEMI,
  [486] = 1,
    ACTIONS(114), 1,
      anon_sym_on,
  [490] = 1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
  [494] = 1,
    ACTIONS(118), 1,
      sym_id,
  [498] = 1,
    ACTIONS(120), 1,
      sym_nat,
  [502] = 1,
    ACTIONS(122), 1,
      sym_path,
  [506] = 1,
    ACTIONS(124), 1,
      anon_sym_module,
  [510] = 1,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
  [514] = 1,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
  [518] = 1,
    ACTIONS(130), 1,
      anon_sym_SEMI,
  [522] = 1,
    ACTIONS(132), 1,
      anon_sym_COLON,
  [526] = 1,
    ACTIONS(134), 1,
      anon_sym_COLON,
  [530] = 1,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [534] = 1,
    ACTIONS(138), 1,
      anon_sym_SEMI,
  [538] = 1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [542] = 1,
    ACTIONS(142), 1,
      sym_id,
  [546] = 1,
    ACTIONS(144), 1,
      sym_id,
  [550] = 1,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
  [554] = 1,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
  [558] = 1,
    ACTIONS(150), 1,
      sym_id,
  [562] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [566] = 1,
    ACTIONS(154), 1,
      sym_id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 257,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 330,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 344,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 361,
  [SMALL_STATE(22)] = 371,
  [SMALL_STATE(23)] = 377,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 409,
  [SMALL_STATE(28)] = 415,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 435,
  [SMALL_STATE(31)] = 445,
  [SMALL_STATE(32)] = 451,
  [SMALL_STATE(33)] = 456,
  [SMALL_STATE(34)] = 461,
  [SMALL_STATE(35)] = 466,
  [SMALL_STATE(36)] = 470,
  [SMALL_STATE(37)] = 474,
  [SMALL_STATE(38)] = 478,
  [SMALL_STATE(39)] = 482,
  [SMALL_STATE(40)] = 486,
  [SMALL_STATE(41)] = 490,
  [SMALL_STATE(42)] = 494,
  [SMALL_STATE(43)] = 498,
  [SMALL_STATE(44)] = 502,
  [SMALL_STATE(45)] = 506,
  [SMALL_STATE(46)] = 510,
  [SMALL_STATE(47)] = 514,
  [SMALL_STATE(48)] = 518,
  [SMALL_STATE(49)] = 522,
  [SMALL_STATE(50)] = 526,
  [SMALL_STATE(51)] = 530,
  [SMALL_STATE(52)] = 534,
  [SMALL_STATE(53)] = 538,
  [SMALL_STATE(54)] = 542,
  [SMALL_STATE(55)] = 546,
  [SMALL_STATE(56)] = 550,
  [SMALL_STATE(57)] = 554,
  [SMALL_STATE(58)] = 558,
  [SMALL_STATE(59)] = 562,
  [SMALL_STATE(60)] = 566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_base, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_call, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_call, 6, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, 0, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, 0, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typ, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, 0, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, 0, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, 0, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 6, 0, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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
