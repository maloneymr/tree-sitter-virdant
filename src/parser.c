#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 206
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_pub = 3,
  anon_sym_ext = 4,
  anon_sym_mod = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_struct = 8,
  anon_sym_type = 9,
  anon_sym_COLON = 10,
  anon_sym_union = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_port = 14,
  anon_sym_mosi = 15,
  anon_sym_miso = 16,
  anon_sym_COMMA = 17,
  anon_sym_implicit = 18,
  anon_sym_incoming = 19,
  anon_sym_outgoing = 20,
  anon_sym_node = 21,
  anon_sym_reg = 22,
  anon_sym_on = 23,
  anon_sym_of = 24,
  anon_sym_master = 25,
  anon_sym_slave = 26,
  sym_direct = 27,
  sym_latched = 28,
  anon_sym_if = 29,
  anon_sym_else = 30,
  anon_sym_match = 31,
  anon_sym_EQ_GT = 32,
  anon_sym_DASH_GT = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_DOT_DOT = 36,
  sym_type_clock = 37,
  anon_sym_Word = 38,
  sym_path = 39,
  aux_sym_word_token1 = 40,
  aux_sym_word_token2 = 41,
  aux_sym_word_token3 = 42,
  sym_nat = 43,
  sym_ctor = 44,
  sym_qualident = 45,
  sym_ident = 46,
  sym_comment_line = 47,
  sym_comment_block = 48,
  sym_package = 49,
  sym_package_import = 50,
  sym_item = 51,
  sym_moddef = 52,
  sym_structdef = 53,
  sym_field = 54,
  sym_uniondef = 55,
  sym_alt = 56,
  sym_portdef = 57,
  sym_channel = 58,
  sym_channeldir = 59,
  sym_typelist = 60,
  sym__decl = 61,
  sym__component = 62,
  sym_implicit = 63,
  sym_incoming = 64,
  sym_outgoing = 65,
  sym_node = 66,
  sym_reg = 67,
  sym_port = 68,
  sym_port_role = 69,
  sym_connect = 70,
  sym_submodule = 71,
  sym_connect_type = 72,
  sym_expr = 73,
  sym_expr_if = 74,
  sym_expr_match = 75,
  sym_match_arm = 76,
  sym_pat = 77,
  sym_patlist = 78,
  sym_expr_call = 79,
  sym_expr_idx = 80,
  sym_expr_lit = 81,
  sym_expr_reference = 82,
  sym__word_lit = 83,
  sym__expr_list = 84,
  sym_type = 85,
  sym_type_word = 86,
  sym_word = 87,
  aux_sym_package_repeat1 = 88,
  aux_sym_package_repeat2 = 89,
  aux_sym_moddef_repeat1 = 90,
  aux_sym_structdef_repeat1 = 91,
  aux_sym_uniondef_repeat1 = 92,
  aux_sym_portdef_repeat1 = 93,
  aux_sym_typelist_repeat1 = 94,
  aux_sym_expr_if_repeat1 = 95,
  aux_sym_expr_match_repeat1 = 96,
  aux_sym_patlist_repeat1 = 97,
  aux_sym__expr_list_repeat1 = 98,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_pub] = "pub",
  [anon_sym_ext] = "ext",
  [anon_sym_mod] = "mod",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_struct] = "struct",
  [anon_sym_type] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_union] = "union",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_port] = "port",
  [anon_sym_mosi] = "mosi",
  [anon_sym_miso] = "miso",
  [anon_sym_COMMA] = ",",
  [anon_sym_implicit] = "implicit",
  [anon_sym_incoming] = "incoming",
  [anon_sym_outgoing] = "outgoing",
  [anon_sym_node] = "node",
  [anon_sym_reg] = "reg",
  [anon_sym_on] = "on",
  [anon_sym_of] = "of",
  [anon_sym_master] = "master",
  [anon_sym_slave] = "slave",
  [sym_direct] = "direct",
  [sym_latched] = "latched",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT_DOT] = "..",
  [sym_type_clock] = "type_clock",
  [anon_sym_Word] = "Word",
  [sym_path] = "path",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_token3] = "word_token3",
  [sym_nat] = "nat",
  [sym_ctor] = "ctor",
  [sym_qualident] = "qualident",
  [sym_ident] = "ident",
  [sym_comment_line] = "comment_line",
  [sym_comment_block] = "comment_block",
  [sym_package] = "package",
  [sym_package_import] = "package_import",
  [sym_item] = "item",
  [sym_moddef] = "moddef",
  [sym_structdef] = "structdef",
  [sym_field] = "field",
  [sym_uniondef] = "uniondef",
  [sym_alt] = "alt",
  [sym_portdef] = "portdef",
  [sym_channel] = "channel",
  [sym_channeldir] = "channeldir",
  [sym_typelist] = "typelist",
  [sym__decl] = "_decl",
  [sym__component] = "_component",
  [sym_implicit] = "implicit",
  [sym_incoming] = "incoming",
  [sym_outgoing] = "outgoing",
  [sym_node] = "node",
  [sym_reg] = "reg",
  [sym_port] = "port",
  [sym_port_role] = "port_role",
  [sym_connect] = "connect",
  [sym_submodule] = "submodule",
  [sym_connect_type] = "connect_type",
  [sym_expr] = "expr",
  [sym_expr_if] = "expr_if",
  [sym_expr_match] = "expr_match",
  [sym_match_arm] = "match_arm",
  [sym_pat] = "pat",
  [sym_patlist] = "patlist",
  [sym_expr_call] = "expr_call",
  [sym_expr_idx] = "expr_idx",
  [sym_expr_lit] = "expr_lit",
  [sym_expr_reference] = "expr_reference",
  [sym__word_lit] = "_word_lit",
  [sym__expr_list] = "_expr_list",
  [sym_type] = "type",
  [sym_type_word] = "type_word",
  [sym_word] = "word",
  [aux_sym_package_repeat1] = "package_repeat1",
  [aux_sym_package_repeat2] = "package_repeat2",
  [aux_sym_moddef_repeat1] = "moddef_repeat1",
  [aux_sym_structdef_repeat1] = "structdef_repeat1",
  [aux_sym_uniondef_repeat1] = "uniondef_repeat1",
  [aux_sym_portdef_repeat1] = "portdef_repeat1",
  [aux_sym_typelist_repeat1] = "typelist_repeat1",
  [aux_sym_expr_if_repeat1] = "expr_if_repeat1",
  [aux_sym_expr_match_repeat1] = "expr_match_repeat1",
  [aux_sym_patlist_repeat1] = "patlist_repeat1",
  [aux_sym__expr_list_repeat1] = "_expr_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_ext] = anon_sym_ext,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_mosi] = anon_sym_mosi,
  [anon_sym_miso] = anon_sym_miso,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_incoming] = anon_sym_incoming,
  [anon_sym_outgoing] = anon_sym_outgoing,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_master] = anon_sym_master,
  [anon_sym_slave] = anon_sym_slave,
  [sym_direct] = sym_direct,
  [sym_latched] = sym_latched,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_type_clock] = sym_type_clock,
  [anon_sym_Word] = anon_sym_Word,
  [sym_path] = sym_path,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_token2] = aux_sym_word_token2,
  [aux_sym_word_token3] = aux_sym_word_token3,
  [sym_nat] = sym_nat,
  [sym_ctor] = sym_ctor,
  [sym_qualident] = sym_qualident,
  [sym_ident] = sym_ident,
  [sym_comment_line] = sym_comment_line,
  [sym_comment_block] = sym_comment_block,
  [sym_package] = sym_package,
  [sym_package_import] = sym_package_import,
  [sym_item] = sym_item,
  [sym_moddef] = sym_moddef,
  [sym_structdef] = sym_structdef,
  [sym_field] = sym_field,
  [sym_uniondef] = sym_uniondef,
  [sym_alt] = sym_alt,
  [sym_portdef] = sym_portdef,
  [sym_channel] = sym_channel,
  [sym_channeldir] = sym_channeldir,
  [sym_typelist] = sym_typelist,
  [sym__decl] = sym__decl,
  [sym__component] = sym__component,
  [sym_implicit] = sym_implicit,
  [sym_incoming] = sym_incoming,
  [sym_outgoing] = sym_outgoing,
  [sym_node] = sym_node,
  [sym_reg] = sym_reg,
  [sym_port] = sym_port,
  [sym_port_role] = sym_port_role,
  [sym_connect] = sym_connect,
  [sym_submodule] = sym_submodule,
  [sym_connect_type] = sym_connect_type,
  [sym_expr] = sym_expr,
  [sym_expr_if] = sym_expr_if,
  [sym_expr_match] = sym_expr_match,
  [sym_match_arm] = sym_match_arm,
  [sym_pat] = sym_pat,
  [sym_patlist] = sym_patlist,
  [sym_expr_call] = sym_expr_call,
  [sym_expr_idx] = sym_expr_idx,
  [sym_expr_lit] = sym_expr_lit,
  [sym_expr_reference] = sym_expr_reference,
  [sym__word_lit] = sym__word_lit,
  [sym__expr_list] = sym__expr_list,
  [sym_type] = sym_type,
  [sym_type_word] = sym_type_word,
  [sym_word] = sym_word,
  [aux_sym_package_repeat1] = aux_sym_package_repeat1,
  [aux_sym_package_repeat2] = aux_sym_package_repeat2,
  [aux_sym_moddef_repeat1] = aux_sym_moddef_repeat1,
  [aux_sym_structdef_repeat1] = aux_sym_structdef_repeat1,
  [aux_sym_uniondef_repeat1] = aux_sym_uniondef_repeat1,
  [aux_sym_portdef_repeat1] = aux_sym_portdef_repeat1,
  [aux_sym_typelist_repeat1] = aux_sym_typelist_repeat1,
  [aux_sym_expr_if_repeat1] = aux_sym_expr_if_repeat1,
  [aux_sym_expr_match_repeat1] = aux_sym_expr_match_repeat1,
  [aux_sym_patlist_repeat1] = aux_sym_patlist_repeat1,
  [aux_sym__expr_list_repeat1] = aux_sym__expr_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
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
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mosi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miso] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incoming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outgoing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
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
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_master] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slave] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [anon_sym_DOT_DOT] = {
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
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_nat] = {
    .visible = true,
    .named = true,
  },
  [sym_ctor] = {
    .visible = true,
    .named = true,
  },
  [sym_qualident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
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
  [sym_package_import] = {
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
  [sym_structdef] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_uniondef] = {
    .visible = true,
    .named = true,
  },
  [sym_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_portdef] = {
    .visible = true,
    .named = true,
  },
  [sym_channel] = {
    .visible = true,
    .named = true,
  },
  [sym_channeldir] = {
    .visible = true,
    .named = true,
  },
  [sym_typelist] = {
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
  [sym_implicit] = {
    .visible = true,
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
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_port_role] = {
    .visible = true,
    .named = true,
  },
  [sym_connect] = {
    .visible = true,
    .named = true,
  },
  [sym_submodule] = {
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
  [sym_expr_if] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_match] = {
    .visible = true,
    .named = true,
  },
  [sym_match_arm] = {
    .visible = true,
    .named = true,
  },
  [sym_pat] = {
    .visible = true,
    .named = true,
  },
  [sym_patlist] = {
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
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moddef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_structdef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uniondef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_portdef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typelist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_patlist_repeat1] = {
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
  field_module = 5,
  field_name = 6,
  field_on = 7,
  field_portdef = 8,
  field_role = 9,
  field_subject = 10,
  field_target = 11,
  field_type = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_connect_type] = "connect_type",
  [field_expr] = "expr",
  [field_method] = "method",
  [field_module] = "module",
  [field_name] = "name",
  [field_on] = "on",
  [field_portdef] = "portdef",
  [field_role] = "role",
  [field_subject] = "subject",
  [field_target] = "target",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 3},
  [3] =
    {field_connect_type, 1},
    {field_expr, 2},
    {field_target, 0},
  [6] =
    {field_module, 3},
    {field_name, 1},
  [8] =
    {field_name, 1},
    {field_type, 3},
  [10] =
    {field_name, 2},
    {field_portdef, 4},
    {field_role, 0},
  [13] =
    {field_name, 1},
    {field_on, 5},
    {field_type, 3},
  [16] =
    {field_args, 2},
  [17] =
    {field_method, 2},
    {field_subject, 0},
  [19] =
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '(', 107,
        ')', 108,
        ',', 112,
        '-', 15,
        '.', 8,
        '/', 5,
        '0', 191,
        ':', 105,
        ';', 95,
        '<', 14,
        '=', 16,
        '@', 90,
        'C', 50,
        'W', 57,
        '[', 139,
        ']', 140,
        'e', 48,
        'i', 34,
        'm', 17,
        'n', 58,
        'o', 35,
        'p', 62,
        'r', 28,
        's', 49,
        't', 84,
        'u', 53,
        '{', 100,
        '}', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '(', 107,
        ')', 108,
        '/', 5,
        '0', 191,
        ':', 13,
        '<', 14,
        '@', 90,
        'i', 158,
        'm', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ')', 108,
        ',', 112,
        '-', 15,
        '/', 5,
        ':', 104,
        ';', 95,
        '[', 139,
        'i', 170,
        'm', 146,
        'n', 175,
        'o', 184,
        'r', 154,
        's', 168,
        '{', 100,
        '}', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '}') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(199);
      if (lookahead == 'W') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(209);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 83:
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 90:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 91:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 92:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ext);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_mosi);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_miso);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_incoming);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_incoming);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_outgoing);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_outgoing);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_node);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_reg);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_master);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_master);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_slave);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_slave);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_direct);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_latched);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_type_clock);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_type_clock);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_Word);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Word);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == 'w') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == 'w') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_nat);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ctor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'k') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_qualident);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_qualident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment_block);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_ext] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_mosi] = ACTIONS(1),
    [anon_sym_miso] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_incoming] = ACTIONS(1),
    [anon_sym_outgoing] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_master] = ACTIONS(1),
    [anon_sym_slave] = ACTIONS(1),
    [sym_direct] = ACTIONS(1),
    [sym_latched] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_type_clock] = ACTIONS(1),
    [anon_sym_Word] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_token3] = ACTIONS(1),
    [sym_nat] = ACTIONS(1),
    [sym_ctor] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
  [1] = {
    [sym_package] = STATE(196),
    [sym_package_import] = STATE(23),
    [sym_item] = STATE(24),
    [sym_moddef] = STATE(59),
    [sym_structdef] = STATE(59),
    [sym_uniondef] = STATE(59),
    [sym_portdef] = STATE(59),
    [aux_sym_package_repeat1] = STATE(23),
    [aux_sym_package_repeat2] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_pub] = ACTIONS(9),
    [anon_sym_ext] = ACTIONS(11),
    [anon_sym_mod] = ACTIONS(13),
    [anon_sym_struct] = ACTIONS(15),
    [anon_sym_union] = ACTIONS(17),
    [anon_sym_port] = ACTIONS(19),
    [sym_comment_line] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(21), 1,
      anon_sym_mod,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_implicit,
    ACTIONS(29), 1,
      anon_sym_incoming,
    ACTIONS(32), 1,
      anon_sym_outgoing,
    ACTIONS(35), 1,
      anon_sym_node,
    ACTIONS(38), 1,
      anon_sym_reg,
    ACTIONS(44), 1,
      sym_path,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(167), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(41), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(130), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [51] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    STATE(6), 1,
      aux_sym_moddef_repeat1,
    STATE(167), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(130), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [102] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_moddef_repeat1,
    STATE(167), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(130), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [153] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_moddef_repeat1,
    STATE(167), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(130), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [204] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(167), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(130), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [255] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(167), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(130), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [306] = 13,
    ACTIONS(47), 1,
      anon_sym_mod,
    ACTIONS(51), 1,
      anon_sym_implicit,
    ACTIONS(53), 1,
      anon_sym_incoming,
    ACTIONS(55), 1,
      anon_sym_outgoing,
    ACTIONS(57), 1,
      anon_sym_node,
    ACTIONS(59), 1,
      anon_sym_reg,
    ACTIONS(63), 1,
      sym_path,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_moddef_repeat1,
    STATE(167), 1,
      sym_port_role,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(61), 2,
      anon_sym_master,
      anon_sym_slave,
    STATE(130), 10,
      sym__decl,
      sym__component,
      sym_implicit,
      sym_incoming,
      sym_outgoing,
      sym_node,
      sym_reg,
      sym_port,
      sym_connect,
      sym_submodule,
  [357] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(75), 1,
      sym_expr,
    STATE(135), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [408] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_expr,
    STATE(170), 1,
      sym__expr_list,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [459] = 13,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [507] = 13,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [555] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(103), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [600] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(112), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [645] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(113), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [690] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(102), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [735] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(87), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [780] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(107), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [825] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(104), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [870] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(105), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [915] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(91), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [960] = 12,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_match,
    ACTIONS(83), 1,
      sym_path,
    ACTIONS(87), 1,
      aux_sym_word_token3,
    ACTIONS(89), 1,
      sym_nat,
    ACTIONS(91), 1,
      sym_ctor,
    STATE(89), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(85), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    STATE(42), 2,
      sym__word_lit,
      sym_word,
    STATE(40), 6,
      sym_expr_if,
      sym_expr_match,
      sym_expr_call,
      sym_expr_idx,
      sym_expr_lit,
      sym_expr_reference,
  [1005] = 12,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_port,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(26), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(28), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    STATE(59), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1048] = 10,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_port,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(59), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1084] = 10,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_pub,
    ACTIONS(106), 1,
      anon_sym_ext,
    ACTIONS(109), 1,
      anon_sym_mod,
    ACTIONS(112), 1,
      anon_sym_struct,
    ACTIONS(115), 1,
      anon_sym_union,
    ACTIONS(118), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(59), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1120] = 10,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_ext,
    ACTIONS(13), 1,
      anon_sym_mod,
    ACTIONS(15), 1,
      anon_sym_struct,
    ACTIONS(17), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_port,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(25), 2,
      sym_item,
      aux_sym_package_repeat2,
    STATE(59), 4,
      sym_moddef,
      sym_structdef,
      sym_uniondef,
      sym_portdef,
  [1156] = 3,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(123), 9,
      anon_sym_mod,
      anon_sym_implicit,
      anon_sym_incoming,
      anon_sym_outgoing,
      anon_sym_node,
      anon_sym_reg,
      anon_sym_master,
      anon_sym_slave,
      sym_path,
  [1175] = 4,
    ACTIONS(127), 1,
      anon_sym_import,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(28), 2,
      sym_package_import,
      aux_sym_package_repeat1,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1196] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(130), 4,
      anon_sym_LPAREN,
      aux_sym_word_token1,
      aux_sym_word_token2,
      sym_ctor,
    ACTIONS(132), 5,
      anon_sym_if,
      anon_sym_match,
      sym_path,
      aux_sym_word_token3,
      sym_nat,
  [1214] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1229] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(136), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1244] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(138), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1259] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(140), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1274] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(142), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1289] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(144), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1304] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(146), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1319] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(148), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1334] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(150), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1349] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(152), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1364] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(154), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1379] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(156), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1394] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(158), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1409] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(160), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1424] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(162), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1439] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(164), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1454] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(166), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1469] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(168), 8,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
  [1484] = 6,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      sym_ctor,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(52), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1506] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1520] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1534] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(48), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1556] = 6,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym_ctor,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(184), 2,
      anon_sym_else,
      sym_ident,
    STATE(52), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1578] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1592] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1606] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1620] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1634] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(66), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1656] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1670] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1684] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1698] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1712] = 7,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(108), 1,
      sym_type,
    STATE(144), 1,
      sym_typelist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [1736] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(214), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1750] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1764] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_pub,
      anon_sym_ext,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_union,
      anon_sym_port,
  [1778] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
    STATE(52), 2,
      sym_match_arm,
      aux_sym_expr_match_repeat1,
  [1800] = 5,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(224), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(67), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1819] = 6,
    ACTIONS(212), 1,
      anon_sym_Word,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym_type_word,
    STATE(122), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [1840] = 5,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(231), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(72), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1859] = 6,
    ACTIONS(212), 1,
      anon_sym_Word,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym_type_word,
    STATE(122), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [1880] = 6,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_pat,
    STATE(178), 1,
      sym_patlist,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [1901] = 5,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_channeldir,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(231), 2,
      anon_sym_mosi,
      anon_sym_miso,
    STATE(67), 2,
      sym_channel,
      aux_sym_portdef_repeat1,
  [1920] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(173), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [1938] = 5,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [1956] = 6,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [1976] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(122), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [1994] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(150), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [2012] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(140), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [2030] = 5,
    ACTIONS(174), 1,
      sym_ctor,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [2048] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(175), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [2066] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(168), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [2084] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(131), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [2102] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(132), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [2120] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(251), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_on,
  [2132] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(253), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_on,
  [2144] = 5,
    ACTIONS(212), 1,
      anon_sym_Word,
    STATE(85), 1,
      sym_type_word,
    STATE(205), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(210), 2,
      sym_type_clock,
      sym_qualident,
  [2162] = 5,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2179] = 4,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(96), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2194] = 5,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2211] = 3,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(265), 2,
      anon_sym_RBRACE,
      sym_ctor,
    ACTIONS(267), 2,
      anon_sym_else,
      sym_ident,
  [2224] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(269), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2239] = 4,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(94), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2254] = 4,
    ACTIONS(174), 1,
      sym_ctor,
    STATE(125), 1,
      sym_pat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(172), 2,
      anon_sym_else,
      sym_ident,
  [2269] = 4,
    ACTIONS(273), 1,
      sym_ident,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(97), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2284] = 4,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(95), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2299] = 4,
    ACTIONS(261), 1,
      sym_ident,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(95), 2,
      sym_field,
      aux_sym_structdef_repeat1,
  [2314] = 4,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    STATE(97), 2,
      sym_alt,
      aux_sym_uniondef_repeat1,
  [2329] = 4,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2343] = 3,
    STATE(13), 1,
      sym_connect_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(292), 2,
      sym_direct,
      sym_latched,
  [2355] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(294), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2365] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(296), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2375] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2389] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2403] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2417] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2431] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(306), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [2441] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2455] = 4,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2469] = 4,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2483] = 4,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2497] = 4,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym__expr_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2511] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2525] = 4,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2539] = 4,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_patlist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2553] = 4,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2567] = 4,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_typelist_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2581] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(338), 3,
      anon_sym_RBRACE,
      anon_sym_mosi,
      anon_sym_miso,
  [2591] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(340), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2600] = 3,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    ACTIONS(344), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2611] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(346), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2620] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(348), 2,
      anon_sym_RBRACE,
      sym_ident,
  [2629] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(331), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2638] = 3,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2649] = 3,
    ACTIONS(352), 1,
      anon_sym_ext,
    ACTIONS(354), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2660] = 2,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2669] = 3,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2680] = 3,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_expr_if_repeat1,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2691] = 3,
    ACTIONS(358), 1,
      anon_sym_if,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2702] = 2,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2710] = 2,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2718] = 2,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2726] = 2,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2734] = 2,
    ACTIONS(373), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2742] = 2,
    ACTIONS(375), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2750] = 2,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2758] = 2,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2766] = 2,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2774] = 2,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2782] = 2,
    ACTIONS(385), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2790] = 2,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2798] = 2,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2806] = 2,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2814] = 2,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2822] = 2,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2830] = 2,
    ACTIONS(397), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2838] = 2,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2846] = 2,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2854] = 2,
    ACTIONS(403), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2862] = 2,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2870] = 2,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2878] = 2,
    ACTIONS(409), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2886] = 2,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2894] = 2,
    ACTIONS(413), 1,
      sym_qualident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2902] = 2,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2910] = 2,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2918] = 2,
    ACTIONS(419), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2926] = 2,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2934] = 2,
    ACTIONS(423), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2942] = 2,
    ACTIONS(425), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2950] = 2,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2958] = 2,
    ACTIONS(429), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2966] = 2,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2974] = 2,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2982] = 2,
    ACTIONS(435), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2990] = 2,
    ACTIONS(437), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [2998] = 2,
    ACTIONS(439), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3006] = 2,
    ACTIONS(441), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3014] = 2,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3022] = 2,
    ACTIONS(445), 1,
      anon_sym_port,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3030] = 2,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3038] = 2,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3046] = 2,
    ACTIONS(451), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3054] = 2,
    ACTIONS(453), 1,
      anon_sym_on,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3062] = 2,
    ACTIONS(455), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3070] = 2,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3078] = 2,
    ACTIONS(459), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3086] = 2,
    ACTIONS(461), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3094] = 2,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3102] = 2,
    ACTIONS(465), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3110] = 2,
    ACTIONS(467), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3118] = 2,
    ACTIONS(469), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3126] = 2,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3134] = 2,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3142] = 2,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3150] = 2,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3158] = 2,
    ACTIONS(479), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3166] = 2,
    ACTIONS(481), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3174] = 2,
    ACTIONS(483), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3182] = 2,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3190] = 2,
    ACTIONS(487), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3198] = 2,
    ACTIONS(489), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3206] = 2,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3214] = 2,
    ACTIONS(493), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3222] = 2,
    ACTIONS(495), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3230] = 2,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3238] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3246] = 2,
    ACTIONS(358), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3254] = 2,
    ACTIONS(501), 1,
      sym_nat,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3262] = 2,
    ACTIONS(503), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3270] = 2,
    ACTIONS(505), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3278] = 2,
    ACTIONS(507), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3286] = 2,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3294] = 2,
    ACTIONS(511), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3302] = 2,
    ACTIONS(354), 1,
      anon_sym_mod,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
  [3310] = 2,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_line,
      sym_comment_block,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 600,
  [SMALL_STATE(15)] = 645,
  [SMALL_STATE(16)] = 690,
  [SMALL_STATE(17)] = 735,
  [SMALL_STATE(18)] = 780,
  [SMALL_STATE(19)] = 825,
  [SMALL_STATE(20)] = 870,
  [SMALL_STATE(21)] = 915,
  [SMALL_STATE(22)] = 960,
  [SMALL_STATE(23)] = 1005,
  [SMALL_STATE(24)] = 1048,
  [SMALL_STATE(25)] = 1084,
  [SMALL_STATE(26)] = 1120,
  [SMALL_STATE(27)] = 1156,
  [SMALL_STATE(28)] = 1175,
  [SMALL_STATE(29)] = 1196,
  [SMALL_STATE(30)] = 1214,
  [SMALL_STATE(31)] = 1229,
  [SMALL_STATE(32)] = 1244,
  [SMALL_STATE(33)] = 1259,
  [SMALL_STATE(34)] = 1274,
  [SMALL_STATE(35)] = 1289,
  [SMALL_STATE(36)] = 1304,
  [SMALL_STATE(37)] = 1319,
  [SMALL_STATE(38)] = 1334,
  [SMALL_STATE(39)] = 1349,
  [SMALL_STATE(40)] = 1364,
  [SMALL_STATE(41)] = 1379,
  [SMALL_STATE(42)] = 1394,
  [SMALL_STATE(43)] = 1409,
  [SMALL_STATE(44)] = 1424,
  [SMALL_STATE(45)] = 1439,
  [SMALL_STATE(46)] = 1454,
  [SMALL_STATE(47)] = 1469,
  [SMALL_STATE(48)] = 1484,
  [SMALL_STATE(49)] = 1506,
  [SMALL_STATE(50)] = 1520,
  [SMALL_STATE(51)] = 1534,
  [SMALL_STATE(52)] = 1556,
  [SMALL_STATE(53)] = 1578,
  [SMALL_STATE(54)] = 1592,
  [SMALL_STATE(55)] = 1606,
  [SMALL_STATE(56)] = 1620,
  [SMALL_STATE(57)] = 1634,
  [SMALL_STATE(58)] = 1656,
  [SMALL_STATE(59)] = 1670,
  [SMALL_STATE(60)] = 1684,
  [SMALL_STATE(61)] = 1698,
  [SMALL_STATE(62)] = 1712,
  [SMALL_STATE(63)] = 1736,
  [SMALL_STATE(64)] = 1750,
  [SMALL_STATE(65)] = 1764,
  [SMALL_STATE(66)] = 1778,
  [SMALL_STATE(67)] = 1800,
  [SMALL_STATE(68)] = 1819,
  [SMALL_STATE(69)] = 1840,
  [SMALL_STATE(70)] = 1859,
  [SMALL_STATE(71)] = 1880,
  [SMALL_STATE(72)] = 1901,
  [SMALL_STATE(73)] = 1920,
  [SMALL_STATE(74)] = 1938,
  [SMALL_STATE(75)] = 1956,
  [SMALL_STATE(76)] = 1976,
  [SMALL_STATE(77)] = 1994,
  [SMALL_STATE(78)] = 2012,
  [SMALL_STATE(79)] = 2030,
  [SMALL_STATE(80)] = 2048,
  [SMALL_STATE(81)] = 2066,
  [SMALL_STATE(82)] = 2084,
  [SMALL_STATE(83)] = 2102,
  [SMALL_STATE(84)] = 2120,
  [SMALL_STATE(85)] = 2132,
  [SMALL_STATE(86)] = 2144,
  [SMALL_STATE(87)] = 2162,
  [SMALL_STATE(88)] = 2179,
  [SMALL_STATE(89)] = 2194,
  [SMALL_STATE(90)] = 2211,
  [SMALL_STATE(91)] = 2224,
  [SMALL_STATE(92)] = 2239,
  [SMALL_STATE(93)] = 2254,
  [SMALL_STATE(94)] = 2269,
  [SMALL_STATE(95)] = 2284,
  [SMALL_STATE(96)] = 2299,
  [SMALL_STATE(97)] = 2314,
  [SMALL_STATE(98)] = 2329,
  [SMALL_STATE(99)] = 2343,
  [SMALL_STATE(100)] = 2355,
  [SMALL_STATE(101)] = 2365,
  [SMALL_STATE(102)] = 2375,
  [SMALL_STATE(103)] = 2389,
  [SMALL_STATE(104)] = 2403,
  [SMALL_STATE(105)] = 2417,
  [SMALL_STATE(106)] = 2431,
  [SMALL_STATE(107)] = 2441,
  [SMALL_STATE(108)] = 2455,
  [SMALL_STATE(109)] = 2469,
  [SMALL_STATE(110)] = 2483,
  [SMALL_STATE(111)] = 2497,
  [SMALL_STATE(112)] = 2511,
  [SMALL_STATE(113)] = 2525,
  [SMALL_STATE(114)] = 2539,
  [SMALL_STATE(115)] = 2553,
  [SMALL_STATE(116)] = 2567,
  [SMALL_STATE(117)] = 2581,
  [SMALL_STATE(118)] = 2591,
  [SMALL_STATE(119)] = 2600,
  [SMALL_STATE(120)] = 2611,
  [SMALL_STATE(121)] = 2620,
  [SMALL_STATE(122)] = 2629,
  [SMALL_STATE(123)] = 2638,
  [SMALL_STATE(124)] = 2649,
  [SMALL_STATE(125)] = 2660,
  [SMALL_STATE(126)] = 2669,
  [SMALL_STATE(127)] = 2680,
  [SMALL_STATE(128)] = 2691,
  [SMALL_STATE(129)] = 2702,
  [SMALL_STATE(130)] = 2710,
  [SMALL_STATE(131)] = 2718,
  [SMALL_STATE(132)] = 2726,
  [SMALL_STATE(133)] = 2734,
  [SMALL_STATE(134)] = 2742,
  [SMALL_STATE(135)] = 2750,
  [SMALL_STATE(136)] = 2758,
  [SMALL_STATE(137)] = 2766,
  [SMALL_STATE(138)] = 2774,
  [SMALL_STATE(139)] = 2782,
  [SMALL_STATE(140)] = 2790,
  [SMALL_STATE(141)] = 2798,
  [SMALL_STATE(142)] = 2806,
  [SMALL_STATE(143)] = 2814,
  [SMALL_STATE(144)] = 2822,
  [SMALL_STATE(145)] = 2830,
  [SMALL_STATE(146)] = 2838,
  [SMALL_STATE(147)] = 2846,
  [SMALL_STATE(148)] = 2854,
  [SMALL_STATE(149)] = 2862,
  [SMALL_STATE(150)] = 2870,
  [SMALL_STATE(151)] = 2878,
  [SMALL_STATE(152)] = 2886,
  [SMALL_STATE(153)] = 2894,
  [SMALL_STATE(154)] = 2902,
  [SMALL_STATE(155)] = 2910,
  [SMALL_STATE(156)] = 2918,
  [SMALL_STATE(157)] = 2926,
  [SMALL_STATE(158)] = 2934,
  [SMALL_STATE(159)] = 2942,
  [SMALL_STATE(160)] = 2950,
  [SMALL_STATE(161)] = 2958,
  [SMALL_STATE(162)] = 2966,
  [SMALL_STATE(163)] = 2974,
  [SMALL_STATE(164)] = 2982,
  [SMALL_STATE(165)] = 2990,
  [SMALL_STATE(166)] = 2998,
  [SMALL_STATE(167)] = 3006,
  [SMALL_STATE(168)] = 3014,
  [SMALL_STATE(169)] = 3022,
  [SMALL_STATE(170)] = 3030,
  [SMALL_STATE(171)] = 3038,
  [SMALL_STATE(172)] = 3046,
  [SMALL_STATE(173)] = 3054,
  [SMALL_STATE(174)] = 3062,
  [SMALL_STATE(175)] = 3070,
  [SMALL_STATE(176)] = 3078,
  [SMALL_STATE(177)] = 3086,
  [SMALL_STATE(178)] = 3094,
  [SMALL_STATE(179)] = 3102,
  [SMALL_STATE(180)] = 3110,
  [SMALL_STATE(181)] = 3118,
  [SMALL_STATE(182)] = 3126,
  [SMALL_STATE(183)] = 3134,
  [SMALL_STATE(184)] = 3142,
  [SMALL_STATE(185)] = 3150,
  [SMALL_STATE(186)] = 3158,
  [SMALL_STATE(187)] = 3166,
  [SMALL_STATE(188)] = 3174,
  [SMALL_STATE(189)] = 3182,
  [SMALL_STATE(190)] = 3190,
  [SMALL_STATE(191)] = 3198,
  [SMALL_STATE(192)] = 3206,
  [SMALL_STATE(193)] = 3214,
  [SMALL_STATE(194)] = 3222,
  [SMALL_STATE(195)] = 3230,
  [SMALL_STATE(196)] = 3238,
  [SMALL_STATE(197)] = 3246,
  [SMALL_STATE(198)] = 3254,
  [SMALL_STATE(199)] = 3262,
  [SMALL_STATE(200)] = 3270,
  [SMALL_STATE(201)] = 3278,
  [SMALL_STATE(202)] = 3286,
  [SMALL_STATE(203)] = 3294,
  [SMALL_STATE(204)] = 3302,
  [SMALL_STATE(205)] = 3310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(204),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(203),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(201),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat2, 2, 0, 0), SHIFT_REPEAT(199),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moddef_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect_type, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connect_type, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 10, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 6, 0, 11),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 6, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_reference, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 4, 0, 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 7, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 5, 0, 10),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_idx, 6, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lit, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_match, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 9, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, 0, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portdef, 4, 0, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_match_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_match_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portdef, 5, 0, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 4, 0, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 6, 0, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 5, 0, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 7, 0, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uniondef, 6, 0, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moddef, 5, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 6, 0, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structdef, 5, 0, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_portdef_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_portdef_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_list, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_word, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_arm, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_arm, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structdef_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uniondef_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connect, 3, 0, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typelist, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2, 0, 0),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_patlist_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patlist, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typelist_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel, 5, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 5, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 4, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_outgoing, 4, 0, 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, 0, 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 5, 0, 7),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 6, 0, 8),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 4, 0, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channeldir, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incoming, 4, 0, 6),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port_role, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit, 4, 0, 6),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [499] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_if_repeat1, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
