/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "virdant",

  rules: {
    package: $ => repeat($.item),

    item: $ => choice(
      $.moddef,
//      $.structdef,
    ),

    moddef: $ => seq(
      optional("public"), "module", field("name", $.id), "{",
        repeat(seq($._decl, ";")),
      "}",
    ),

    _decl: $ => choice(
      $._component,
      $.connect,
    ),

    _component: $ => choice(
      $.incoming,
      $.outgoing,
      $.reg,
    ),

    incoming: $ => seq("incoming", field("name", $.id), ":", field("type", $.type)),
    outgoing: $ => seq("outgoing", field("name", $.id), ":", field("type", $.type)),
    reg: $ => seq("reg", field("name", $.id), ":", field("type", $.type), "on", field("on", $.path)),

    connect: $ => choice(
      seq(field("target", $.path), field("connect_type", $.connect_type), field("expr", $.expr)),
    ),

    connect_type: $ => choice(
      $.direct,
      $.latched,
    ),

    direct: $ => ":=",
    latched: $ => "<=",

    expr: $ => choice(
      $.expr_call,
      $.expr_idx,
      $.expr_lit,
      $.expr_reference,
      seq("(", $.expr, ")"),
    ),

    expr_call: $ => choice(
      seq(field("subject", $.expr), "->", field("method", $.id), "(", field("args", optional($._expr_list)), ")"),
    ),

    expr_idx: $ => choice(
      seq($.expr, "[", $.nat, "]"),
    ),

    expr_lit: $ => $._word_lit,
    expr_reference: $ => $.path,

    _word_lit: $ => choice(
      $.nat,
      $.word,
    ),

    _expr_list: $ => seq($.expr, repeat(seq(",", $.expr)), optional(",")),

    type: $ => choice(
      $.type_clock,
      $.type_word,
    ),

    type_clock: $ => "Clock",
    type_word: $ => seq("Word", "[", $.nat, "]"),

    path: $ => /(([_A-Za-z][_A-Za-z0-9]*)\.)*([_A-Za-z][_A-Za-z0-9]*)/,
    word: $ => /[0-9][_0-9]*w[0-9]+/,
    nat: $ => /[0-9][_0-9]*/,
    id: $ => /[_A-Za-z][_A-Za-z0-9]*/,
  }
});
