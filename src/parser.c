#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 341
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  anon_sym_if = 6,
  anon_sym_else = 7,
  anon_sym_while = 8,
  sym_return_keyword = 9,
  anon_sym_COMMA = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_PIPE = 15,
  sym_bit_type = 16,
  anon_sym_STAR = 17,
  anon_sym_using = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_AMP = 20,
  anon_sym_DOT = 21,
  anon_sym_as = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  sym_comment = 27,
  sym_number = 28,
  sym_string = 29,
  aux_sym_filepath_component_token1 = 30,
  sym_block_comment = 31,
  sym_source_file = 32,
  sym__global_definition = 33,
  sym__definition_or_type = 34,
  sym_variable_definition = 35,
  sym_function_definition = 36,
  sym_block = 37,
  sym_statement = 38,
  sym_statement_expression = 39,
  sym_if_statement = 40,
  sym_else_statement = 41,
  sym_while_statement = 42,
  sym_local_variable_definition = 43,
  sym_type_definition = 44,
  sym_identifier_list = 45,
  sym_type = 46,
  sym_function_type = 47,
  sym_input_parameters = 48,
  sym_output_parameters = 49,
  sym_array_type = 50,
  sym_alias_type = 51,
  sym_enum_type = 52,
  sym_enum_member = 53,
  sym_struct_type = 54,
  sym_struct_member = 55,
  sym_pointer_type = 56,
  sym_array_size = 57,
  sym_using_statement = 58,
  sym_namespace = 59,
  sym__rest_of_namespace = 60,
  sym_expression = 61,
  sym__expression = 62,
  sym_bracketed = 63,
  sym_subscript = 64,
  sym_address_of = 65,
  sym_dereference = 66,
  sym_assignment = 67,
  sym_dot = 68,
  sym_function_call = 69,
  sym_function_call_args = 70,
  sym_as = 71,
  sym_sum = 72,
  sym_subtraction = 73,
  sym_division = 74,
  sym_modulus = 75,
  sym_product = 76,
  sym_filepath_component = 77,
  sym_identifier = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_block_repeat1 = 80,
  aux_sym_identifier_list_repeat1 = 81,
  aux_sym_input_parameters_repeat1 = 82,
  aux_sym_alias_type_repeat1 = 83,
  aux_sym_enum_type_repeat1 = 84,
  aux_sym_namespace_repeat1 = 85,
  aux_sym_function_call_args_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [sym_return_keyword] = "return_keyword",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [sym_bit_type] = "bit_type",
  [anon_sym_STAR] = "*",
  [anon_sym_using] = "using",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_AMP] = "&",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [sym_string] = "string",
  [aux_sym_filepath_component_token1] = "filepath_component_token1",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__global_definition] = "_global_definition",
  [sym__definition_or_type] = "_definition_or_type",
  [sym_variable_definition] = "variable_definition",
  [sym_function_definition] = "function_definition",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_statement_expression] = "statement_expression",
  [sym_if_statement] = "if_statement",
  [sym_else_statement] = "else_statement",
  [sym_while_statement] = "while_statement",
  [sym_local_variable_definition] = "local_variable_definition",
  [sym_type_definition] = "type_definition",
  [sym_identifier_list] = "identifier_list",
  [sym_type] = "type",
  [sym_function_type] = "function_type",
  [sym_input_parameters] = "input_parameters",
  [sym_output_parameters] = "output_parameters",
  [sym_array_type] = "array_type",
  [sym_alias_type] = "alias_type",
  [sym_enum_type] = "enum_type",
  [sym_enum_member] = "enum_member",
  [sym_struct_type] = "struct_type",
  [sym_struct_member] = "struct_member",
  [sym_pointer_type] = "pointer_type",
  [sym_array_size] = "array_size",
  [sym_using_statement] = "using_statement",
  [sym_namespace] = "namespace",
  [sym__rest_of_namespace] = "_rest_of_namespace",
  [sym_expression] = "expression",
  [sym__expression] = "_expression",
  [sym_bracketed] = "bracketed",
  [sym_subscript] = "subscript",
  [sym_address_of] = "address_of",
  [sym_dereference] = "dereference",
  [sym_assignment] = "assignment",
  [sym_dot] = "dot",
  [sym_function_call] = "function_call",
  [sym_function_call_args] = "function_call_args",
  [sym_as] = "as",
  [sym_sum] = "sum",
  [sym_subtraction] = "subtraction",
  [sym_division] = "division",
  [sym_modulus] = "modulus",
  [sym_product] = "product",
  [sym_filepath_component] = "filepath_component",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
  [aux_sym_input_parameters_repeat1] = "input_parameters_repeat1",
  [aux_sym_alias_type_repeat1] = "alias_type_repeat1",
  [aux_sym_enum_type_repeat1] = "enum_type_repeat1",
  [aux_sym_namespace_repeat1] = "namespace_repeat1",
  [aux_sym_function_call_args_repeat1] = "function_call_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [sym_return_keyword] = sym_return_keyword,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_bit_type] = sym_bit_type,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [aux_sym_filepath_component_token1] = aux_sym_filepath_component_token1,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__global_definition] = sym__global_definition,
  [sym__definition_or_type] = sym__definition_or_type,
  [sym_variable_definition] = sym_variable_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_statement_expression] = sym_statement_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_local_variable_definition] = sym_local_variable_definition,
  [sym_type_definition] = sym_type_definition,
  [sym_identifier_list] = sym_identifier_list,
  [sym_type] = sym_type,
  [sym_function_type] = sym_function_type,
  [sym_input_parameters] = sym_input_parameters,
  [sym_output_parameters] = sym_output_parameters,
  [sym_array_type] = sym_array_type,
  [sym_alias_type] = sym_alias_type,
  [sym_enum_type] = sym_enum_type,
  [sym_enum_member] = sym_enum_member,
  [sym_struct_type] = sym_struct_type,
  [sym_struct_member] = sym_struct_member,
  [sym_pointer_type] = sym_pointer_type,
  [sym_array_size] = sym_array_size,
  [sym_using_statement] = sym_using_statement,
  [sym_namespace] = sym_namespace,
  [sym__rest_of_namespace] = sym__rest_of_namespace,
  [sym_expression] = sym_expression,
  [sym__expression] = sym__expression,
  [sym_bracketed] = sym_bracketed,
  [sym_subscript] = sym_subscript,
  [sym_address_of] = sym_address_of,
  [sym_dereference] = sym_dereference,
  [sym_assignment] = sym_assignment,
  [sym_dot] = sym_dot,
  [sym_function_call] = sym_function_call,
  [sym_function_call_args] = sym_function_call_args,
  [sym_as] = sym_as,
  [sym_sum] = sym_sum,
  [sym_subtraction] = sym_subtraction,
  [sym_division] = sym_division,
  [sym_modulus] = sym_modulus,
  [sym_product] = sym_product,
  [sym_filepath_component] = sym_filepath_component,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_identifier_list_repeat1] = aux_sym_identifier_list_repeat1,
  [aux_sym_input_parameters_repeat1] = aux_sym_input_parameters_repeat1,
  [aux_sym_alias_type_repeat1] = aux_sym_alias_type_repeat1,
  [aux_sym_enum_type_repeat1] = aux_sym_enum_type_repeat1,
  [aux_sym_namespace_repeat1] = aux_sym_namespace_repeat1,
  [aux_sym_function_call_args_repeat1] = aux_sym_function_call_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_return_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_bit_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filepath_component_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__global_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__definition_or_type] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_input_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_output_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_member] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_type] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_size] = {
    .visible = true,
    .named = true,
  },
  [sym_using_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym__rest_of_namespace] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_bracketed] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_address_of] = {
    .visible = true,
    .named = true,
  },
  [sym_dereference] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call_args] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction] = {
    .visible = true,
    .named = true,
  },
  [sym_division] = {
    .visible = true,
    .named = true,
  },
  [sym_modulus] = {
    .visible = true,
    .named = true,
  },
  [sym_product] = {
    .visible = true,
    .named = true,
  },
  [sym_filepath_component] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alias_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namespace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_right = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_right, 2},
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
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 3,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 20,
  [28] = 28,
  [29] = 22,
  [30] = 22,
  [31] = 24,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 28,
  [37] = 20,
  [38] = 35,
  [39] = 39,
  [40] = 39,
  [41] = 26,
  [42] = 23,
  [43] = 26,
  [44] = 28,
  [45] = 24,
  [46] = 35,
  [47] = 34,
  [48] = 33,
  [49] = 39,
  [50] = 21,
  [51] = 33,
  [52] = 34,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 59,
  [64] = 64,
  [65] = 60,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 59,
  [70] = 60,
  [71] = 59,
  [72] = 60,
  [73] = 60,
  [74] = 74,
  [75] = 53,
  [76] = 59,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 66,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 66,
  [86] = 86,
  [87] = 87,
  [88] = 66,
  [89] = 89,
  [90] = 79,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 74,
  [95] = 77,
  [96] = 61,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 55,
  [105] = 87,
  [106] = 86,
  [107] = 89,
  [108] = 108,
  [109] = 109,
  [110] = 62,
  [111] = 58,
  [112] = 84,
  [113] = 83,
  [114] = 82,
  [115] = 64,
  [116] = 116,
  [117] = 117,
  [118] = 78,
  [119] = 119,
  [120] = 79,
  [121] = 83,
  [122] = 55,
  [123] = 89,
  [124] = 64,
  [125] = 58,
  [126] = 62,
  [127] = 127,
  [128] = 61,
  [129] = 74,
  [130] = 87,
  [131] = 131,
  [132] = 77,
  [133] = 84,
  [134] = 134,
  [135] = 78,
  [136] = 86,
  [137] = 82,
  [138] = 138,
  [139] = 138,
  [140] = 109,
  [141] = 108,
  [142] = 142,
  [143] = 93,
  [144] = 92,
  [145] = 91,
  [146] = 97,
  [147] = 117,
  [148] = 148,
  [149] = 98,
  [150] = 116,
  [151] = 99,
  [152] = 101,
  [153] = 103,
  [154] = 119,
  [155] = 100,
  [156] = 102,
  [157] = 100,
  [158] = 102,
  [159] = 159,
  [160] = 92,
  [161] = 93,
  [162] = 119,
  [163] = 148,
  [164] = 164,
  [165] = 117,
  [166] = 116,
  [167] = 142,
  [168] = 103,
  [169] = 108,
  [170] = 109,
  [171] = 101,
  [172] = 172,
  [173] = 91,
  [174] = 174,
  [175] = 138,
  [176] = 176,
  [177] = 177,
  [178] = 99,
  [179] = 98,
  [180] = 97,
  [181] = 89,
  [182] = 182,
  [183] = 53,
  [184] = 184,
  [185] = 184,
  [186] = 182,
  [187] = 182,
  [188] = 138,
  [189] = 184,
  [190] = 64,
  [191] = 58,
  [192] = 83,
  [193] = 62,
  [194] = 78,
  [195] = 82,
  [196] = 61,
  [197] = 87,
  [198] = 77,
  [199] = 74,
  [200] = 86,
  [201] = 84,
  [202] = 79,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 205,
  [207] = 205,
  [208] = 205,
  [209] = 209,
  [210] = 210,
  [211] = 204,
  [212] = 212,
  [213] = 210,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 209,
  [219] = 212,
  [220] = 210,
  [221] = 215,
  [222] = 216,
  [223] = 217,
  [224] = 209,
  [225] = 204,
  [226] = 212,
  [227] = 210,
  [228] = 215,
  [229] = 215,
  [230] = 216,
  [231] = 217,
  [232] = 209,
  [233] = 212,
  [234] = 204,
  [235] = 212,
  [236] = 236,
  [237] = 216,
  [238] = 210,
  [239] = 204,
  [240] = 217,
  [241] = 205,
  [242] = 242,
  [243] = 215,
  [244] = 216,
  [245] = 209,
  [246] = 217,
  [247] = 247,
  [248] = 248,
  [249] = 53,
  [250] = 250,
  [251] = 64,
  [252] = 58,
  [253] = 62,
  [254] = 254,
  [255] = 61,
  [256] = 74,
  [257] = 87,
  [258] = 86,
  [259] = 84,
  [260] = 83,
  [261] = 82,
  [262] = 262,
  [263] = 79,
  [264] = 264,
  [265] = 78,
  [266] = 266,
  [267] = 77,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 148,
  [274] = 271,
  [275] = 275,
  [276] = 276,
  [277] = 142,
  [278] = 278,
  [279] = 270,
  [280] = 280,
  [281] = 270,
  [282] = 282,
  [283] = 275,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 270,
  [288] = 275,
  [289] = 278,
  [290] = 290,
  [291] = 291,
  [292] = 271,
  [293] = 293,
  [294] = 275,
  [295] = 275,
  [296] = 296,
  [297] = 278,
  [298] = 270,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 300,
  [303] = 300,
  [304] = 300,
  [305] = 300,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 317,
  [320] = 314,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 322,
  [326] = 326,
  [327] = 317,
  [328] = 322,
  [329] = 314,
  [330] = 330,
  [331] = 317,
  [332] = 322,
  [333] = 314,
  [334] = 317,
  [335] = 322,
  [336] = 314,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
};

