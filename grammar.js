module.exports = grammar({
    name: "zoid",
    word: $ => $.ident,
    extras: $ => [
        /\s/,
        $.line_comment
    ],
    rules: {
        source_file: $ => $._top_level_expr,
        _top_level_expr: $ => choice($.function_def),
        function_def: $ => seq(
            "fn",
            field("name", $.ident),
            "(", ")",
            ":", field("return_type", $.type),
            field("body", $.block),
        ),
        block: $ => seq("{", repeat($._statement), "}"),

        _statement: $ => choice(
            $.variable_declaration,
            $.return_statement
        ),

        variable_declaration: $ => seq(
            "let",
            field("name", $.ident),
            optional(field("type", seq(":", $.type))),
            "=",
            $._expression,
            ";"
        ),
        return_statement: $ => seq("return", optional($._expression), ";"),

        _expression: $ => choice(
            $.ident,
            $._literal,
            $.binary_operation,
            seq("(", $._expression, ")")
        ),
        _literal: $ => choice($.integer_literal),
        integer_literal: _ => /[\d]+/,
        binary_operation: $ => choice(
            prec.left(20, seq($._expression, "*", $._expression)),
            prec.left(20, seq($._expression, "/", $._expression)),
            prec.left(20, seq($._expression, "%", $._expression)),
            prec.left(10, seq($._expression, "+", $._expression)),
            prec.left(10, seq($._expression, "-", $._expression))
        ),

        ident: _ => /[\p{XID_Start}_][\p{XID_Continue}]*/,
        type: $ => choice(
            seq("*", $.type),
            "u8", "u16", "u32", "u64", "u128", "usize",
            "i8", "i16", "i32", "i64", "i128", "isize",
            "f32", "f64",
            "char", "bool"
        ),

        line_comment: _ => seq("//", /[^\n]*/, "\n")
    }
});
