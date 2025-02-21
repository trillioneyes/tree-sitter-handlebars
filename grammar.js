/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param {RuleOrLiteral} body
 */
function barred(body) {
  return seq('{{', body, '}}')
}

/**
 * @param {RuleOrLiteral} body
 */
function raw_barred(body) {
  return seq('{{{', body, '}}}')
}

/**
 * @param {RuleOrLiteral} tag
 * @param {RuleOrLiteral} body
 */
function fancy_barred(tag, body) {
  return barred(seq(tag, body))
}

module.exports = grammar({
  name: 'handlebars_html',
  rules: {
    source_file: $ => repeat1($._content),
    _content: $ => choice($.literal_text, $._handlebars, $.raw_handlebars, $.handleblock, $.decorator_block, $.partial, $.partial_block),
    literal_text: _$ => /[^{]+/,
    _handlebars: $ => barred($._expression),
    raw_handlebars: $ => raw_barred($._expression),
    _identifier: $ => choice(/[a-zA-Z0-9_-]+/, seq('@', $._special_identifier)),
    _special_identifier: _$ => choice('partial-block', 'index'),
    _template_name: $ => field('template', choice($._identifier, seq('(', $._expression, ')'))),
    partial: $ => fancy_barred('>', seq($._template_name, optional($._expression), repeat($.context_injection))),

    // Expressions
    _expression: $ => choice($.helper_call, $.context_reference, $.string, seq('(', $._expression, ')')),
    string: _$ => choice(seq("'", /[^']*/, "'"), seq('"', /[^"]*/, '"')),
    _field_path: $ => prec(1, choice(
      seq($._identifier, optional(seq(/[./]/, $._field_path))),
      seq('..', optional(seq('/', $._field_path)))
    )),
    context_reference: $ => $._field_path,
    helper_call: $ => prec.left(seq(field('helper', $._identifier), repeat1($._expression))),

    // Blocks
    partial_block: $ => seq($._partial_start, repeat($._content), $._block_end),
    decorator_block: $ => seq($._decorator_start, repeat($._content), $._block_end),
    handleblock: $ => seq($._block_start, repeat($._content), $._block_end),
    _block_header: $ => seq(
      field('block_helper', $._push_tag),
      field('block_arguments', repeat($._expression)),
      repeat(field('context_injection', $.context_injection)),
      optional(field('context_binding', $.context_binding))
    ),
    context_injection: $ => seq($._identifier, '=', $._expression),
    context_binding: $ => seq('as', '|', $._identifier, '|'),
    _block_start: $ => fancy_barred('#', $._block_header),
    _block_end: $ => alias(fancy_barred('/', $._pop_tag), '/block'),
    _decorator_start: $ => fancy_barred(token(seq('#', '*')), $._block_header),
    _partial_start: $ => fancy_barred(token(seq('#', '>')), $._block_header),
    _push_tag: $ => $._identifier,
    _pop_tag: $ => $._identifier,
  },
  // inline: $ => [$._content]
})