static inline bool sym_number_character_set_1(int32_t c) {
  return (c < 6112
    ? (c < 3046
      ? (c < 2406
        ? (c < 1776
          ? (c < 1632
            ? (c >= '0' && c <= '9')
            : c <= 1641)
          : (c <= 1785 || (c >= 1984 && c <= 1993)))
        : (c <= 2415 || (c < 2790
          ? (c < 2662
            ? (c >= 2534 && c <= 2543)
            : c <= 2671)
          : (c <= 2799 || (c >= 2918 && c <= 2927)))))
      : (c <= 3055 || (c < 3664
        ? (c < 3430
          ? (c < 3302
            ? (c >= 3174 && c <= 3183)
            : c <= 3311)
          : (c <= 3439 || (c >= 3558 && c <= 3567)))
        : (c <= 3673 || (c < 4160
          ? (c < 3872
            ? (c >= 3792 && c <= 3801)
            : c <= 3881)
          : (c <= 4169 || (c >= 4240 && c <= 4249)))))))
    : (c <= 6121 || (c < 42528
      ? (c < 6800
        ? (c < 6608
          ? (c < 6470
            ? (c >= 6160 && c <= 6169)
            : c <= 6479)
          : (c <= 6617 || (c >= 6784 && c <= 6793)))
        : (c <= 6809 || (c < 7232
          ? (c < 7088
            ? (c >= 6992 && c <= 7001)
            : c <= 7097)
          : (c <= 7241 || (c >= 7248 && c <= 7257)))))
      : (c <= 42537 || (c < 43600
        ? (c < 43472
          ? (c < 43264
            ? (c >= 43216 && c <= 43225)
            : c <= 43273)
          : (c <= 43481 || (c >= 43504 && c <= 43513)))
        : (c <= 43609 || (c < 65296
          ? (c >= 44016 && c <= 44025)
          : (c <= 65305 || (c >= 66720 && c <= 66729)))))))));
}

static inline bool sym_number_character_set_2(int32_t c) {
  return (c < 4240
    ? (c < 2918
      ? (c < 1984
        ? (c < 1632
          ? (c < '_'
            ? (c >= '0' && c <= '9')
            : c <= '_')
          : (c <= 1641 || (c >= 1776 && c <= 1785)))
        : (c <= 1993 || (c < 2662
          ? (c < 2534
            ? (c >= 2406 && c <= 2415)
            : c <= 2543)
          : (c <= 2671 || (c >= 2790 && c <= 2799)))))
      : (c <= 2927 || (c < 3558
        ? (c < 3302
          ? (c < 3174
            ? (c >= 3046 && c <= 3055)
            : c <= 3183)
          : (c <= 3311 || (c >= 3430 && c <= 3439)))
        : (c <= 3567 || (c < 3872
          ? (c < 3792
            ? (c >= 3664 && c <= 3673)
            : c <= 3801)
          : (c <= 3881 || (c >= 4160 && c <= 4169)))))))
    : (c <= 4249 || (c < 7248
      ? (c < 6784
        ? (c < 6470
          ? (c < 6160
            ? (c >= 6112 && c <= 6121)
            : c <= 6169)
          : (c <= 6479 || (c >= 6608 && c <= 6617)))
        : (c <= 6793 || (c < 7088
          ? (c < 6992
            ? (c >= 6800 && c <= 6809)
            : c <= 7001)
          : (c <= 7097 || (c >= 7232 && c <= 7241)))))
      : (c <= 7257 || (c < 43504
        ? (c < 43264
          ? (c < 43216
            ? (c >= 42528 && c <= 42537)
            : c <= 43225)
          : (c <= 43273 || (c >= 43472 && c <= 43481)))
        : (c <= 43513 || (c < 65296
          ? (c < 44016
            ? (c >= 43600 && c <= 43609)
            : c <= 44025)
          : (c <= 65305 || (c >= 66720 && c <= 66729)))))))));
}

