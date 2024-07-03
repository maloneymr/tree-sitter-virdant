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

    incoming: $ => seq("incoming", field("name", $.id), ":", field("type", $.typ)),
    outgoing: $ => seq("outgoing", field("name", $.id), ":", field("type", $.typ)),
    reg: $ => seq("reg", field("name", $.id), ":", field("type", $.typ), "on", field("on", $.path)),

    connect: $ => choice(
      seq(field("target", $.path), field("connect_type", field("expr", $._connect_type)), $.expr),
    ),

    _connect_type: $ => choice(
      $.direct,
      $.latched,
    ),

    direct: $ => ":=",

    latched: $ => "<=",

    expr: $ => choice(
//      _expr_if,
      $._expr_call,
    ),

//    _expr_if:

    _expr_call: $ => choice(
      seq($._expr_call, "->", $.id, "(", optional($._expr_list), ")"),
      $._expr_idx,
    ),

    _expr_idx: $ => choice(
      $._expr_base,
    ),

    _expr_base: $ => choice(
      $._expr_lit,
      $._expr_reference,
      seq("(", $.expr, ")")
    ),

    _expr_lit: $ => $._word_lit,
    _expr_reference: $ => $.path,

    _word_lit: $ => choice(
      $.nat,
      /[0-9][_0-9]*w[0-9]+/,
    ),

    _expr_list: $ => seq($.expr, repeat(seq(",", $.expr)), optional(",")),

    typ: $ => choice(
      "Clock",
      seq("Word", "[", $.nat, "]"),
    ),

    path: $ => /(([_A-Za-z][_A-Za-z0-9]*)\.)*([_A-Za-z][_A-Za-z0-9]*)/,

    nat: $ => /[0-9][_0-9]*/,

    id: $ => /[_A-Za-z][_A-Za-z0-9]*/,
  }
});
