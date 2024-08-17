/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "virdant",

  extras: $ => [
    $.comment_line,
    $.comment_block,
    /\s/,
  ],

  rules: {
    package: $ => seq(
      repeat($.package_import),
      repeat($.item),
    ),

    package_import: $ => seq("import", $.ident, ";"),

    item: $ => choice(
      $.moddef,
      $.builtindef,
      $.structdef,
      $.uniondef,
      $.socketdef,
    ),

    visibility: $ => optional("pub"),

    moddef: $ => seq(
      optional("pub"), optional("ext"), "mod", field("name", $.ident), "{",
        repeat(seq($._decl, ";")),
      "}",
    ),

    builtindef: $ => seq(
      "builtin", "type", field("name", $.ident), "{",
      "}"
    ),

    structdef: $ => seq(
      "struct", "type", field("name", $.ident), "{",
        repeat($.field),
      "}"
    ),

    field: $ => seq($.ident, ":", $.type, ";"),

    uniondef: $ => seq(
      "union", "type", field("name", $.ident), "{",
        repeat($.alt),
      "}"
    ),

    alt: $ => seq($.ident, "(", optional($.typelist), ")", ";"),

    socketdef: $ => seq(
      "socket", field("name", $.ident), "{",
        repeat($.channel),
      "}"
    ),

    channel: $ => seq($.channeldir, $.ident, ":", $.type, ";"),

    channeldir: $ => choice(
      "mosi",
      "miso",
    ),

    typelist: $ => seq(
      $.type,
      repeat(seq(",", $.type)),
      optional(","),
    ),

    _decl: $ => choice(
      $._component,
      $.connect,
      $.submodule,
    ),

    _component: $ => choice(
      $.implicit,
      $.incoming,
      $.outgoing,
      $.node,
      $.reg,
      $.socket,
    ),

    implicit: $ => seq("implicit", field("name", $.ident), ":", field("type", $.type)),
    incoming: $ => seq("incoming", field("name", $.ident), ":", field("type", $.type)),
    outgoing: $ => seq("outgoing", field("name", $.ident), ":", field("type", $.type)),
    node: $ => seq("node", field("name", $.ident), ":", field("type", $.type)),
    reg: $ => seq("reg", field("name", $.ident), ":", field("type", $.type), choice("on", field("on", $.path))),
    socket: $ => seq(field("role", $.socket_role), "socket", field("name", $.ident), "of", field("socketdef", $.ident)),

    socket_role: $ => choice(
      "master",
      "slave",
    ),

    connect: $ => choice(
      seq(field("target", $.path), field("connect_type", $.connect_type), field("expr", $.expr)),
    ),

    submodule: $ => seq("mod", field("name", $.ident), "of", field("module", $.qualident)),

    connect_type: $ => choice(
      $.direct,
      $.latched,
    ),

    direct: $ => ":=",
    latched: $ => "<=",

    expr: $ => choice(
      $.expr_if,
      $.expr_match,
      $.expr_call,
      $.expr_idx,
      $.expr_lit,
      $.expr_reference,
      seq("(", $.expr, ")"),
    ),

    expr_if: $ => seq(
      "if", $.expr, "{",
        $.expr,
      repeat(seq("}", "else", "if", $.expr, "{")),
      "}", "else", "{",
        $.expr,
      "}",
    ),

    expr_match: $ => seq(
      "match", $.expr, optional(seq(":", $.type)), "{",
        repeat($.match_arm),
      "}",
    ),

    match_arm: $ => seq($.pat, "=>", $.expr, ";"),

    pat: $ => choice(
      seq($.ctor, "(", optional($.patlist), ")"),
      $.ident,
      "else",
    ),

    patlist: $ => seq(
      $.pat,
      repeat(seq(",", $.pat)),
      optional(","),
    ),

    expr_call: $ => choice(
      seq(field("subject", $.expr), "->", field("method", $.ident), "(", field("args", optional($._expr_list)), ")"),
      seq($.ctor, "(", field("args", optional($._expr_list)), ")"),
    ),

    expr_idx: $ => choice(
      seq($.expr, "[", $.nat, "]"),
      seq($.expr, "[", $.nat, "..", $.nat, "]"),
    ),

    expr_lit: $ => choice(
      $.word_lit,
      $.bool,
    ),
    expr_reference: $ => $.path,

    word_lit: $ => choice(
      $.word,
      $.nat,
    ),

    bool: $ => choice(
      "true",
      "false",
    ),

    _expr_list: $ => seq($.expr, repeat(seq(",", $.expr)), optional(",")),

    type: $ => choice(
      $.type_clock,
      $.type_word,
      $.type_bit,
      $.qualident,
    ),

    type_clock: $ => "Clock",
    type_word: $ => seq("Word", "[", $.nat, "]"),
    type_bit: $ => "Bit",

    path: $ => /(([_A-Za-z][_A-Za-z0-9]*)\.)*([_A-Za-z][_A-Za-z0-9]*)/,
    word: $ => choice(
      /0b[0-1][_0-1]*(w[0-9]+)?/,
      /0x[0-9A-Fa-f][_0-9A-Fa-f]*(w[0-9]+)?/,
      /[0-9][_0-9]*(w[0-9]+)?/,
    ),
    nat: $ => /[0-9][_0-9]*/,
    ctor: $ => /@[_A-Za-z][_A-Za-z0-9]*/,
    qualident: $ => /([_A-Za-z][_A-Za-z0-9]*::)?[_A-Za-z][_A-Za-z0-9]*/,
    ident: $ => /[_A-Za-z][_A-Za-z0-9]*/,

    comment_line: _ => token(seq('//', /[^\n]*/)),

    comment_block: _ => token(
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    ),
  }
});