static inline bool aux_sym_filepath_component_token1_character_set_1(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 'c'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1984
            ? (c < 1765
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3904
        ? (c < 3412
          ? (c < 3214
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3302
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3517
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3439 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3634
                ? (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3673)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? c == 3840
                  : c <= 3881)))))))))
        : (c <= 3911 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_filepath_component_token1_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1994
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2821
                  ? c == 2809
                  : c <= 2828)
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7141 || (c < 7312
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43824
          ? (c < 43697
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43518 || (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : (c <= 43586 || (c >= 43588 && c <= 43595)))
                : (c <= 43638 || (c < 43646
                  ? c == 43642
                  : c <= 43695)))))
            : (c <= 43697 || (c < 43762
              ? (c < 43714
                ? (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))
                : (c <= 43714 || (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)))
              : (c <= 43764 || (c < 43793
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)
                : (c <= 43798 || (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)))))))
          : (c <= 43866 || (c < 64298
            ? (c < 63744
              ? (c < 55203
                ? (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : (c <= 44002 || c == 44032))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)))
              : (c <= 64109 || (c < 64275
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_filepath_component_token1_character_set_3(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1984
            ? (c < 1765
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3904
        ? (c < 3412
          ? (c < 3214
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3302
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3517
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3439 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3634
                ? (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3673)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? c == 3840
                  : c <= 3881)))))))))
        : (c <= 3911 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_filepath_component_token1_character_set_4(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1984
            ? (c < 1765
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3904
        ? (c < 3412
          ? (c < 3214
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3302
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3517
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3439 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3634
                ? (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3673)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3872
                  ? c == 3840
                  : c <= 3881)))))))))
        : (c <= 3911 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_filepath_component_token1_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2208
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2835
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4159
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7141 || (c < 7312
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43824
          ? (c < 43697
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43518 || (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : (c <= 43586 || (c >= 43588 && c <= 43595)))
                : (c <= 43638 || (c < 43646
                  ? c == 43642
                  : c <= 43695)))))
            : (c <= 43697 || (c < 43762
              ? (c < 43714
                ? (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))
                : (c <= 43714 || (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)))
              : (c <= 43764 || (c < 43793
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)
                : (c <= 43798 || (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)))))))
          : (c <= 43866 || (c < 64298
            ? (c < 63744
              ? (c < 55203
                ? (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : (c <= 44002 || c == 44032))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)))
              : (c <= 64109 || (c < 64275
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (aux_sym_filepath_component_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym_number_character_set_1(lookahead)) ADVANCE(46);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_number_character_set_1(lookahead)) ADVANCE(46);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_number_character_set_1(lookahead)) ADVANCE(46);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      if (sym_number_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 12:
      if (sym_number_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(13)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(14)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(15)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_while);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_bit_type);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_using);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_as);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(46);
      if (aux_sym_filepath_component_token1_character_set_5(lookahead)) ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == ';') ADVANCE(26);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(25);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'f') ADVANCE(23);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'g') ADVANCE(35);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'h') ADVANCE(58);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(61);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(66);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(54);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(49);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'r') ADVANCE(62);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(40);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(57);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(50);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(33);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(69);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'u') ADVANCE(63);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14, .external_lex_state = 1},
  [2] = {.lex_state = 3, .external_lex_state = 1},
  [3] = {.lex_state = 3, .external_lex_state = 1},
  [4] = {.lex_state = 3, .external_lex_state = 1},
  [5] = {.lex_state = 3, .external_lex_state = 1},
  [6] = {.lex_state = 3, .external_lex_state = 1},
  [7] = {.lex_state = 3, .external_lex_state = 1},
  [8] = {.lex_state = 3, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 1, .external_lex_state = 1},
  [20] = {.lex_state = 1, .external_lex_state = 1},
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 1, .external_lex_state = 1},
  [26] = {.lex_state = 1, .external_lex_state = 1},
  [27] = {.lex_state = 1, .external_lex_state = 1},
  [28] = {.lex_state = 1, .external_lex_state = 1},
  [29] = {.lex_state = 1, .external_lex_state = 1},
  [30] = {.lex_state = 1, .external_lex_state = 1},
  [31] = {.lex_state = 1, .external_lex_state = 1},
  [32] = {.lex_state = 1, .external_lex_state = 1},
  [33] = {.lex_state = 1, .external_lex_state = 1},
  [34] = {.lex_state = 1, .external_lex_state = 1},
  [35] = {.lex_state = 1, .external_lex_state = 1},
  [36] = {.lex_state = 1, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 1, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 1, .external_lex_state = 1},
  [45] = {.lex_state = 1, .external_lex_state = 1},
  [46] = {.lex_state = 1, .external_lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 1},
  [48] = {.lex_state = 1, .external_lex_state = 1},
  [49] = {.lex_state = 1, .external_lex_state = 1},
  [50] = {.lex_state = 1, .external_lex_state = 1},
  [51] = {.lex_state = 1, .external_lex_state = 1},
  [52] = {.lex_state = 1, .external_lex_state = 1},
  [53] = {.lex_state = 5, .external_lex_state = 1},
  [54] = {.lex_state = 7, .external_lex_state = 1},
  [55] = {.lex_state = 5, .external_lex_state = 1},
  [56] = {.lex_state = 13, .external_lex_state = 1},
  [57] = {.lex_state = 7, .external_lex_state = 1},
  [58] = {.lex_state = 5, .external_lex_state = 1},
  [59] = {.lex_state = 7, .external_lex_state = 1},
  [60] = {.lex_state = 7, .external_lex_state = 1},
  [61] = {.lex_state = 5, .external_lex_state = 1},
  [62] = {.lex_state = 5, .external_lex_state = 1},
  [63] = {.lex_state = 7, .external_lex_state = 1},
  [64] = {.lex_state = 5, .external_lex_state = 1},
  [65] = {.lex_state = 7, .external_lex_state = 1},
  [66] = {.lex_state = 7, .external_lex_state = 1},
  [67] = {.lex_state = 7, .external_lex_state = 1},
  [68] = {.lex_state = 7, .external_lex_state = 1},
  [69] = {.lex_state = 7, .external_lex_state = 1},
  [70] = {.lex_state = 7, .external_lex_state = 1},
  [71] = {.lex_state = 7, .external_lex_state = 1},
  [72] = {.lex_state = 7, .external_lex_state = 1},
  [73] = {.lex_state = 7, .external_lex_state = 1},
  [74] = {.lex_state = 5, .external_lex_state = 1},
  [75] = {.lex_state = 6, .external_lex_state = 1},
  [76] = {.lex_state = 7, .external_lex_state = 1},
  [77] = {.lex_state = 5, .external_lex_state = 1},
  [78] = {.lex_state = 5, .external_lex_state = 1},
  [79] = {.lex_state = 5, .external_lex_state = 1},
  [80] = {.lex_state = 7, .external_lex_state = 1},
  [81] = {.lex_state = 5, .external_lex_state = 1},
  [82] = {.lex_state = 5, .external_lex_state = 1},
  [83] = {.lex_state = 5, .external_lex_state = 1},
  [84] = {.lex_state = 5, .external_lex_state = 1},
  [85] = {.lex_state = 7, .external_lex_state = 1},
  [86] = {.lex_state = 5, .external_lex_state = 1},
  [87] = {.lex_state = 5, .external_lex_state = 1},
  [88] = {.lex_state = 7, .external_lex_state = 1},
  [89] = {.lex_state = 5, .external_lex_state = 1},
  [90] = {.lex_state = 13, .external_lex_state = 1},
  [91] = {.lex_state = 5, .external_lex_state = 1},
  [92] = {.lex_state = 5, .external_lex_state = 1},
  [93] = {.lex_state = 5, .external_lex_state = 1},
  [94] = {.lex_state = 13, .external_lex_state = 1},
  [95] = {.lex_state = 13, .external_lex_state = 1},
  [96] = {.lex_state = 13, .external_lex_state = 1},
  [97] = {.lex_state = 5, .external_lex_state = 1},
  [98] = {.lex_state = 5, .external_lex_state = 1},
  [99] = {.lex_state = 5, .external_lex_state = 1},
  [100] = {.lex_state = 5, .external_lex_state = 1},
  [101] = {.lex_state = 5, .external_lex_state = 1},
  [102] = {.lex_state = 5, .external_lex_state = 1},
  [103] = {.lex_state = 5, .external_lex_state = 1},
  [104] = {.lex_state = 13, .external_lex_state = 1},
  [105] = {.lex_state = 13, .external_lex_state = 1},
  [106] = {.lex_state = 13, .external_lex_state = 1},
  [107] = {.lex_state = 13, .external_lex_state = 1},
  [108] = {.lex_state = 5, .external_lex_state = 1},
  [109] = {.lex_state = 5, .external_lex_state = 1},
  [110] = {.lex_state = 13, .external_lex_state = 1},
  [111] = {.lex_state = 13, .external_lex_state = 1},
  [112] = {.lex_state = 13, .external_lex_state = 1},
  [113] = {.lex_state = 13, .external_lex_state = 1},
  [114] = {.lex_state = 13, .external_lex_state = 1},
  [115] = {.lex_state = 13, .external_lex_state = 1},
  [116] = {.lex_state = 5, .external_lex_state = 1},
  [117] = {.lex_state = 5, .external_lex_state = 1},
  [118] = {.lex_state = 13, .external_lex_state = 1},
  [119] = {.lex_state = 5, .external_lex_state = 1},
  [120] = {.lex_state = 6, .external_lex_state = 1},
  [121] = {.lex_state = 6, .external_lex_state = 1},
  [122] = {.lex_state = 6, .external_lex_state = 1},
  [123] = {.lex_state = 6, .external_lex_state = 1},
  [124] = {.lex_state = 6, .external_lex_state = 1},
  [125] = {.lex_state = 6, .external_lex_state = 1},
  [126] = {.lex_state = 6, .external_lex_state = 1},
  [127] = {.lex_state = 14, .external_lex_state = 1},
  [128] = {.lex_state = 6, .external_lex_state = 1},
  [129] = {.lex_state = 6, .external_lex_state = 1},
  [130] = {.lex_state = 6, .external_lex_state = 1},
  [131] = {.lex_state = 2, .external_lex_state = 1},
  [132] = {.lex_state = 6, .external_lex_state = 1},
  [133] = {.lex_state = 6, .external_lex_state = 1},
  [134] = {.lex_state = 14, .external_lex_state = 1},
  [135] = {.lex_state = 6, .external_lex_state = 1},
  [136] = {.lex_state = 6, .external_lex_state = 1},
  [137] = {.lex_state = 6, .external_lex_state = 1},
  [138] = {.lex_state = 5, .external_lex_state = 1},
  [139] = {.lex_state = 13, .external_lex_state = 1},
  [140] = {.lex_state = 13, .external_lex_state = 1},
  [141] = {.lex_state = 13, .external_lex_state = 1},
  [142] = {.lex_state = 2, .external_lex_state = 1},
  [143] = {.lex_state = 13, .external_lex_state = 1},
  [144] = {.lex_state = 13, .external_lex_state = 1},
  [145] = {.lex_state = 13, .external_lex_state = 1},
  [146] = {.lex_state = 13, .external_lex_state = 1},
  [147] = {.lex_state = 13, .external_lex_state = 1},
  [148] = {.lex_state = 2, .external_lex_state = 1},
  [149] = {.lex_state = 13, .external_lex_state = 1},
  [150] = {.lex_state = 13, .external_lex_state = 1},
  [151] = {.lex_state = 13, .external_lex_state = 1},
  [152] = {.lex_state = 13, .external_lex_state = 1},
  [153] = {.lex_state = 13, .external_lex_state = 1},
  [154] = {.lex_state = 13, .external_lex_state = 1},
  [155] = {.lex_state = 13, .external_lex_state = 1},
  [156] = {.lex_state = 13, .external_lex_state = 1},
  [157] = {.lex_state = 6, .external_lex_state = 1},
  [158] = {.lex_state = 6, .external_lex_state = 1},
  [159] = {.lex_state = 3, .external_lex_state = 1},
  [160] = {.lex_state = 6, .external_lex_state = 1},
  [161] = {.lex_state = 6, .external_lex_state = 1},
  [162] = {.lex_state = 6, .external_lex_state = 1},
  [163] = {.lex_state = 3, .external_lex_state = 1},
  [164] = {.lex_state = 3, .external_lex_state = 1},
  [165] = {.lex_state = 6, .external_lex_state = 1},
  [166] = {.lex_state = 6, .external_lex_state = 1},
  [167] = {.lex_state = 3, .external_lex_state = 1},
  [168] = {.lex_state = 6, .external_lex_state = 1},
  [169] = {.lex_state = 6, .external_lex_state = 1},
  [170] = {.lex_state = 6, .external_lex_state = 1},
  [171] = {.lex_state = 6, .external_lex_state = 1},
  [172] = {.lex_state = 3, .external_lex_state = 1},
  [173] = {.lex_state = 6, .external_lex_state = 1},
  [174] = {.lex_state = 3, .external_lex_state = 1},
  [175] = {.lex_state = 6, .external_lex_state = 1},
  [176] = {.lex_state = 3, .external_lex_state = 1},
  [177] = {.lex_state = 3, .external_lex_state = 1},
  [178] = {.lex_state = 6, .external_lex_state = 1},
  [179] = {.lex_state = 6, .external_lex_state = 1},
  [180] = {.lex_state = 6, .external_lex_state = 1},
  [181] = {.lex_state = 5, .external_lex_state = 1},
  [182] = {.lex_state = 5, .external_lex_state = 1},
  [183] = {.lex_state = 14, .external_lex_state = 1},
  [184] = {.lex_state = 5, .external_lex_state = 1},
  [185] = {.lex_state = 5, .external_lex_state = 1},
  [186] = {.lex_state = 5, .external_lex_state = 1},
  [187] = {.lex_state = 5, .external_lex_state = 1},
  [188] = {.lex_state = 5, .external_lex_state = 1},
  [189] = {.lex_state = 5, .external_lex_state = 1},
  [190] = {.lex_state = 14, .external_lex_state = 1},
  [191] = {.lex_state = 14, .external_lex_state = 1},
  [192] = {.lex_state = 14, .external_lex_state = 1},
  [193] = {.lex_state = 14, .external_lex_state = 1},
  [194] = {.lex_state = 14, .external_lex_state = 1},
  [195] = {.lex_state = 14, .external_lex_state = 1},
  [196] = {.lex_state = 14, .external_lex_state = 1},
  [197] = {.lex_state = 14, .external_lex_state = 1},
  [198] = {.lex_state = 14, .external_lex_state = 1},
  [199] = {.lex_state = 14, .external_lex_state = 1},
  [200] = {.lex_state = 14, .external_lex_state = 1},
  [201] = {.lex_state = 14, .external_lex_state = 1},
  [202] = {.lex_state = 14, .external_lex_state = 1},
  [203] = {.lex_state = 15, .external_lex_state = 1},
  [204] = {.lex_state = 8, .external_lex_state = 1},
  [205] = {.lex_state = 8, .external_lex_state = 1},
  [206] = {.lex_state = 8, .external_lex_state = 1},
  [207] = {.lex_state = 8, .external_lex_state = 1},
  [208] = {.lex_state = 8, .external_lex_state = 1},
  [209] = {.lex_state = 8, .external_lex_state = 1},
  [210] = {.lex_state = 8, .external_lex_state = 1},
  [211] = {.lex_state = 8, .external_lex_state = 1},
  [212] = {.lex_state = 8, .external_lex_state = 1},
  [213] = {.lex_state = 8, .external_lex_state = 1},
  [214] = {.lex_state = 8, .external_lex_state = 1},
  [215] = {.lex_state = 8, .external_lex_state = 1},
  [216] = {.lex_state = 8, .external_lex_state = 1},
  [217] = {.lex_state = 8, .external_lex_state = 1},
  [218] = {.lex_state = 8, .external_lex_state = 1},
  [219] = {.lex_state = 8, .external_lex_state = 1},
  [220] = {.lex_state = 8, .external_lex_state = 1},
  [221] = {.lex_state = 8, .external_lex_state = 1},
  [222] = {.lex_state = 8, .external_lex_state = 1},
  [223] = {.lex_state = 8, .external_lex_state = 1},
  [224] = {.lex_state = 8, .external_lex_state = 1},
  [225] = {.lex_state = 8, .external_lex_state = 1},
  [226] = {.lex_state = 8, .external_lex_state = 1},
  [227] = {.lex_state = 8, .external_lex_state = 1},
  [228] = {.lex_state = 8, .external_lex_state = 1},
  [229] = {.lex_state = 8, .external_lex_state = 1},
  [230] = {.lex_state = 8, .external_lex_state = 1},
  [231] = {.lex_state = 8, .external_lex_state = 1},
  [232] = {.lex_state = 8, .external_lex_state = 1},
  [233] = {.lex_state = 8, .external_lex_state = 1},
  [234] = {.lex_state = 8, .external_lex_state = 1},
  [235] = {.lex_state = 8, .external_lex_state = 1},
  [236] = {.lex_state = 15, .external_lex_state = 1},
  [237] = {.lex_state = 8, .external_lex_state = 1},
  [238] = {.lex_state = 8, .external_lex_state = 1},
  [239] = {.lex_state = 8, .external_lex_state = 1},
  [240] = {.lex_state = 8, .external_lex_state = 1},
  [241] = {.lex_state = 8, .external_lex_state = 1},
  [242] = {.lex_state = 15, .external_lex_state = 1},
  [243] = {.lex_state = 8, .external_lex_state = 1},
  [244] = {.lex_state = 8, .external_lex_state = 1},
  [245] = {.lex_state = 8, .external_lex_state = 1},
  [246] = {.lex_state = 8, .external_lex_state = 1},
  [247] = {.lex_state = 14, .external_lex_state = 1},
  [248] = {.lex_state = 8, .external_lex_state = 1},
  [249] = {.lex_state = 8, .external_lex_state = 1},
  [250] = {.lex_state = 14, .external_lex_state = 1},
  [251] = {.lex_state = 8, .external_lex_state = 1},
  [252] = {.lex_state = 8, .external_lex_state = 1},
  [253] = {.lex_state = 8, .external_lex_state = 1},
  [254] = {.lex_state = 8, .external_lex_state = 1},
  [255] = {.lex_state = 8, .external_lex_state = 1},
  [256] = {.lex_state = 8, .external_lex_state = 1},
  [257] = {.lex_state = 8, .external_lex_state = 1},
  [258] = {.lex_state = 8, .external_lex_state = 1},
  [259] = {.lex_state = 8, .external_lex_state = 1},
  [260] = {.lex_state = 8, .external_lex_state = 1},
  [261] = {.lex_state = 8, .external_lex_state = 1},
  [262] = {.lex_state = 15, .external_lex_state = 1},
  [263] = {.lex_state = 8, .external_lex_state = 1},
  [264] = {.lex_state = 8, .external_lex_state = 1},
  [265] = {.lex_state = 8, .external_lex_state = 1},
  [266] = {.lex_state = 14, .external_lex_state = 1},
  [267] = {.lex_state = 8, .external_lex_state = 1},
  [268] = {.lex_state = 15, .external_lex_state = 1},
  [269] = {.lex_state = 0, .external_lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 1},
  [271] = {.lex_state = 0, .external_lex_state = 1},
  [272] = {.lex_state = 0, .external_lex_state = 1},
  [273] = {.lex_state = 14, .external_lex_state = 1},
  [274] = {.lex_state = 0, .external_lex_state = 1},
  [275] = {.lex_state = 0, .external_lex_state = 1},
  [276] = {.lex_state = 14, .external_lex_state = 1},
  [277] = {.lex_state = 14, .external_lex_state = 1},
  [278] = {.lex_state = 0, .external_lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 1},
  [280] = {.lex_state = 14, .external_lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 1},
  [282] = {.lex_state = 14, .external_lex_state = 1},
  [283] = {.lex_state = 0, .external_lex_state = 1},
  [284] = {.lex_state = 0, .external_lex_state = 1},
  [285] = {.lex_state = 14, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 14, .external_lex_state = 1},
  [291] = {.lex_state = 8, .external_lex_state = 1},
  [292] = {.lex_state = 0, .external_lex_state = 1},
  [293] = {.lex_state = 0, .external_lex_state = 1},
  [294] = {.lex_state = 0, .external_lex_state = 1},
  [295] = {.lex_state = 0, .external_lex_state = 1},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 0, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 9, .external_lex_state = 1},
  [301] = {.lex_state = 8, .external_lex_state = 1},
  [302] = {.lex_state = 9, .external_lex_state = 1},
  [303] = {.lex_state = 9, .external_lex_state = 1},
  [304] = {.lex_state = 9, .external_lex_state = 1},
  [305] = {.lex_state = 9, .external_lex_state = 1},
  [306] = {.lex_state = 0, .external_lex_state = 1},
  [307] = {.lex_state = 0, .external_lex_state = 1},
  [308] = {.lex_state = 0, .external_lex_state = 1},
  [309] = {.lex_state = 0, .external_lex_state = 1},
  [310] = {.lex_state = 8, .external_lex_state = 1},
  [311] = {.lex_state = 8, .external_lex_state = 1},
  [312] = {.lex_state = 14, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 0, .external_lex_state = 1},
  [315] = {.lex_state = 0, .external_lex_state = 1},
  [316] = {.lex_state = 0, .external_lex_state = 1},
  [317] = {.lex_state = 0, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 0, .external_lex_state = 1},
  [320] = {.lex_state = 0, .external_lex_state = 1},
  [321] = {.lex_state = 14, .external_lex_state = 1},
  [322] = {.lex_state = 0, .external_lex_state = 1},
  [323] = {.lex_state = 0, .external_lex_state = 1},
  [324] = {.lex_state = 14, .external_lex_state = 1},
  [325] = {.lex_state = 0, .external_lex_state = 1},
  [326] = {.lex_state = 0, .external_lex_state = 1},
  [327] = {.lex_state = 0, .external_lex_state = 1},
  [328] = {.lex_state = 0, .external_lex_state = 1},
  [329] = {.lex_state = 0, .external_lex_state = 1},
  [330] = {.lex_state = 0, .external_lex_state = 1},
  [331] = {.lex_state = 0, .external_lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 1},
  [333] = {.lex_state = 0, .external_lex_state = 1},
  [334] = {.lex_state = 0, .external_lex_state = 1},
  [335] = {.lex_state = 0, .external_lex_state = 1},
  [336] = {.lex_state = 0, .external_lex_state = 1},
  [337] = {.lex_state = 14, .external_lex_state = 1},
  [338] = {.lex_state = 14, .external_lex_state = 1},
  [339] = {.lex_state = 0, .external_lex_state = 1},
  [340] = {.lex_state = 14, .external_lex_state = 1},
};

