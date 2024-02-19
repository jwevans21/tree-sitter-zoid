module.exports = grammar({
   name: 'zoid',
   word: ($) => $.ident,
   extras: ($) => [/\s+/, $.line_comment],
   rules: {
      source_file: ($) => repeat($._top_level_expr),
      _top_level_expr: ($) => choice($.external_function, $.function),
      external_function: ($) =>
         seq(
            'extern',
            field('abi', optional($.abi)),
            'fn',
            field('name', $.ident),
            '(',
            field('arguments', optional($.function_args)),
            ')',
            ':',
            field('return_type', $.type),
            ';'
         ),
      abi: (_) => seq('"', /[a-zA-Z0-9]+/, '"'),
      function: ($) =>
         seq(
            'fn',
            field('name', $.ident),
            '(',
            field('arguments', optional($.function_args)),
            ')',
            ':',
            field('return_type', $.type),
            field('body', $.block)
         ),

      function_args: ($) =>
         seq($.function_arg, optional(repeat(seq(',', $.function_arg)))),

      function_arg: ($) =>
         choice(seq(field('name', $.ident), ':', field('type', $.type)), '...'),

      block: ($) => seq('{', repeat($._statement), '}'),

      _statement: ($) =>
         choice(
            $._expression_statement,
            $.if_statement,
            $.variable_declaration,
            $.return_statement
         ),

      _expression_statement: ($) => seq($._expression, ';'),
      variable_declaration: ($) =>
         seq(
            'let',
            field('name', $.ident),
            optional(field('type', seq(':', $.type))),
            '=',
            $._expression,
            ';'
         ),
      return_statement: ($) => seq('return', optional($._expression), ';'),
      if_statement: ($) =>
         seq(
            'if',
            field('condition', $._expression),
            field('then', $.block),
            optional(
               seq('else', field('else', choice($.block, $.if_statement)))
            )
         ),

      _expression: ($) =>
         choice(
            $.function_call,
            $.ident,
            $._literal,
            $.binary_operation,
            seq('(', $._expression, ')')
         ),
      _literal: ($) =>
         choice($.integer_literal, $.c_string_literal, $.string_literal),
      integer_literal: (_) => /[\d]+/,
      string_literal: ($) => seq('"', repeat($._string_inner), '"'),
      c_string_literal: ($) => seq('c"', repeat($._c_string_inner), '"'),
      _string_inner: ($) => choice(/[^"\\]/, $.escape_sequence),
      escape_sequence: (_) => token(/\\./),
      _c_string_inner: ($) =>
         choice(/[^"\\]/, $.escape_sequence, $.c_escape_sequence),
      c_escape_sequence: ($) => choice($._c_fmt),
      _c_fmt: ($) =>
         seq(
            '%',
            field('flags', optional($._c_fmt_flags)),
            field('width', optional($._c_fmt_width)),
            field('precision', optional($._c_fmt_precision)),
            field('length', optional($._c_fmt_length)),
            field('specifier', $._c_fmt_specifier)
         ),
      _c_fmt_flags: (_) => choice('-', '+', ' ', '#', '0'),
      _c_fmt_width: (_) => choice('*', /[\d]+/),
      _c_fmt_precision: (_) => choice('.*', /\.[\d]+/),
      _c_fmt_length: (_) => choice('hh', 'h', 'l', 'll', 'j', 'z', 't', 'L'),
      _c_fmt_specifier: (_) =>
         choice(
            'd',
            'i',
            'u',
            'o',
            'x',
            'X',
            'f',
            'F',
            'e',
            'E',
            'g',
            'G',
            'a',
            'A',
            'c',
            's',
            'p',
            'n'
         ),

      function_call: ($) =>
         seq(
            field('name', $.ident),
            '(',
            field(
               'arguments',
               seq($._expression, optional(repeat(seq(',', $._expression))))
            ),
            ')'
         ),
      binary_operation: ($) =>
         choice(
            prec.left(
               100,
               seq(field('lhs', $._expression), ':', field('rhs', $.type))
            ),
            prec.left(
               60,
               seq(
                  field('lhs', $._expression),
                  field('op', choice('*', '/', '%')),
                  field('rhs', $._expression)
               )
            ),
            prec.left(
               50,
               seq(
                  field('lhs', $._expression),
                  field('op', choice('+', '-')),
                  field('rhs', $._expression)
               )
            ),
            prec.left(
               40,
               seq(
                  field('lhs', $._expression),
                  field('op', choice('<<', '>>')),
                  field('rhs', $._expression)
               )
            ),
            prec.left(
               30,
               seq(
                  field('lhs', $._expression),
                  field('op', choice('&', '|', '^')),
                  field('rhs', $._expression)
               )
            ),
            prec.left(
               20,
               seq(
                  field('lhs', $._expression),
                  field('op', choice('==', '!=', '<', '<=', '>', '>=')),
                  field('rhs', $._expression)
               )
            ),
            prec.left(
               10,
               seq(
                  field('lhs', $._expression),
                  field('op', choice('&&', '||', 'and', 'or')),
                  field('rhs', $._expression)
               )
            )
         ),

      ident: (_) => /[\p{XID_Start}_][\p{XID_Continue}]*/,
      type: ($) =>
         choice(
            seq('*', $.type),
            seq('const', $.type),
            'u8',
            'u16',
            'u32',
            'u64',
            'u128',
            'usize',
            'i8',
            'i16',
            'i32',
            'i64',
            'i128',
            'isize',
            'f32',
            'f64',
            'char',
            'bool'
         ),

      line_comment: (_) => seq('//', /[^\n]*/, '\n'),
      // block_comment: _ => seq("/*", r, "/")
   },
});
