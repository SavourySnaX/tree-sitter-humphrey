const decimal = /-?[\p{Nd}][\p{Nd}_]*/u;
const hexadecimal = /0[xX][0-9a-fA-F_]*[0-9a-fA-F]+/;
const binary = /0[bB][0-1_]*[0-1]+/;


module.exports = grammar({
    name: 'humphrey',

    precedences: _ => [
        [
            "postfix",
            "prefix",
            "unary",
            "multiplication",
            "addition",
            "condition",
            "as",
        ],
    ],

    extras: $ => [
        $._comment,
        /[\s\u00A0\uFEFF\u3000]+/,    // Ignore whitespace and unicode No-Break space, half-width space, ideographic space
        $._block_comment,
    ],

    externals: $ => [
        $._block_comment,
    ],

    rules: {
        source_file: $ => repeat($._global_definition),

        _global_definition: $=> choice(
            $.using_statement,
            $._definition_or_type,
        ),

        _definition_or_type: $ => choice(
            $.variable_definition,
            $.function_definition,
            $.type_definition,
        ),

        variable_definition: $ => seq(
            optional($.meta_list),
            $.identifier_list,
            $._colon,
            optional($.type),
            $._equal,
            $.expression,
        ),

        function_definition: $ => seq(
            optional($.meta_list),
            $.identifier_list,
            $._colon,
            $.type, // Type cannot be optional, strictly speaking it can only be (identifer or func type), but this keeps the grammar parsing correctly
            $._equal,
            $.block,
        ),

        block: $ => seq(
            $._openCurly,
            repeat($.statement),
            $._closeCurly,
        ),

        statement: $ => choice(
            $.local_variable_definition,
            $.return_keyword,
            $.if_statement,
            $.while_statement,
            $.for_statement,
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

        for_statement: $ => seq(
            "for",
            $.identifier_list,
            $._equal,
            $.expression,
            "..",
            $.expression,
            $.block,
        ),

        return_keyword: $ => "return;",

        local_variable_definition: $ => seq(
            $.variable_definition,
            ";",
        ),

        type_definition: $ => seq(
            optional($.meta_list),
            $.identifier_list,
            $._colon,
            $.type,
        ),

        meta_list: $ => repeat1(
            $.meta_item,
        ),

        identifier_list: $ => seq(
            $.identifier,
            repeat(
                seq(
                    $._comma,
                    $.identifier,
                )
            )
        ),

        type: $ => choice(
            $.array_type,
            $.pointer_type,
            $.struct_type,
            $.enum_type,
            $.alias_type,
            $.function_type,
            $.bit_type,
            $.identifier,
        ),

        function_type: $ => seq(
            $._openParen,
            $.input_parameters,
            $._openParen,
            $.output_parameters,
        ),

        input_parameters: $ => seq(
            optional(
                seq(
                    $.type_definition,
                    repeat(
                        seq(
                            $._comma,
                            $.type_definition,
                        )
                    ),
                )
            ),
            $._closeParen,
        ),

        output_parameters: $ => seq(
            optional(
                seq(
                    $.type_definition,
                    repeat(
                        seq(
                            $._comma,
                            $.type_definition,
                        )
                    ),
                )
            ),
            $._closeParen,
        ),

        array_type: $ => prec.left(seq(
            $._openSquare,
            $.array_size,
            $._closeSquare,
            $.type,
        )),

        alias_type: $ => prec.left(seq(
            $.type,
            repeat1(seq(
                $._verticalBar,
                $.struct_type,
            )),
        )),

        enum_type: $ => seq(
            $.type,
            $._openCurly,
            repeat1($.enum_member),
            $._closeCurly,
        ),

        enum_member: $ => seq(
            $.identifier_list,
            $._colon,
            $._equal,
            $.expression,
        ),

        struct_type: $ => seq(
            $._openCurly,
            repeat($.struct_member),
            $._closeCurly,
        ),

        struct_member: $ => seq(
            $.identifier_list,
            $._colon,
            $.type,
        ),

        bit_type: $ => 'bit',

        pointer_type: $ => prec.left(seq(
            $._asterix,
            $.type,
        )),

        array_size: $ => seq(
            $.number,
        ),

        using_statement: $ => seq(
            $._using,
            $.namespace,
        ),

        namespace: $ => seq(
            $.filepath_component,
            repeat($._rest_of_namespace),
        ),

        _rest_of_namespace: $ => seq(
            $._coloncolon,
            $.filepath_component,
        ),


        expression: $ => $._expression,
        _expression: $ => choice(
            $.bracketed,
            $.identifier,
            $.number,
            $.string,
            $.function_call,
            $.subscript,
            $.address_of,
            $.dereference,
            $.assignment,
            $.dot,
            $.as,
            $.sum,
            $.subtraction,
            $.division,
            $.modulus,
            $.product,
            $.cond_equal,
            $.cond_not_equal,
            $.cond_less,
            $.cond_less_equal,
            $.cond_greater,
            $.cond_greater_equal,
            $.cond_inver,
            $.negate,
            $.post_inc,
            $.post_dec,
            $.pre_inc,
            $.pre_dec,
            $.underscore,
        ),

        bracketed: $ => seq(
            $._openParen,
            $._expression,
            $._closeParen,
        ),

        subscript: $ => prec.right(seq(
            $.identifier,
            $._openSquare,
            $._expression,
            $._closeSquare,
        )),

        address_of: $ => prec.right("unary",seq(
            "&",
            $._expression
        )),

        dereference: $ => prec.right("unary",seq(
            $._asterix,
            $._expression
        )),

        assignment: $ => prec.left(seq(
            $._expression,
            $._equal,
            $._expression,
        )),

        dot: $ => prec.left(seq(
            $._expression,
            ".",
            $._expression,
        )),

        function_call: $ => seq(
            $.identifier,
            $._openParen,
            $.function_call_args,
        ),

        function_call_args: $ => seq(
            optional(
                seq(
                    $.expression,
                    repeat(
                        seq(
                            $._comma,
                            $.expression,
                        )
                    ),
                )
            ),
            $._closeParen,
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
        subtraction: $ => prec.left(
            "addition",
            seq(
                field("left", $._expression),
                "-",
                field("right", $._expression),
            ),
        ),
        division: $ => prec.left(
            "multiplication",
            seq(
                field("left", $._expression),
                "/",
                field("right", $._expression),
            ),
        ),
        modulus: $ => prec.left(
            "multiplication",
            seq(
                field("left", $._expression),
                "%",
                field("right", $._expression),
            ),
        ),

        product: $ => prec.left(
            "multiplication",
            seq(
                field("left", $._expression),
                $._asterix,
                field("right", $._expression),
            ),
        ),

        cond_inver: $ => prec.right("unary",seq(
            "!",
            field("expr", $._expression),
        )),
        
        negate: $ => prec.right("unary",seq(
            "-",
            field("expr", $._expression),
        )),
        
        pre_inc: $ => prec.right("prefix",seq(
            "++",
            field("expr", $._expression),
        )),
        
        pre_dec: $ => prec.right("prefix",seq(
            "--",
            field("expr", $._expression),
        )),
        
        post_inc: $ => prec.left("postfix",seq(
            field("expr", $._expression),
            "++",
        )),
        
        post_dec: $ => prec.left("postfix",seq(
            field("expr", $._expression),
            "--",
        )),

        cond_equal: $ => prec.left(
            "condition",
            seq(
                field("left", $._expression),
                "==",
                field("right", $._expression),
            ),
        ),
        
        cond_not_equal: $ => prec.left(
            "condition",
            seq(
                field("left", $._expression),
                "!=",
                field("right", $._expression),
            ),
        ),
        
        cond_less: $ => prec.left(
            "condition",
            seq(
                field("left", $._expression),
                "<",
                field("right", $._expression),
            ),
        ),

        cond_greater: $ => prec.left(
            "condition",
            seq(
                field("left", $._expression),
                ">",
                field("right", $._expression),
            ),
        ),

        cond_less_equal: $ => prec.left(
            "condition",
            seq(
                field("left", $._expression),
                "<=",
                field("right", $._expression),
            ),
        ),

        cond_greater_equal: $ => prec.left(
            "condition",
            seq(
                field("left", $._expression),
                ">=",
                field("right", $._expression),
            ),
        ),


        _comment: $ => token(choice(
            seq('#', /[^\n\r]*/),
        )),

        string: $ => token(seq(
            '"',
            repeat(choice(
                /[^\\"]/,
                /\\./,
            )),
            '"',
        )),

        number: _ => choice(
            decimal,
            hexadecimal,
            binary),
        filepath_component: _ => /[\p{L}\p{Nd}_]+/u,  // Todo, needs to include ALL valid filename characters
        identifier: _ => token(/[\p{L}\p{Nd}_]+/u), // Todo, must not match number, must not match single _
        meta_item: _ => /\[[^\]]+\]/u,
        underscore: _ => '_',
        
        _comma: _ => ',',
        _coloncolon: _ => "::",
        _colon: _ => ":",
        _equal: _ => "=",
        _using: _ => "using",
        _asterix:_=> "*",
        _openSquare:_=> "[",
        _closeSquare:_=> "]",
        _openCurly:_=> "{",
        _closeCurly:_=> "}",
        _verticalBar:_=> "|",
        _openParen:_=> "(",
        _closeParen:_=> ")",
    }
});