enum {
  ts_external_token_block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_return_keyword] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_bit_type] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [aux_sym_filepath_component_token1] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(313),
    [sym__global_definition] = STATE(127),
    [sym__definition_or_type] = STATE(127),
    [sym_variable_definition] = STATE(127),
    [sym_function_definition] = STATE(127),
    [sym_type_definition] = STATE(127),
    [sym_identifier_list] = STATE(324),
    [sym_using_statement] = STATE(127),
    [sym_identifier] = STATE(280),
    [aux_sym_source_file_repeat1] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym_filepath_component_token1] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(16), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      sym_return_keyword,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(28), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(34), 1,
      sym_string,
    ACTIONS(37), 1,
      aux_sym_filepath_component_token1,
    STATE(81), 1,
      sym_identifier,
    STATE(318), 1,
      sym_expression,
    STATE(337), 1,
      sym_identifier_list,
    STATE(339), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(159), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [73] = 18,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_while,
    ACTIONS(46), 1,
      sym_return_keyword,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    STATE(81), 1,
      sym_identifier,
    STATE(318), 1,
      sym_expression,
    STATE(337), 1,
      sym_identifier_list,
    STATE(339), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(159), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [146] = 18,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_while,
    ACTIONS(46), 1,
      sym_return_keyword,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(318), 1,
      sym_expression,
    STATE(337), 1,
      sym_identifier_list,
    STATE(339), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(159), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [219] = 18,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_while,
    ACTIONS(46), 1,
      sym_return_keyword,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(318), 1,
      sym_expression,
    STATE(337), 1,
      sym_identifier_list,
    STATE(339), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(159), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [292] = 18,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_while,
    ACTIONS(46), 1,
      sym_return_keyword,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(318), 1,
      sym_expression,
    STATE(337), 1,
      sym_identifier_list,
    STATE(339), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(159), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [365] = 18,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_while,
    ACTIONS(46), 1,
      sym_return_keyword,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(318), 1,
      sym_expression,
    STATE(337), 1,
      sym_identifier_list,
    STATE(339), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(159), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [438] = 18,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_while,
    ACTIONS(46), 1,
      sym_return_keyword,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_identifier,
    STATE(318), 1,
      sym_expression,
    STATE(337), 1,
      sym_identifier_list,
    STATE(339), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(159), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [511] = 12,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      sym_string,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    STATE(104), 1,
      sym_identifier,
    STATE(250), 1,
      sym_expression,
    STATE(276), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(139), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [562] = 12,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_identifier,
    STATE(168), 1,
      sym_function_call_args,
    STATE(292), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [613] = 12,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_identifier,
    STATE(103), 1,
      sym_function_call_args,
    STATE(274), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [664] = 12,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_identifier,
    STATE(153), 1,
      sym_function_call_args,
    STATE(271), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [715] = 10,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    STATE(55), 1,
      sym_identifier,
    STATE(250), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [760] = 10,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    STATE(55), 1,
      sym_identifier,
    STATE(306), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [805] = 10,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(92), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    STATE(308), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(188), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [850] = 10,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(92), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    STATE(309), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(188), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [895] = 10,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      sym_number,
    ACTIONS(102), 1,
      sym_string,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    STATE(122), 1,
      sym_identifier,
    STATE(311), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(175), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [940] = 10,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    STATE(55), 1,
      sym_identifier,
    STATE(266), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(138), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [985] = 10,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      sym_number,
    ACTIONS(80), 1,
      sym_string,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    STATE(104), 1,
      sym_identifier,
    STATE(266), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(139), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1030] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(108), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(178), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1072] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(110), 1,
      sym_number,
    ACTIONS(112), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(100), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1114] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(189), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1156] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(120), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(108), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1198] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(122), 1,
      sym_number,
    ACTIONS(124), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(109), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1240] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(126), 1,
      sym_number,
    ACTIONS(128), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(155), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1282] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(130), 1,
      sym_number,
    ACTIONS(132), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1324] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(136), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(151), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1366] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(140), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(149), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1408] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(142), 1,
      sym_number,
    ACTIONS(144), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(185), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1450] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(146), 1,
      sym_number,
    ACTIONS(148), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(184), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1492] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(150), 1,
      sym_number,
    ACTIONS(152), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(140), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1534] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(156), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(141), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1576] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(160), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(92), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1618] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(162), 1,
      sym_number,
    ACTIONS(164), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(91), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1660] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(166), 1,
      sym_number,
    ACTIONS(168), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(97), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1702] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(172), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(98), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1744] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(174), 1,
      sym_number,
    ACTIONS(176), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(99), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1786] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(178), 1,
      sym_number,
    ACTIONS(180), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(146), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1828] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(182), 1,
      sym_number,
    ACTIONS(184), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(152), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1870] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(101), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1912] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(190), 1,
      sym_number,
    ACTIONS(192), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(182), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1954] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(194), 1,
      sym_number,
    ACTIONS(196), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(169), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [1996] = 9,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(198), 1,
      sym_number,
    ACTIONS(200), 1,
      sym_string,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(187), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2038] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(179), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2080] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(208), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(170), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2122] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(210), 1,
      sym_number,
    ACTIONS(212), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(180), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2164] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(214), 1,
      sym_number,
    ACTIONS(216), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(173), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2206] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(218), 1,
      sym_number,
    ACTIONS(220), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(160), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2248] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(222), 1,
      sym_number,
    ACTIONS(224), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(171), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2290] = 9,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(226), 1,
      sym_number,
    ACTIONS(228), 1,
      sym_string,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(157), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2332] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(230), 1,
      sym_number,
    ACTIONS(232), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(144), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2374] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_STAR,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(236), 1,
      sym_string,
    STATE(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(145), 14,
      sym__expression,
      sym_bracketed,
      sym_subscript,
      sym_address_of,
      sym_dereference,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_subtraction,
      sym_division,
      sym_modulus,
      sym_product,
  [2416] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(238), 17,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2440] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_bit_type,
    ACTIONS(250), 1,
      anon_sym_STAR,
    STATE(247), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(190), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2478] = 4,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(252), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2504] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2528] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_bit_type,
    ACTIONS(250), 1,
      anon_sym_STAR,
    ACTIONS(260), 1,
      anon_sym_EQ,
    STATE(293), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(190), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2566] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(262), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2587] = 9,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      sym_bit_type,
    ACTIONS(272), 1,
      anon_sym_STAR,
    STATE(126), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(124), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2622] = 9,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      sym_bit_type,
    ACTIONS(282), 1,
      anon_sym_STAR,
    STATE(84), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(64), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2657] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2678] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2699] = 9,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      sym_bit_type,
    ACTIONS(282), 1,
      anon_sym_STAR,
    STATE(62), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(64), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2734] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(288), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2755] = 9,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      sym_bit_type,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      aux_sym_filepath_component_token1,
    STATE(259), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(251), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2790] = 9,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      sym_bit_type,
    ACTIONS(310), 1,
      anon_sym_STAR,
    STATE(107), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(115), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2825] = 9,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      sym_bit_type,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      aux_sym_filepath_component_token1,
    STATE(264), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(251), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2860] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_bit_type,
    ACTIONS(250), 1,
      anon_sym_STAR,
    STATE(269), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(190), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2895] = 9,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      sym_bit_type,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      aux_sym_filepath_component_token1,
    STATE(253), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(251), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2930] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_bit_type,
    ACTIONS(250), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(190), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2965] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_bit_type,
    ACTIONS(250), 1,
      anon_sym_STAR,
    STATE(193), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(190), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3000] = 9,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      sym_bit_type,
    ACTIONS(272), 1,
      anon_sym_STAR,
    STATE(133), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(124), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3035] = 9,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      sym_bit_type,
    ACTIONS(310), 1,
      anon_sym_STAR,
    STATE(112), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(115), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3070] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(312), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3091] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 12,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3114] = 9,
    ACTIONS(82), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      sym_bit_type,
    ACTIONS(310), 1,
      anon_sym_STAR,
    STATE(110), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(115), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3149] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(314), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3170] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3191] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3212] = 9,
    ACTIONS(104), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      sym_bit_type,
    ACTIONS(272), 1,
      anon_sym_STAR,
    STATE(123), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(124), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3247] = 7,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(252), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3278] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3299] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(326), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3320] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(328), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3341] = 9,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      sym_bit_type,
    ACTIONS(282), 1,
      anon_sym_STAR,
    STATE(181), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(64), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3376] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3397] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 14,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3418] = 9,
    ACTIONS(58), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      sym_bit_type,
    ACTIONS(282), 1,
      anon_sym_STAR,
    STATE(89), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(64), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3453] = 4,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(334), 12,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3478] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(318), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3500] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3520] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3540] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3560] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(312), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3582] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(314), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3604] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(284), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3626] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3646] = 5,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3672] = 5,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(364), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3698] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(366), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3718] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(368), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3738] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(370), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3758] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(372), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3778] = 5,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(378), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3804] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(332), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3826] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(330), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3848] = 5,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3874] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3894] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3914] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(286), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3936] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(262), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3958] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(328), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3980] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(326), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4002] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(324), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4024] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4046] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(406), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4066] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(408), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4086] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(316), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4108] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(412), 13,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4128] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(318), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4149] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(326), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4170] = 5,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(252), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4195] = 5,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(334), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4220] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(288), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4241] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(262), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4262] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(286), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4283] = 7,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    STATE(280), 1,
      sym_identifier,
    STATE(324), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(134), 7,
      sym__global_definition,
      sym__definition_or_type,
      sym_variable_definition,
      sym_function_definition,
      sym_type_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [4312] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(284), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4333] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(312), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4354] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(332), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4375] = 5,
    ACTIONS(428), 1,
      anon_sym_else,
    STATE(164), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(424), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [4400] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(314), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4421] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(328), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4442] = 7,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      anon_sym_using,
    ACTIONS(435), 1,
      aux_sym_filepath_component_token1,
    STATE(280), 1,
      sym_identifier,
    STATE(324), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(134), 7,
      sym__global_definition,
      sym__definition_or_type,
      sym_variable_definition,
      sym_function_definition,
      sym_type_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [4471] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(316), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4492] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(330), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4513] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(324), 10,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4534] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(440), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4568] = 11,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_STAR,
    ACTIONS(456), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_as,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(462), 1,
      anon_sym_DASH,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [4604] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(468), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4624] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(390), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4644] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(474), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(472), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [4664] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(476), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4684] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(478), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4704] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4724] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(482), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4744] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(408), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4764] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(488), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(486), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [4784] = 6,
    ACTIONS(452), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(490), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4810] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4830] = 6,
    ACTIONS(452), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(494), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4856] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4876] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(372), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4896] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4916] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(502), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4936] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(370), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4956] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(366), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4975] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(370), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4994] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(508), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(506), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5013] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(344), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5032] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(346), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5051] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(412), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5070] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(488), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(486), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5089] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(512), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(510), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5108] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(408), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5127] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(406), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5146] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(474), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(472), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5165] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(372), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5184] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(390), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5203] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(392), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5222] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(368), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5241] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(516), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(514), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5260] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(342), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5279] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(518), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5298] = 11,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(524), 1,
      anon_sym_STAR,
    ACTIONS(526), 1,
      anon_sym_DOT,
    ACTIONS(528), 1,
      anon_sym_as,
    ACTIONS(530), 1,
      anon_sym_PLUS,
    ACTIONS(532), 1,
      anon_sym_DASH,
    ACTIONS(534), 1,
      anon_sym_SLASH,
    ACTIONS(536), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5333] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(540), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(538), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5352] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(542), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5371] = 6,
    ACTIONS(524), 1,
      anon_sym_STAR,
    ACTIONS(534), 1,
      anon_sym_SLASH,
    ACTIONS(536), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(364), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5396] = 6,
    ACTIONS(524), 1,
      anon_sym_STAR,
    ACTIONS(534), 1,
      anon_sym_SLASH,
    ACTIONS(536), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(356), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5421] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(354), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5440] = 3,
    ACTIONS(338), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(334), 9,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5459] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5491] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5509] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5541] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5573] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5605] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5637] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(556), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5669] = 10,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_PERCENT,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_as,
    ACTIONS(446), 1,
      anon_sym_PLUS,
    ACTIONS(448), 1,
      anon_sym_DASH,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5701] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5718] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5735] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5752] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(286), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5769] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5786] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5803] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5820] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(332), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5837] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5854] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5871] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(330), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5888] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(328), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5905] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(318), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5922] = 5,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(236), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [5941] = 6,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(218), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [5962] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_type_definition,
    STATE(280), 1,
      sym_identifier,
    STATE(321), 1,
      sym_identifier_list,
    STATE(335), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5985] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_type_definition,
    STATE(280), 1,
      sym_identifier,
    STATE(321), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6008] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_type_definition,
    STATE(280), 1,
      sym_identifier,
    STATE(321), 1,
      sym_identifier_list,
    STATE(328), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6031] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_type_definition,
    STATE(280), 1,
      sym_identifier,
    STATE(321), 1,
      sym_identifier_list,
    STATE(322), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6054] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6075] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_output_parameters,
    STATE(280), 1,
      sym_identifier,
    STATE(295), 1,
      sym_type_definition,
    STATE(321), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6098] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(209), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6119] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(248), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6140] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_output_parameters,
    STATE(280), 1,
      sym_identifier,
    STATE(283), 1,
      sym_type_definition,
    STATE(321), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6163] = 6,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      aux_sym_filepath_component_token1,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6184] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(212), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6205] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6226] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(216), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6247] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6268] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(248), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6289] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_output_parameters,
    STATE(280), 1,
      sym_identifier,
    STATE(288), 1,
      sym_type_definition,
    STATE(321), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6312] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(219), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6333] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6354] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(222), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6375] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6396] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(224), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6417] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(248), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6438] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_output_parameters,
    STATE(280), 1,
      sym_identifier,
    STATE(294), 1,
      sym_type_definition,
    STATE(321), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6461] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(233), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6482] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(226), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6503] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6524] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(230), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6545] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6566] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(248), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6587] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(232), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6608] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(248), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6629] = 5,
    ACTIONS(564), 1,
      anon_sym_COLON_COLON,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(242), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6648] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6669] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_output_parameters,
    STATE(275), 1,
      sym_type_definition,
    STATE(280), 1,
      sym_identifier,
    STATE(321), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6692] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(245), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6713] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(237), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6734] = 7,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_type_definition,
    STATE(280), 1,
      sym_identifier,
    STATE(321), 1,
      sym_identifier_list,
    STATE(325), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6757] = 5,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(645), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(643), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(242), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6776] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(235), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6797] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6818] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6839] = 6,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_identifier,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(244), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6860] = 6,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    ACTIONS(658), 1,
      anon_sym_EQ,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [6881] = 6,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      aux_sym_filepath_component_token1,
    STATE(280), 1,
      sym_identifier,
    STATE(338), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(248), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6902] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [6913] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(673), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [6926] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [6937] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [6948] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [6959] = 5,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    STATE(280), 1,
      sym_identifier,
    STATE(299), 1,
      sym_type_definition,
    STATE(321), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6976] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [6987] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(312), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [6998] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7009] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7020] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7031] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7042] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7053] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
    ACTIONS(677), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7066] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7077] = 4,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
    ACTIONS(683), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [7092] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7103] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(687), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7116] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7127] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
    ACTIONS(691), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7140] = 4,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7155] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7169] = 4,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7183] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7197] = 3,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7209] = 4,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7223] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7237] = 3,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7249] = 3,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7261] = 4,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7275] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7289] = 4,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7303] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7317] = 4,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_COLON,
    STATE(285), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7331] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7345] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7359] = 4,
    ACTIONS(723), 1,
      anon_sym_COLON,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7373] = 4,
    ACTIONS(728), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7387] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7401] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7415] = 4,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7429] = 3,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7441] = 4,
    ACTIONS(743), 1,
      aux_sym_filepath_component_token1,
    STATE(203), 1,
      sym_filepath_component,
    STATE(290), 1,
      sym_namespace,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7455] = 4,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7469] = 4,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7483] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7497] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7511] = 4,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7525] = 4,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7539] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7553] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7562] = 3,
    ACTIONS(762), 1,
      sym_number,
    STATE(331), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7573] = 3,
    ACTIONS(743), 1,
      aux_sym_filepath_component_token1,
    STATE(262), 1,
      sym_filepath_component,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7584] = 3,
    ACTIONS(762), 1,
      sym_number,
    STATE(327), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7595] = 3,
    ACTIONS(762), 1,
      sym_number,
    STATE(334), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7606] = 3,
    ACTIONS(762), 1,
      sym_number,
    STATE(319), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7617] = 3,
    ACTIONS(762), 1,
      sym_number,
    STATE(317), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7628] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7637] = 3,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7648] = 3,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7659] = 3,
    ACTIONS(766), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7670] = 3,
    ACTIONS(568), 1,
      aux_sym_filepath_component_token1,
    STATE(312), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7681] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(768), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [7690] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [7699] = 2,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7707] = 2,
    ACTIONS(772), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7715] = 2,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7723] = 2,
    ACTIONS(776), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7731] = 2,
    ACTIONS(778), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7739] = 2,
    ACTIONS(780), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7747] = 2,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7755] = 2,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7763] = 2,
    ACTIONS(786), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7771] = 2,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7779] = 2,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7787] = 2,
    ACTIONS(792), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7795] = 2,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7803] = 2,
    ACTIONS(796), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7811] = 2,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7819] = 2,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7827] = 2,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7835] = 2,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7843] = 2,
    ACTIONS(806), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7851] = 2,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7859] = 2,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7867] = 2,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7875] = 2,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7883] = 2,
    ACTIONS(816), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7891] = 2,
    ACTIONS(818), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7899] = 2,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7907] = 2,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7915] = 2,
    ACTIONS(824), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 511,
  [SMALL_STATE(10)] = 562,
  [SMALL_STATE(11)] = 613,
  [SMALL_STATE(12)] = 664,
  [SMALL_STATE(13)] = 715,
  [SMALL_STATE(14)] = 760,
  [SMALL_STATE(15)] = 805,
  [SMALL_STATE(16)] = 850,
  [SMALL_STATE(17)] = 895,
  [SMALL_STATE(18)] = 940,
  [SMALL_STATE(19)] = 985,
  [SMALL_STATE(20)] = 1030,
  [SMALL_STATE(21)] = 1072,
  [SMALL_STATE(22)] = 1114,
  [SMALL_STATE(23)] = 1156,
  [SMALL_STATE(24)] = 1198,
  [SMALL_STATE(25)] = 1240,
  [SMALL_STATE(26)] = 1282,
  [SMALL_STATE(27)] = 1324,
  [SMALL_STATE(28)] = 1366,
  [SMALL_STATE(29)] = 1408,
  [SMALL_STATE(30)] = 1450,
  [SMALL_STATE(31)] = 1492,
  [SMALL_STATE(32)] = 1534,
  [SMALL_STATE(33)] = 1576,
  [SMALL_STATE(34)] = 1618,
  [SMALL_STATE(35)] = 1660,
  [SMALL_STATE(36)] = 1702,
  [SMALL_STATE(37)] = 1744,
  [SMALL_STATE(38)] = 1786,
  [SMALL_STATE(39)] = 1828,
  [SMALL_STATE(40)] = 1870,
  [SMALL_STATE(41)] = 1912,
  [SMALL_STATE(42)] = 1954,
  [SMALL_STATE(43)] = 1996,
  [SMALL_STATE(44)] = 2038,
  [SMALL_STATE(45)] = 2080,
  [SMALL_STATE(46)] = 2122,
  [SMALL_STATE(47)] = 2164,
  [SMALL_STATE(48)] = 2206,
  [SMALL_STATE(49)] = 2248,
  [SMALL_STATE(50)] = 2290,
  [SMALL_STATE(51)] = 2332,
  [SMALL_STATE(52)] = 2374,
  [SMALL_STATE(53)] = 2416,
  [SMALL_STATE(54)] = 2440,
  [SMALL_STATE(55)] = 2478,
  [SMALL_STATE(56)] = 2504,
  [SMALL_STATE(57)] = 2528,
  [SMALL_STATE(58)] = 2566,
  [SMALL_STATE(59)] = 2587,
  [SMALL_STATE(60)] = 2622,
  [SMALL_STATE(61)] = 2657,
  [SMALL_STATE(62)] = 2678,
  [SMALL_STATE(63)] = 2699,
  [SMALL_STATE(64)] = 2734,
  [SMALL_STATE(65)] = 2755,
  [SMALL_STATE(66)] = 2790,
  [SMALL_STATE(67)] = 2825,
  [SMALL_STATE(68)] = 2860,
  [SMALL_STATE(69)] = 2895,
  [SMALL_STATE(70)] = 2930,
  [SMALL_STATE(71)] = 2965,
  [SMALL_STATE(72)] = 3000,
  [SMALL_STATE(73)] = 3035,
  [SMALL_STATE(74)] = 3070,
  [SMALL_STATE(75)] = 3091,
  [SMALL_STATE(76)] = 3114,
  [SMALL_STATE(77)] = 3149,
  [SMALL_STATE(78)] = 3170,
  [SMALL_STATE(79)] = 3191,
  [SMALL_STATE(80)] = 3212,
  [SMALL_STATE(81)] = 3247,
  [SMALL_STATE(82)] = 3278,
  [SMALL_STATE(83)] = 3299,
  [SMALL_STATE(84)] = 3320,
  [SMALL_STATE(85)] = 3341,
  [SMALL_STATE(86)] = 3376,
  [SMALL_STATE(87)] = 3397,
  [SMALL_STATE(88)] = 3418,
  [SMALL_STATE(89)] = 3453,
  [SMALL_STATE(90)] = 3478,
  [SMALL_STATE(91)] = 3500,
  [SMALL_STATE(92)] = 3520,
  [SMALL_STATE(93)] = 3540,
  [SMALL_STATE(94)] = 3560,
  [SMALL_STATE(95)] = 3582,
  [SMALL_STATE(96)] = 3604,
  [SMALL_STATE(97)] = 3626,
  [SMALL_STATE(98)] = 3646,
  [SMALL_STATE(99)] = 3672,
  [SMALL_STATE(100)] = 3698,
  [SMALL_STATE(101)] = 3718,
  [SMALL_STATE(102)] = 3738,
  [SMALL_STATE(103)] = 3758,
  [SMALL_STATE(104)] = 3778,
  [SMALL_STATE(105)] = 3804,
  [SMALL_STATE(106)] = 3826,
  [SMALL_STATE(107)] = 3848,
  [SMALL_STATE(108)] = 3874,
  [SMALL_STATE(109)] = 3894,
  [SMALL_STATE(110)] = 3914,
  [SMALL_STATE(111)] = 3936,
  [SMALL_STATE(112)] = 3958,
  [SMALL_STATE(113)] = 3980,
  [SMALL_STATE(114)] = 4002,
  [SMALL_STATE(115)] = 4024,
  [SMALL_STATE(116)] = 4046,
  [SMALL_STATE(117)] = 4066,
  [SMALL_STATE(118)] = 4086,
  [SMALL_STATE(119)] = 4108,
  [SMALL_STATE(120)] = 4128,
  [SMALL_STATE(121)] = 4149,
  [SMALL_STATE(122)] = 4170,
  [SMALL_STATE(123)] = 4195,
  [SMALL_STATE(124)] = 4220,
  [SMALL_STATE(125)] = 4241,
  [SMALL_STATE(126)] = 4262,
  [SMALL_STATE(127)] = 4283,
  [SMALL_STATE(128)] = 4312,
  [SMALL_STATE(129)] = 4333,
  [SMALL_STATE(130)] = 4354,
  [SMALL_STATE(131)] = 4375,
  [SMALL_STATE(132)] = 4400,
  [SMALL_STATE(133)] = 4421,
  [SMALL_STATE(134)] = 4442,
  [SMALL_STATE(135)] = 4471,
  [SMALL_STATE(136)] = 4492,
  [SMALL_STATE(137)] = 4513,
  [SMALL_STATE(138)] = 4534,
  [SMALL_STATE(139)] = 4568,
  [SMALL_STATE(140)] = 4604,
  [SMALL_STATE(141)] = 4624,
  [SMALL_STATE(142)] = 4644,
  [SMALL_STATE(143)] = 4664,
  [SMALL_STATE(144)] = 4684,
  [SMALL_STATE(145)] = 4704,
  [SMALL_STATE(146)] = 4724,
  [SMALL_STATE(147)] = 4744,
  [SMALL_STATE(148)] = 4764,
  [SMALL_STATE(149)] = 4784,
  [SMALL_STATE(150)] = 4810,
  [SMALL_STATE(151)] = 4830,
  [SMALL_STATE(152)] = 4856,
  [SMALL_STATE(153)] = 4876,
  [SMALL_STATE(154)] = 4896,
  [SMALL_STATE(155)] = 4916,
  [SMALL_STATE(156)] = 4936,
  [SMALL_STATE(157)] = 4956,
  [SMALL_STATE(158)] = 4975,
  [SMALL_STATE(159)] = 4994,
  [SMALL_STATE(160)] = 5013,
  [SMALL_STATE(161)] = 5032,
  [SMALL_STATE(162)] = 5051,
  [SMALL_STATE(163)] = 5070,
  [SMALL_STATE(164)] = 5089,
  [SMALL_STATE(165)] = 5108,
  [SMALL_STATE(166)] = 5127,
  [SMALL_STATE(167)] = 5146,
  [SMALL_STATE(168)] = 5165,
  [SMALL_STATE(169)] = 5184,
  [SMALL_STATE(170)] = 5203,
  [SMALL_STATE(171)] = 5222,
  [SMALL_STATE(172)] = 5241,
  [SMALL_STATE(173)] = 5260,
  [SMALL_STATE(174)] = 5279,
  [SMALL_STATE(175)] = 5298,
  [SMALL_STATE(176)] = 5333,
  [SMALL_STATE(177)] = 5352,
  [SMALL_STATE(178)] = 5371,
  [SMALL_STATE(179)] = 5396,
  [SMALL_STATE(180)] = 5421,
  [SMALL_STATE(181)] = 5440,
  [SMALL_STATE(182)] = 5459,
  [SMALL_STATE(183)] = 5491,
  [SMALL_STATE(184)] = 5509,
  [SMALL_STATE(185)] = 5541,
  [SMALL_STATE(186)] = 5573,
  [SMALL_STATE(187)] = 5605,
  [SMALL_STATE(188)] = 5637,
  [SMALL_STATE(189)] = 5669,
  [SMALL_STATE(190)] = 5701,
  [SMALL_STATE(191)] = 5718,
  [SMALL_STATE(192)] = 5735,
  [SMALL_STATE(193)] = 5752,
  [SMALL_STATE(194)] = 5769,
  [SMALL_STATE(195)] = 5786,
  [SMALL_STATE(196)] = 5803,
  [SMALL_STATE(197)] = 5820,
  [SMALL_STATE(198)] = 5837,
  [SMALL_STATE(199)] = 5854,
  [SMALL_STATE(200)] = 5871,
  [SMALL_STATE(201)] = 5888,
  [SMALL_STATE(202)] = 5905,
  [SMALL_STATE(203)] = 5922,
  [SMALL_STATE(204)] = 5941,
  [SMALL_STATE(205)] = 5962,
  [SMALL_STATE(206)] = 5985,
  [SMALL_STATE(207)] = 6008,
  [SMALL_STATE(208)] = 6031,
  [SMALL_STATE(209)] = 6054,
  [SMALL_STATE(210)] = 6075,
  [SMALL_STATE(211)] = 6098,
  [SMALL_STATE(212)] = 6119,
  [SMALL_STATE(213)] = 6140,
  [SMALL_STATE(214)] = 6163,
  [SMALL_STATE(215)] = 6184,
  [SMALL_STATE(216)] = 6205,
  [SMALL_STATE(217)] = 6226,
  [SMALL_STATE(218)] = 6247,
  [SMALL_STATE(219)] = 6268,
  [SMALL_STATE(220)] = 6289,
  [SMALL_STATE(221)] = 6312,
  [SMALL_STATE(222)] = 6333,
  [SMALL_STATE(223)] = 6354,
  [SMALL_STATE(224)] = 6375,
  [SMALL_STATE(225)] = 6396,
  [SMALL_STATE(226)] = 6417,
  [SMALL_STATE(227)] = 6438,
  [SMALL_STATE(228)] = 6461,
  [SMALL_STATE(229)] = 6482,
  [SMALL_STATE(230)] = 6503,
  [SMALL_STATE(231)] = 6524,
  [SMALL_STATE(232)] = 6545,
  [SMALL_STATE(233)] = 6566,
  [SMALL_STATE(234)] = 6587,
  [SMALL_STATE(235)] = 6608,
  [SMALL_STATE(236)] = 6629,
  [SMALL_STATE(237)] = 6648,
  [SMALL_STATE(238)] = 6669,
  [SMALL_STATE(239)] = 6692,
  [SMALL_STATE(240)] = 6713,
  [SMALL_STATE(241)] = 6734,
  [SMALL_STATE(242)] = 6757,
  [SMALL_STATE(243)] = 6776,
  [SMALL_STATE(244)] = 6797,
  [SMALL_STATE(245)] = 6818,
  [SMALL_STATE(246)] = 6839,
  [SMALL_STATE(247)] = 6860,
  [SMALL_STATE(248)] = 6881,
  [SMALL_STATE(249)] = 6902,
  [SMALL_STATE(250)] = 6913,
  [SMALL_STATE(251)] = 6926,
  [SMALL_STATE(252)] = 6937,
  [SMALL_STATE(253)] = 6948,
  [SMALL_STATE(254)] = 6959,
  [SMALL_STATE(255)] = 6976,
  [SMALL_STATE(256)] = 6987,
  [SMALL_STATE(257)] = 6998,
  [SMALL_STATE(258)] = 7009,
  [SMALL_STATE(259)] = 7020,
  [SMALL_STATE(260)] = 7031,
  [SMALL_STATE(261)] = 7042,
  [SMALL_STATE(262)] = 7053,
  [SMALL_STATE(263)] = 7066,
  [SMALL_STATE(264)] = 7077,
  [SMALL_STATE(265)] = 7092,
  [SMALL_STATE(266)] = 7103,
  [SMALL_STATE(267)] = 7116,
  [SMALL_STATE(268)] = 7127,
  [SMALL_STATE(269)] = 7140,
  [SMALL_STATE(270)] = 7155,
  [SMALL_STATE(271)] = 7169,
  [SMALL_STATE(272)] = 7183,
  [SMALL_STATE(273)] = 7197,
  [SMALL_STATE(274)] = 7209,
  [SMALL_STATE(275)] = 7223,
  [SMALL_STATE(276)] = 7237,
  [SMALL_STATE(277)] = 7249,
  [SMALL_STATE(278)] = 7261,
  [SMALL_STATE(279)] = 7275,
  [SMALL_STATE(280)] = 7289,
  [SMALL_STATE(281)] = 7303,
  [SMALL_STATE(282)] = 7317,
  [SMALL_STATE(283)] = 7331,
  [SMALL_STATE(284)] = 7345,
  [SMALL_STATE(285)] = 7359,
  [SMALL_STATE(286)] = 7373,
  [SMALL_STATE(287)] = 7387,
  [SMALL_STATE(288)] = 7401,
  [SMALL_STATE(289)] = 7415,
  [SMALL_STATE(290)] = 7429,
  [SMALL_STATE(291)] = 7441,
  [SMALL_STATE(292)] = 7455,
  [SMALL_STATE(293)] = 7469,
  [SMALL_STATE(294)] = 7483,
  [SMALL_STATE(295)] = 7497,
  [SMALL_STATE(296)] = 7511,
  [SMALL_STATE(297)] = 7525,
  [SMALL_STATE(298)] = 7539,
  [SMALL_STATE(299)] = 7553,
  [SMALL_STATE(300)] = 7562,
  [SMALL_STATE(301)] = 7573,
  [SMALL_STATE(302)] = 7584,
  [SMALL_STATE(303)] = 7595,
  [SMALL_STATE(304)] = 7606,
  [SMALL_STATE(305)] = 7617,
  [SMALL_STATE(306)] = 7628,
  [SMALL_STATE(307)] = 7637,
  [SMALL_STATE(308)] = 7648,
  [SMALL_STATE(309)] = 7659,
  [SMALL_STATE(310)] = 7670,
  [SMALL_STATE(311)] = 7681,
  [SMALL_STATE(312)] = 7690,
  [SMALL_STATE(313)] = 7699,
  [SMALL_STATE(314)] = 7707,
  [SMALL_STATE(315)] = 7715,
  [SMALL_STATE(316)] = 7723,
  [SMALL_STATE(317)] = 7731,
  [SMALL_STATE(318)] = 7739,
  [SMALL_STATE(319)] = 7747,
  [SMALL_STATE(320)] = 7755,
  [SMALL_STATE(321)] = 7763,
  [SMALL_STATE(322)] = 7771,
  [SMALL_STATE(323)] = 7779,
  [SMALL_STATE(324)] = 7787,
  [SMALL_STATE(325)] = 7795,
  [SMALL_STATE(326)] = 7803,
  [SMALL_STATE(327)] = 7811,
  [SMALL_STATE(328)] = 7819,
  [SMALL_STATE(329)] = 7827,
  [SMALL_STATE(330)] = 7835,
  [SMALL_STATE(331)] = 7843,
  [SMALL_STATE(332)] = 7851,
  [SMALL_STATE(333)] = 7859,
  [SMALL_STATE(334)] = 7867,
  [SMALL_STATE(335)] = 7875,
  [SMALL_STATE(336)] = 7883,
  [SMALL_STATE(337)] = 7891,
  [SMALL_STATE(338)] = 7899,
  [SMALL_STATE(339)] = 7907,
  [SMALL_STATE(340)] = 7915,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(159),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(138),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(138),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(53),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 3, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division, 3, .production_id = 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulus, 3, .production_id = 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 3, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_of, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dereference, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dereference, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_of, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3, .production_id = 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction, 3, .production_id = 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulus, 3, .production_id = 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division, 3, .production_id = 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_definition, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_definition, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 2),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(183),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2), SHIFT_REPEAT(301),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2), SHIFT_REPEAT(183),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_namespace, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_namespace, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath_component, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath_component, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(310),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2), SHIFT_REPEAT(254),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 2),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(14),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 4),
  [770] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_size, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_humphrey_external_scanner_create(void);
void tree_sitter_humphrey_external_scanner_destroy(void *);
bool tree_sitter_humphrey_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_humphrey_external_scanner_serialize(void *, char *);
void tree_sitter_humphrey_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_humphrey(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_humphrey_external_scanner_create,
      tree_sitter_humphrey_external_scanner_destroy,
      tree_sitter_humphrey_external_scanner_scan,
      tree_sitter_humphrey_external_scanner_serialize,
      tree_sitter_humphrey_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
