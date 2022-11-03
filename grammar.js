module.exports = grammar({
    name: 'humphrey',

    precedences: _ => [
        [
            "multiplication",
            "addition",
            "as",
        ],
    ],

    extras: $ => [
        $.comment,
        /[\s\u00A0\uFEFF\u3000]+/,    // Ignore whitespace and unicode No-Break space, half-width space, ideographic space
        $.block_comment,
    ],

    externals: $ => [
        $.block_comment,
    ],

    rules: {
        source_file: $ => repeat($._global_definition),

        _global_definition: $=> choice(
            $.function_definition,
            $.using_statement,
            $.type_definition,
            $.global_variable_definition,
        ),

        global_variable_definition: $ => $.variable_definition,

        function_definition: $ => seq(
            $.identifier_list,
            ":",
            choice(
                $.identifier,
                $.function_type,
            ),
            "=",
            $.block,
        ),

        block: $ => seq(
            "{",
            repeat($.statement),
            "}",
        ),

        statement: $ => choice(
            $.local_variable_definition,
            $.return_keyword,
            $.if_statement,
            $.while_statement,
            $.statement_expression,
        ),

        statement_expression: $ => seq(
            $.expression,
            ";",
        ),

        if_statement: $ => seq(
            "if",
            $.expression,
            $.block,
            optional(
                $.else_statement
            )
        ),

        else_statement: $ => seq(
            "else",
            $.block,
        ),

        while_statement: $ => seq(
            "while",
            $.expression,
            $.block,
        ),

        return_keyword: $ => "return;",

        local_variable_definition: $ => seq(
            $.variable_definition,
            ";",
        ),

        variable_definition: $ => choice(
            seq(
                $.type_definition,
                "=",
                $.expression,
            ),
            seq(
                $.identifier_list,
                ":",
                "=",
                $.expression,
            ),
        ),

        type_definition: $ => prec.left(seq(
            $.identifier_list,
            ":",
            $.type,
        )),

        identifier_list: $ => seq(
            $.identifier,
            repeat(
                seq(
                    ',',
                    $.identifier,
                )
            )
        ),

        type: $ => prec.right(choice(
            $.array_type,
            $.pointer_type,
            $.struct_type,
            $.enum_type,
            $.alias_type,
            $.function_type,
            $.bit_type,
            $.identifier,
        )),

        function_type: $ => seq(
            '(',
            $.input_parameters,
            '(',
            $.output_parameters,
        ),

        input_parameters: $ => seq(
            optional(
                seq(
                    $.type_definition,
                    repeat(
                        seq(
                            ',',
                            $.type_definition,
                        )
                    ),
                )
            ),
            ')',
        ),

        output_parameters: $ => seq(
            optional(
                seq(
                    $.type_definition,
                    repeat(
                        seq(
                            ',',
                            $.type_definition,
                        )
                    ),
                )
            ),
            ')',
        ),

        array_type: $ => prec.left(seq(
            '[',
            $.array_size,
            ']',
            $.type,
        )),

        alias_type: $ => seq(
            $.type,
            '|',
            '{',
            repeat($.struct_member),
            '}',
        ),

        enum_type: $ => seq(
            $.type,
            '{',
            repeat($.enum_member),
            '}',
        ),

        enum_member: $ => seq(
            $.identifier_list,
            ":",
            "=",
            $.expression,
        ),

        struct_type: $ => seq(
            '{',
            repeat($.struct_member),
            '}',
        ),

        struct_member: $ => seq(
            $.identifier_list,
            ":",
            $.type,
        ),

        bit_type: $ => 'bit',

        pointer_type: $ => prec.left(seq(
            '*',
            $.type,
        )),

        array_size: $ => seq(
            $.number,
        ),

        using_statement: $ => seq(
            'using',
            $.namespace,
        ),

        namespace: $ => seq(
            $.filepath_component,
            repeat($._rest_of_namespace),
        ),

        _rest_of_namespace: $ => seq(
            '::',
            $.filepath_component,
        ),


        expression: $ => $._expression,
        _expression: $ => choice(
            $.identifier,
            $.number,
            $.string,
            $.function_call,
            $.subscript,
            $.address_of,
            $.assignment,
            $.dot,
            $.as,
            $.sum,
            $.product,
        ),

        subscript: $ => prec.right(seq(
            $.identifier,
            "[",
            $._expression,
            "]",
        )),

        address_of: $ => prec.left(seq(
            "&",
            $._expression
        )),

        assignment: $ => prec.left(seq(
            $._expression,
            "=",
            $._expression,
        )),

        dot: $ => prec.left(seq(
            $._expression,
            ".",
            $._expression,
        )),

        function_call: $ => seq(
            $.identifier,
            "(",
            $.function_call_args,
        ),

        function_call_args: $ => seq(
            optional(
                seq(
                    $.expression,
                    repeat(
                        seq(
                            ',',
                            $.expression,
                        )
                    ),
                )
            ),
            ')',
        ),

        as: $ => prec.left(
            "as",
            seq(
                field("left", $._expression),
                "as",
                field("right", $.type),
            ),
        ),


        sum: $ => prec.left(
            "addition",
            seq(
                field("left", $._expression),
                "+",
                field("right", $._expression),
            ),
        ),
        product: $ => prec.left(
            "multiplication",
            seq(
                field("left", $._expression),
                "*",
                field("right", $._expression),
            ),
        ),

        comment: $ => token(choice(
            seq('#', /[^\n\r]*/),
        )),

        number: _ => /-?[\p{Nd}][\p{Nd}_]*/u,    // Todo hex,binary,subscript,\_ encoding
        string: _ => /".*"/u,
        filepath_component: _ => /[\p{L}\p{Nd}_]+/u,  // Todo, needs to include ALL valid filename characters
        identifier: _ => token(/[\p{L}\p{Nd}_]+/u), // Todo, must not match number, must not match single _
    }
});
