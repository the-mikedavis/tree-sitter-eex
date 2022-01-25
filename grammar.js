module.exports = grammar({
  name: "eex",

  rules: {
    fragment: ($) => repeat($._node),

    _node: ($) => choice($.directive_group, $.text, $.comment, $.directive),

    directive_group: ($) =>
      seq(
        alias($._start_or_middle_directive, $.directive),
        repeat(
          choice(
            $.text,
            $.comment,
            $.directive,
            alias($._start_or_middle_directive, $.directive)
          )
        ),
        alias($._end_directive, $.directive)
      ),

    directive: ($) => directive(optional($.expression)),
    _start_or_middle_directive: ($) => directive(alias($._start_or_middle_expression, $.partial_expression)),
    _end_directive: ($) => directive(alias($._end_expression, $.partial_expression)),

    _start_or_middle_expression: ($) =>
      seq(repeat($._code), choice("do", "->"), optional($._code_comment)),

    _end_expression: ($) => seq(/end[\)\]\}]*/, optional($._code_comment)),

    expression: ($) => repeat1($._code),

    comment: ($) => choice($._hash_comment, $._bang_comment),

    _hash_comment: ($) => seq("<%#", prec.left(seq(repeat($._code), "%>"))),

    _bang_comment: ($) =>
      seq("<%!--", prec.left(seq(repeat(/[^-]+|-/), "--%>"))),

    text: ($) => /[^<]+|</,

    _code: ($) => /[^%\s]+|[%\s]/,

    _code_comment: ($) => seq("#", repeat($._code)),
  },
});

function directive(body) {
  return seq(choice("<%", "<%=", "<%%", "<%%="), prec.left(seq(body, "%>")));
}
