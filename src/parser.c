#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 348
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
  sym_global_variable_definition = 34,
  sym_function_definition = 35,
  sym_block = 36,
  sym_statement = 37,
  sym_statement_expression = 38,
  sym_if_statement = 39,
  sym_else_statement = 40,
  sym_while_statement = 41,
  sym_local_variable_definition = 42,
  sym_variable_definition = 43,
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
  [sym_global_variable_definition] = "global_variable_definition",
  [sym_function_definition] = "function_definition",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_statement_expression] = "statement_expression",
  [sym_if_statement] = "if_statement",
  [sym_else_statement] = "else_statement",
  [sym_while_statement] = "while_statement",
  [sym_local_variable_definition] = "local_variable_definition",
  [sym_variable_definition] = "variable_definition",
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
  [sym_global_variable_definition] = sym_global_variable_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_statement_expression] = sym_statement_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_local_variable_definition] = sym_local_variable_definition,
  [sym_variable_definition] = sym_variable_definition,
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
  [sym_global_variable_definition] = {
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
  [sym_variable_definition] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 2,
  [8] = 3,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 20,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 21,
  [30] = 20,
  [31] = 31,
  [32] = 22,
  [33] = 31,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 28,
  [39] = 23,
  [40] = 26,
  [41] = 31,
  [42] = 34,
  [43] = 35,
  [44] = 22,
  [45] = 36,
  [46] = 27,
  [47] = 28,
  [48] = 21,
  [49] = 34,
  [50] = 26,
  [51] = 35,
  [52] = 36,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 59,
  [64] = 64,
  [65] = 65,
  [66] = 65,
  [67] = 58,
  [68] = 59,
  [69] = 69,
  [70] = 58,
  [71] = 59,
  [72] = 53,
  [73] = 59,
  [74] = 58,
  [75] = 65,
  [76] = 76,
  [77] = 59,
  [78] = 78,
  [79] = 79,
  [80] = 58,
  [81] = 81,
  [82] = 82,
  [83] = 65,
  [84] = 84,
  [85] = 85,
  [86] = 58,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 88,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 61,
  [98] = 62,
  [99] = 76,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 60,
  [107] = 107,
  [108] = 108,
  [109] = 91,
  [110] = 64,
  [111] = 111,
  [112] = 112,
  [113] = 89,
  [114] = 87,
  [115] = 85,
  [116] = 82,
  [117] = 57,
  [118] = 118,
  [119] = 90,
  [120] = 81,
  [121] = 79,
  [122] = 82,
  [123] = 89,
  [124] = 57,
  [125] = 90,
  [126] = 64,
  [127] = 127,
  [128] = 62,
  [129] = 60,
  [130] = 76,
  [131] = 79,
  [132] = 132,
  [133] = 81,
  [134] = 91,
  [135] = 85,
  [136] = 136,
  [137] = 87,
  [138] = 61,
  [139] = 88,
  [140] = 112,
  [141] = 111,
  [142] = 108,
  [143] = 107,
  [144] = 118,
  [145] = 96,
  [146] = 95,
  [147] = 94,
  [148] = 148,
  [149] = 93,
  [150] = 100,
  [151] = 151,
  [152] = 151,
  [153] = 101,
  [154] = 154,
  [155] = 102,
  [156] = 103,
  [157] = 104,
  [158] = 105,
  [159] = 101,
  [160] = 105,
  [161] = 161,
  [162] = 154,
  [163] = 112,
  [164] = 96,
  [165] = 111,
  [166] = 148,
  [167] = 95,
  [168] = 94,
  [169] = 93,
  [170] = 118,
  [171] = 90,
  [172] = 100,
  [173] = 173,
  [174] = 102,
  [175] = 103,
  [176] = 107,
  [177] = 108,
  [178] = 151,
  [179] = 104,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 151,
  [185] = 185,
  [186] = 186,
  [187] = 185,
  [188] = 186,
  [189] = 185,
  [190] = 186,
  [191] = 89,
  [192] = 88,
  [193] = 82,
  [194] = 81,
  [195] = 60,
  [196] = 85,
  [197] = 91,
  [198] = 61,
  [199] = 62,
  [200] = 79,
  [201] = 201,
  [202] = 64,
  [203] = 76,
  [204] = 87,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 208,
  [211] = 208,
  [212] = 208,
  [213] = 213,
  [214] = 214,
  [215] = 206,
  [216] = 207,
  [217] = 205,
  [218] = 209,
  [219] = 205,
  [220] = 220,
  [221] = 221,
  [222] = 214,
  [223] = 206,
  [224] = 207,
  [225] = 209,
  [226] = 205,
  [227] = 227,
  [228] = 220,
  [229] = 221,
  [230] = 214,
  [231] = 206,
  [232] = 207,
  [233] = 209,
  [234] = 234,
  [235] = 220,
  [236] = 220,
  [237] = 221,
  [238] = 238,
  [239] = 214,
  [240] = 206,
  [241] = 207,
  [242] = 209,
  [243] = 205,
  [244] = 220,
  [245] = 245,
  [246] = 53,
  [247] = 221,
  [248] = 221,
  [249] = 214,
  [250] = 250,
  [251] = 208,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 62,
  [258] = 258,
  [259] = 88,
  [260] = 89,
  [261] = 76,
  [262] = 91,
  [263] = 61,
  [264] = 64,
  [265] = 60,
  [266] = 266,
  [267] = 79,
  [268] = 81,
  [269] = 82,
  [270] = 85,
  [271] = 53,
  [272] = 87,
  [273] = 273,
  [274] = 274,
  [275] = 154,
  [276] = 276,
  [277] = 273,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 273,
  [282] = 280,
  [283] = 279,
  [284] = 284,
  [285] = 285,
  [286] = 273,
  [287] = 285,
  [288] = 273,
  [289] = 279,
  [290] = 290,
  [291] = 279,
  [292] = 292,
  [293] = 148,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 280,
  [298] = 298,
  [299] = 285,
  [300] = 300,
  [301] = 279,
  [302] = 302,
  [303] = 303,
  [304] = 302,
  [305] = 305,
  [306] = 302,
  [307] = 307,
  [308] = 302,
  [309] = 302,
  [310] = 310,
  [311] = 311,
  [312] = 302,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 318,
  [322] = 322,
  [323] = 318,
  [324] = 318,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 325,
  [330] = 322,
  [331] = 331,
  [332] = 332,
  [333] = 318,
  [334] = 334,
  [335] = 325,
  [336] = 322,
  [337] = 337,
  [338] = 325,
  [339] = 322,
  [340] = 318,
  [341] = 325,
  [342] = 322,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
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
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(54);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (aux_sym_filepath_component_token1_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym_number_character_set_1(lookahead)) ADVANCE(45);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'w') ADVANCE(54);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_number_character_set_1(lookahead)) ADVANCE(45);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'w') ADVANCE(54);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_number_character_set_1(lookahead)) ADVANCE(45);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      if (sym_number_character_set_1(lookahead)) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 12:
      if (sym_number_character_set_1(lookahead)) ADVANCE(46);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(13)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(69);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(14)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_while);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_bit_type);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_using);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_as);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(45);
      if (aux_sym_filepath_component_token1_character_set_5(lookahead)) ADVANCE(69);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == ';') ADVANCE(25);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(23);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(24);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(67);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'f') ADVANCE(22);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'g') ADVANCE(34);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'h') ADVANCE(57);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(66);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(59);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(65);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(50);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(53);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(48);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'r') ADVANCE(61);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(39);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(49);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(32);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(68);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'u') ADVANCE(62);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14, .external_lex_state = 1},
  [2] = {.lex_state = 2, .external_lex_state = 1},
  [3] = {.lex_state = 2, .external_lex_state = 1},
  [4] = {.lex_state = 2, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 1},
  [6] = {.lex_state = 2, .external_lex_state = 1},
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 2, .external_lex_state = 1},
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
  [53] = {.lex_state = 13, .external_lex_state = 1},
  [54] = {.lex_state = 5, .external_lex_state = 1},
  [55] = {.lex_state = 7, .external_lex_state = 1},
  [56] = {.lex_state = 7, .external_lex_state = 1},
  [57] = {.lex_state = 5, .external_lex_state = 1},
  [58] = {.lex_state = 7, .external_lex_state = 1},
  [59] = {.lex_state = 7, .external_lex_state = 1},
  [60] = {.lex_state = 5, .external_lex_state = 1},
  [61] = {.lex_state = 5, .external_lex_state = 1},
  [62] = {.lex_state = 5, .external_lex_state = 1},
  [63] = {.lex_state = 7, .external_lex_state = 1},
  [64] = {.lex_state = 5, .external_lex_state = 1},
  [65] = {.lex_state = 7, .external_lex_state = 1},
  [66] = {.lex_state = 7, .external_lex_state = 1},
  [67] = {.lex_state = 7, .external_lex_state = 1},
  [68] = {.lex_state = 7, .external_lex_state = 1},
  [69] = {.lex_state = 5, .external_lex_state = 1},
  [70] = {.lex_state = 7, .external_lex_state = 1},
  [71] = {.lex_state = 7, .external_lex_state = 1},
  [72] = {.lex_state = 6, .external_lex_state = 1},
  [73] = {.lex_state = 7, .external_lex_state = 1},
  [74] = {.lex_state = 7, .external_lex_state = 1},
  [75] = {.lex_state = 7, .external_lex_state = 1},
  [76] = {.lex_state = 5, .external_lex_state = 1},
  [77] = {.lex_state = 7, .external_lex_state = 1},
  [78] = {.lex_state = 7, .external_lex_state = 1},
  [79] = {.lex_state = 5, .external_lex_state = 1},
  [80] = {.lex_state = 7, .external_lex_state = 1},
  [81] = {.lex_state = 5, .external_lex_state = 1},
  [82] = {.lex_state = 5, .external_lex_state = 1},
  [83] = {.lex_state = 7, .external_lex_state = 1},
  [84] = {.lex_state = 7, .external_lex_state = 1},
  [85] = {.lex_state = 5, .external_lex_state = 1},
  [86] = {.lex_state = 7, .external_lex_state = 1},
  [87] = {.lex_state = 5, .external_lex_state = 1},
  [88] = {.lex_state = 5, .external_lex_state = 1},
  [89] = {.lex_state = 5, .external_lex_state = 1},
  [90] = {.lex_state = 5, .external_lex_state = 1},
  [91] = {.lex_state = 5, .external_lex_state = 1},
  [92] = {.lex_state = 13, .external_lex_state = 1},
  [93] = {.lex_state = 5, .external_lex_state = 1},
  [94] = {.lex_state = 5, .external_lex_state = 1},
  [95] = {.lex_state = 5, .external_lex_state = 1},
  [96] = {.lex_state = 5, .external_lex_state = 1},
  [97] = {.lex_state = 13, .external_lex_state = 1},
  [98] = {.lex_state = 13, .external_lex_state = 1},
  [99] = {.lex_state = 13, .external_lex_state = 1},
  [100] = {.lex_state = 5, .external_lex_state = 1},
  [101] = {.lex_state = 5, .external_lex_state = 1},
  [102] = {.lex_state = 5, .external_lex_state = 1},
  [103] = {.lex_state = 5, .external_lex_state = 1},
  [104] = {.lex_state = 5, .external_lex_state = 1},
  [105] = {.lex_state = 5, .external_lex_state = 1},
  [106] = {.lex_state = 13, .external_lex_state = 1},
  [107] = {.lex_state = 5, .external_lex_state = 1},
  [108] = {.lex_state = 5, .external_lex_state = 1},
  [109] = {.lex_state = 13, .external_lex_state = 1},
  [110] = {.lex_state = 13, .external_lex_state = 1},
  [111] = {.lex_state = 5, .external_lex_state = 1},
  [112] = {.lex_state = 5, .external_lex_state = 1},
  [113] = {.lex_state = 13, .external_lex_state = 1},
  [114] = {.lex_state = 13, .external_lex_state = 1},
  [115] = {.lex_state = 13, .external_lex_state = 1},
  [116] = {.lex_state = 13, .external_lex_state = 1},
  [117] = {.lex_state = 13, .external_lex_state = 1},
  [118] = {.lex_state = 5, .external_lex_state = 1},
  [119] = {.lex_state = 13, .external_lex_state = 1},
  [120] = {.lex_state = 13, .external_lex_state = 1},
  [121] = {.lex_state = 13, .external_lex_state = 1},
  [122] = {.lex_state = 6, .external_lex_state = 1},
  [123] = {.lex_state = 6, .external_lex_state = 1},
  [124] = {.lex_state = 6, .external_lex_state = 1},
  [125] = {.lex_state = 6, .external_lex_state = 1},
  [126] = {.lex_state = 6, .external_lex_state = 1},
  [127] = {.lex_state = 14, .external_lex_state = 1},
  [128] = {.lex_state = 6, .external_lex_state = 1},
  [129] = {.lex_state = 6, .external_lex_state = 1},
  [130] = {.lex_state = 6, .external_lex_state = 1},
  [131] = {.lex_state = 6, .external_lex_state = 1},
  [132] = {.lex_state = 14, .external_lex_state = 1},
  [133] = {.lex_state = 6, .external_lex_state = 1},
  [134] = {.lex_state = 6, .external_lex_state = 1},
  [135] = {.lex_state = 6, .external_lex_state = 1},
  [136] = {.lex_state = 3, .external_lex_state = 1},
  [137] = {.lex_state = 6, .external_lex_state = 1},
  [138] = {.lex_state = 6, .external_lex_state = 1},
  [139] = {.lex_state = 6, .external_lex_state = 1},
  [140] = {.lex_state = 13, .external_lex_state = 1},
  [141] = {.lex_state = 13, .external_lex_state = 1},
  [142] = {.lex_state = 13, .external_lex_state = 1},
  [143] = {.lex_state = 13, .external_lex_state = 1},
  [144] = {.lex_state = 13, .external_lex_state = 1},
  [145] = {.lex_state = 13, .external_lex_state = 1},
  [146] = {.lex_state = 13, .external_lex_state = 1},
  [147] = {.lex_state = 13, .external_lex_state = 1},
  [148] = {.lex_state = 3, .external_lex_state = 1},
  [149] = {.lex_state = 13, .external_lex_state = 1},
  [150] = {.lex_state = 13, .external_lex_state = 1},
  [151] = {.lex_state = 13, .external_lex_state = 1},
  [152] = {.lex_state = 5, .external_lex_state = 1},
  [153] = {.lex_state = 13, .external_lex_state = 1},
  [154] = {.lex_state = 3, .external_lex_state = 1},
  [155] = {.lex_state = 13, .external_lex_state = 1},
  [156] = {.lex_state = 13, .external_lex_state = 1},
  [157] = {.lex_state = 13, .external_lex_state = 1},
  [158] = {.lex_state = 13, .external_lex_state = 1},
  [159] = {.lex_state = 6, .external_lex_state = 1},
  [160] = {.lex_state = 6, .external_lex_state = 1},
  [161] = {.lex_state = 2, .external_lex_state = 1},
  [162] = {.lex_state = 2, .external_lex_state = 1},
  [163] = {.lex_state = 6, .external_lex_state = 1},
  [164] = {.lex_state = 6, .external_lex_state = 1},
  [165] = {.lex_state = 6, .external_lex_state = 1},
  [166] = {.lex_state = 2, .external_lex_state = 1},
  [167] = {.lex_state = 6, .external_lex_state = 1},
  [168] = {.lex_state = 6, .external_lex_state = 1},
  [169] = {.lex_state = 6, .external_lex_state = 1},
  [170] = {.lex_state = 6, .external_lex_state = 1},
  [171] = {.lex_state = 5, .external_lex_state = 1},
  [172] = {.lex_state = 6, .external_lex_state = 1},
  [173] = {.lex_state = 2, .external_lex_state = 1},
  [174] = {.lex_state = 6, .external_lex_state = 1},
  [175] = {.lex_state = 6, .external_lex_state = 1},
  [176] = {.lex_state = 6, .external_lex_state = 1},
  [177] = {.lex_state = 6, .external_lex_state = 1},
  [178] = {.lex_state = 6, .external_lex_state = 1},
  [179] = {.lex_state = 6, .external_lex_state = 1},
  [180] = {.lex_state = 2, .external_lex_state = 1},
  [181] = {.lex_state = 2, .external_lex_state = 1},
  [182] = {.lex_state = 2, .external_lex_state = 1},
  [183] = {.lex_state = 2, .external_lex_state = 1},
  [184] = {.lex_state = 5, .external_lex_state = 1},
  [185] = {.lex_state = 5, .external_lex_state = 1},
  [186] = {.lex_state = 5, .external_lex_state = 1},
  [187] = {.lex_state = 5, .external_lex_state = 1},
  [188] = {.lex_state = 5, .external_lex_state = 1},
  [189] = {.lex_state = 5, .external_lex_state = 1},
  [190] = {.lex_state = 5, .external_lex_state = 1},
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
  [203] = {.lex_state = 14, .external_lex_state = 1},
  [204] = {.lex_state = 14, .external_lex_state = 1},
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
  [227] = {.lex_state = 14, .external_lex_state = 1},
  [228] = {.lex_state = 8, .external_lex_state = 1},
  [229] = {.lex_state = 8, .external_lex_state = 1},
  [230] = {.lex_state = 8, .external_lex_state = 1},
  [231] = {.lex_state = 8, .external_lex_state = 1},
  [232] = {.lex_state = 8, .external_lex_state = 1},
  [233] = {.lex_state = 8, .external_lex_state = 1},
  [234] = {.lex_state = 14, .external_lex_state = 1},
  [235] = {.lex_state = 8, .external_lex_state = 1},
  [236] = {.lex_state = 8, .external_lex_state = 1},
  [237] = {.lex_state = 8, .external_lex_state = 1},
  [238] = {.lex_state = 14, .external_lex_state = 1},
  [239] = {.lex_state = 8, .external_lex_state = 1},
  [240] = {.lex_state = 8, .external_lex_state = 1},
  [241] = {.lex_state = 8, .external_lex_state = 1},
  [242] = {.lex_state = 8, .external_lex_state = 1},
  [243] = {.lex_state = 8, .external_lex_state = 1},
  [244] = {.lex_state = 8, .external_lex_state = 1},
  [245] = {.lex_state = 14, .external_lex_state = 1},
  [246] = {.lex_state = 14, .external_lex_state = 1},
  [247] = {.lex_state = 8, .external_lex_state = 1},
  [248] = {.lex_state = 8, .external_lex_state = 1},
  [249] = {.lex_state = 8, .external_lex_state = 1},
  [250] = {.lex_state = 8, .external_lex_state = 1},
  [251] = {.lex_state = 8, .external_lex_state = 1},
  [252] = {.lex_state = 14, .external_lex_state = 1},
  [253] = {.lex_state = 8, .external_lex_state = 1},
  [254] = {.lex_state = 14, .external_lex_state = 1},
  [255] = {.lex_state = 14, .external_lex_state = 1},
  [256] = {.lex_state = 14, .external_lex_state = 1},
  [257] = {.lex_state = 8, .external_lex_state = 1},
  [258] = {.lex_state = 8, .external_lex_state = 1},
  [259] = {.lex_state = 8, .external_lex_state = 1},
  [260] = {.lex_state = 8, .external_lex_state = 1},
  [261] = {.lex_state = 8, .external_lex_state = 1},
  [262] = {.lex_state = 8, .external_lex_state = 1},
  [263] = {.lex_state = 8, .external_lex_state = 1},
  [264] = {.lex_state = 8, .external_lex_state = 1},
  [265] = {.lex_state = 8, .external_lex_state = 1},
  [266] = {.lex_state = 14, .external_lex_state = 1},
  [267] = {.lex_state = 8, .external_lex_state = 1},
  [268] = {.lex_state = 8, .external_lex_state = 1},
  [269] = {.lex_state = 8, .external_lex_state = 1},
  [270] = {.lex_state = 8, .external_lex_state = 1},
  [271] = {.lex_state = 8, .external_lex_state = 1},
  [272] = {.lex_state = 8, .external_lex_state = 1},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 8, .external_lex_state = 1},
  [275] = {.lex_state = 14, .external_lex_state = 1},
  [276] = {.lex_state = 0, .external_lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 1},
  [278] = {.lex_state = 14, .external_lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 1},
  [280] = {.lex_state = 0, .external_lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 1},
  [282] = {.lex_state = 0, .external_lex_state = 1},
  [283] = {.lex_state = 0, .external_lex_state = 1},
  [284] = {.lex_state = 0, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 2, .external_lex_state = 1},
  [291] = {.lex_state = 0, .external_lex_state = 1},
  [292] = {.lex_state = 14, .external_lex_state = 1},
  [293] = {.lex_state = 14, .external_lex_state = 1},
  [294] = {.lex_state = 14, .external_lex_state = 1},
  [295] = {.lex_state = 2, .external_lex_state = 1},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 2, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 0, .external_lex_state = 1},
  [301] = {.lex_state = 0, .external_lex_state = 1},
  [302] = {.lex_state = 9, .external_lex_state = 1},
  [303] = {.lex_state = 0, .external_lex_state = 1},
  [304] = {.lex_state = 9, .external_lex_state = 1},
  [305] = {.lex_state = 2, .external_lex_state = 1},
  [306] = {.lex_state = 9, .external_lex_state = 1},
  [307] = {.lex_state = 0, .external_lex_state = 1},
  [308] = {.lex_state = 9, .external_lex_state = 1},
  [309] = {.lex_state = 9, .external_lex_state = 1},
  [310] = {.lex_state = 0, .external_lex_state = 1},
  [311] = {.lex_state = 0, .external_lex_state = 1},
  [312] = {.lex_state = 9, .external_lex_state = 1},
  [313] = {.lex_state = 8, .external_lex_state = 1},
  [314] = {.lex_state = 8, .external_lex_state = 1},
  [315] = {.lex_state = 8, .external_lex_state = 1},
  [316] = {.lex_state = 0, .external_lex_state = 1},
  [317] = {.lex_state = 0, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 2, .external_lex_state = 1},
  [320] = {.lex_state = 0, .external_lex_state = 1},
  [321] = {.lex_state = 0, .external_lex_state = 1},
  [322] = {.lex_state = 0, .external_lex_state = 1},
  [323] = {.lex_state = 0, .external_lex_state = 1},
  [324] = {.lex_state = 0, .external_lex_state = 1},
  [325] = {.lex_state = 0, .external_lex_state = 1},
  [326] = {.lex_state = 2, .external_lex_state = 1},
  [327] = {.lex_state = 2, .external_lex_state = 1},
  [328] = {.lex_state = 0, .external_lex_state = 1},
  [329] = {.lex_state = 0, .external_lex_state = 1},
  [330] = {.lex_state = 0, .external_lex_state = 1},
  [331] = {.lex_state = 0, .external_lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 1},
  [333] = {.lex_state = 0, .external_lex_state = 1},
  [334] = {.lex_state = 0, .external_lex_state = 1},
  [335] = {.lex_state = 0, .external_lex_state = 1},
  [336] = {.lex_state = 0, .external_lex_state = 1},
  [337] = {.lex_state = 0, .external_lex_state = 1},
  [338] = {.lex_state = 0, .external_lex_state = 1},
  [339] = {.lex_state = 0, .external_lex_state = 1},
  [340] = {.lex_state = 0, .external_lex_state = 1},
  [341] = {.lex_state = 0, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 0, .external_lex_state = 1},
  [344] = {.lex_state = 2, .external_lex_state = 1},
  [345] = {.lex_state = 0, .external_lex_state = 1},
  [346] = {.lex_state = 0, .external_lex_state = 1},
  [347] = {.lex_state = 2, .external_lex_state = 1},
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
    [sym_source_file] = STATE(334),
    [sym__global_definition] = STATE(127),
    [sym_global_variable_definition] = STATE(127),
    [sym_function_definition] = STATE(127),
    [sym_variable_definition] = STATE(278),
    [sym_type_definition] = STATE(254),
    [sym_identifier_list] = STATE(326),
    [sym_using_statement] = STATE(127),
    [sym_identifier] = STATE(295),
    [aux_sym_source_file_repeat1] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym_filepath_component_token1] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    STATE(69), 1,
      sym_identifier,
    STATE(328), 1,
      sym_variable_definition,
    STATE(332), 1,
      sym_expression,
    STATE(344), 1,
      sym_identifier_list,
    STATE(346), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(8), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(183), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
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
  [76] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(328), 1,
      sym_variable_definition,
    STATE(332), 1,
      sym_expression,
    STATE(344), 1,
      sym_identifier_list,
    STATE(346), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(183), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
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
  [152] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(328), 1,
      sym_variable_definition,
    STATE(332), 1,
      sym_expression,
    STATE(344), 1,
      sym_identifier_list,
    STATE(346), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(183), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
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
  [228] = 19,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(40), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_return_keyword,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_AMP,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(58), 1,
      sym_string,
    ACTIONS(61), 1,
      aux_sym_filepath_component_token1,
    STATE(69), 1,
      sym_identifier,
    STATE(328), 1,
      sym_variable_definition,
    STATE(332), 1,
      sym_expression,
    STATE(344), 1,
      sym_identifier_list,
    STATE(346), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(183), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
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
  [304] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(328), 1,
      sym_variable_definition,
    STATE(332), 1,
      sym_expression,
    STATE(344), 1,
      sym_identifier_list,
    STATE(346), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(183), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
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
  [380] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(328), 1,
      sym_variable_definition,
    STATE(332), 1,
      sym_expression,
    STATE(344), 1,
      sym_identifier_list,
    STATE(346), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(183), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
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
  [456] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(328), 1,
      sym_variable_definition,
    STATE(332), 1,
      sym_expression,
    STATE(344), 1,
      sym_identifier_list,
    STATE(346), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(183), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
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
  [532] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_identifier,
    STATE(158), 1,
      sym_function_call_args,
    STATE(280), 1,
      sym_expression,
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
  [583] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_identifier,
    STATE(160), 1,
      sym_function_call_args,
    STATE(297), 1,
      sym_expression,
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
  [634] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_identifier,
    STATE(105), 1,
      sym_function_call_args,
    STATE(282), 1,
      sym_expression,
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
  [685] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    STATE(57), 1,
      sym_identifier,
    STATE(316), 1,
      sym_expression,
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
  [730] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(76), 1,
      sym_number,
    ACTIONS(78), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    STATE(310), 1,
      sym_expression,
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
  [775] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(76), 1,
      sym_number,
    ACTIONS(78), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    STATE(307), 1,
      sym_expression,
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
  [820] = 10,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      sym_number,
    ACTIONS(88), 1,
      sym_string,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    STATE(124), 1,
      sym_identifier,
    STATE(313), 1,
      sym_expression,
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
  [865] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    STATE(57), 1,
      sym_identifier,
    STATE(255), 1,
      sym_expression,
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
  [910] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      sym_number,
    ACTIONS(100), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    STATE(266), 1,
      sym_expression,
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
  [955] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      sym_number,
    ACTIONS(100), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    STATE(255), 1,
      sym_expression,
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
  [1000] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      sym_string,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    STATE(57), 1,
      sym_identifier,
    STATE(266), 1,
      sym_expression,
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
  [1045] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(102), 1,
      sym_number,
    ACTIONS(104), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(107), 14,
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
  [1087] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(108), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(103), 14,
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
  [1129] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(110), 1,
      sym_number,
    ACTIONS(112), 1,
      sym_string,
    STATE(57), 1,
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
  [1171] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(142), 14,
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
  [1213] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(120), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(143), 14,
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
  [1255] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(122), 1,
      sym_number,
    ACTIONS(124), 1,
      sym_string,
    STATE(57), 1,
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
  [1297] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(126), 1,
      sym_number,
    ACTIONS(128), 1,
      sym_string,
    STATE(57), 1,
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
  [1339] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(130), 1,
      sym_number,
    ACTIONS(132), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(159), 14,
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
  [1381] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(136), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(174), 14,
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
  [1423] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(140), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
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
  [1465] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(142), 1,
      sym_number,
    ACTIONS(144), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(176), 14,
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
  [1507] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(146), 1,
      sym_number,
    ACTIONS(148), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(167), 14,
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
  [1549] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(150), 1,
      sym_number,
    ACTIONS(152), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
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
  [1591] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(156), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(95), 14,
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
  [1633] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(160), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(94), 14,
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
  [1675] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(162), 1,
      sym_number,
    ACTIONS(164), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(93), 14,
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
  [1717] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(166), 1,
      sym_number,
    ACTIONS(168), 1,
      sym_string,
    STATE(57), 1,
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
  [1759] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(172), 1,
      sym_string,
    STATE(57), 1,
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
  [1801] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(174), 1,
      sym_number,
    ACTIONS(176), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(102), 14,
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
  [1843] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(178), 1,
      sym_number,
    ACTIONS(180), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(177), 14,
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
  [1885] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(182), 1,
      sym_number,
    ACTIONS(184), 1,
      sym_string,
    STATE(57), 1,
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
  [1927] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      sym_string,
    STATE(117), 1,
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
  [1969] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      sym_number,
    ACTIONS(192), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(147), 14,
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
  [2011] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(194), 1,
      sym_number,
    ACTIONS(196), 1,
      sym_string,
    STATE(117), 1,
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
  [2053] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(198), 1,
      sym_number,
    ACTIONS(200), 1,
      sym_string,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(190), 14,
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
  [2095] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(150), 14,
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
  [2137] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(208), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(153), 14,
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
  [2179] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(210), 1,
      sym_number,
    ACTIONS(212), 1,
      sym_string,
    STATE(117), 1,
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
  [2221] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_AMP,
    ACTIONS(214), 1,
      sym_number,
    ACTIONS(216), 1,
      sym_string,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(156), 14,
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
  [2263] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(218), 1,
      sym_number,
    ACTIONS(220), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 14,
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
  [2305] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(222), 1,
      sym_number,
    ACTIONS(224), 1,
      sym_string,
    STATE(57), 1,
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
  [2347] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(226), 1,
      sym_number,
    ACTIONS(228), 1,
      sym_string,
    STATE(124), 1,
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
  [2389] = 9,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(84), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(230), 1,
      sym_number,
    ACTIONS(232), 1,
      sym_string,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(172), 14,
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
  [2431] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(234), 15,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2458] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(234), 17,
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
  [2482] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 1,
      anon_sym_EQ,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_bit_type,
    ACTIONS(248), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(202), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2520] = 11,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_bit_type,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(256), 1,
      aux_sym_filepath_component_token1,
    STATE(201), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(234), 2,
      sym_function_type,
      sym_identifier,
    STATE(202), 5,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [2560] = 4,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 13,
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
  [2586] = 9,
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
    ACTIONS(274), 1,
      aux_sym_filepath_component_token1,
    STATE(272), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(264), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2621] = 9,
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
    ACTIONS(274), 1,
      aux_sym_filepath_component_token1,
    STATE(263), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(264), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2656] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(276), 14,
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
  [2677] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(278), 14,
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
  [2698] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(280), 14,
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
  [2719] = 9,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      sym_bit_type,
    ACTIONS(290), 1,
      anon_sym_STAR,
    STATE(61), 1,
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
  [2754] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 14,
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
  [2775] = 9,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      sym_bit_type,
    ACTIONS(302), 1,
      anon_sym_STAR,
    STATE(125), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(126), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2810] = 9,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      sym_bit_type,
    ACTIONS(290), 1,
      anon_sym_STAR,
    STATE(171), 1,
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
  [2845] = 9,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      sym_bit_type,
    ACTIONS(302), 1,
      anon_sym_STAR,
    STATE(137), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(126), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2880] = 9,
    ACTIONS(90), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      sym_bit_type,
    ACTIONS(302), 1,
      anon_sym_STAR,
    STATE(138), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(126), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2915] = 7,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2946] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_bit_type,
    ACTIONS(248), 1,
      anon_sym_STAR,
    STATE(204), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(202), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2981] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_bit_type,
    ACTIONS(248), 1,
      anon_sym_STAR,
    STATE(198), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(202), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3016] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(234), 12,
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
  [3039] = 9,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_bit_type,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(256), 1,
      aux_sym_filepath_component_token1,
    STATE(198), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(202), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3074] = 9,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      sym_bit_type,
    ACTIONS(290), 1,
      anon_sym_STAR,
    STATE(87), 1,
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
  [3109] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 1,
      sym_bit_type,
    ACTIONS(316), 1,
      anon_sym_STAR,
    STATE(119), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(110), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3144] = 2,
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
  [3165] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 1,
      sym_bit_type,
    ACTIONS(316), 1,
      anon_sym_STAR,
    STATE(97), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(110), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3200] = 9,
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
    ACTIONS(274), 1,
      aux_sym_filepath_component_token1,
    STATE(258), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(264), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3235] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 14,
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
  [3256] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 1,
      sym_bit_type,
    ACTIONS(316), 1,
      anon_sym_STAR,
    STATE(114), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(110), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3291] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(322), 14,
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
  [3312] = 2,
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
  [3333] = 9,
    ACTIONS(29), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      sym_bit_type,
    ACTIONS(290), 1,
      anon_sym_STAR,
    STATE(90), 1,
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
  [3368] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_bit_type,
    ACTIONS(248), 1,
      anon_sym_STAR,
    STATE(201), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(202), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3403] = 2,
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
  [3424] = 9,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_bit_type,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(256), 1,
      aux_sym_filepath_component_token1,
    STATE(204), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(202), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3459] = 2,
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
  [3480] = 2,
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
  [3501] = 2,
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
  [3522] = 4,
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
  [3547] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 14,
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
  [3568] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 3,
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
  [3590] = 2,
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
  [3610] = 2,
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
  [3630] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 13,
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
  [3650] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 13,
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
  [3670] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(278), 10,
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
  [3692] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(280), 10,
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
  [3714] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 3,
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
  [3736] = 5,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(358), 10,
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
  [3762] = 5,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(366), 10,
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
  [3788] = 2,
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
  [3808] = 2,
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
  [3828] = 2,
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
  [3848] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(374), 13,
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
  [3868] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(276), 10,
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
  [3890] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(378), 13,
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
  [3910] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(380), 13,
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
  [3930] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(340), 10,
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
  [3952] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(292), 10,
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
  [3974] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(386), 13,
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
  [3994] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 13,
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
  [4014] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 3,
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
  [4036] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 3,
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
  [4058] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 3,
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
  [4080] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 3,
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
  [4102] = 5,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4128] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(404), 13,
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
  [4148] = 5,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 3,
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
  [4174] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(322), 10,
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
  [4196] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(320), 10,
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
  [4218] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 2,
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
  [4239] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 2,
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
  [4260] = 5,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(258), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4285] = 5,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 2,
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
  [4310] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(292), 10,
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
  [4331] = 9,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    STATE(254), 1,
      sym_type_definition,
    STATE(278), 1,
      sym_variable_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(326), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(132), 5,
      sym__global_definition,
      sym_global_variable_definition,
      sym_function_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [4364] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(280), 10,
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
  [4385] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(276), 10,
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
  [4406] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 2,
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
  [4427] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(320), 10,
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
  [4448] = 9,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 1,
      anon_sym_using,
    ACTIONS(431), 1,
      aux_sym_filepath_component_token1,
    STATE(254), 1,
      sym_type_definition,
    STATE(278), 1,
      sym_variable_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(326), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(132), 5,
      sym__global_definition,
      sym_global_variable_definition,
      sym_function_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [4481] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(322), 10,
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
  [4502] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(340), 10,
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
  [4523] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 2,
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
  [4544] = 5,
    ACTIONS(438), 1,
      anon_sym_else,
    STATE(181), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(436), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(434), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [4569] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 2,
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
  [4590] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(278), 10,
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
  [4611] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 2,
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
  [4632] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(440), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4652] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(386), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4672] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4692] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(378), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4712] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(448), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4732] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4752] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(348), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4772] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(454), 3,
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
  [4792] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(458), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(456), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [4812] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(460), 3,
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
  [4832] = 6,
    ACTIONS(462), 1,
      anon_sym_STAR,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(468), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4858] = 11,
    ACTIONS(462), 1,
      anon_sym_STAR,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(468), 1,
      anon_sym_PERCENT,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_DOT,
    ACTIONS(478), 1,
      anon_sym_as,
    ACTIONS(480), 1,
      anon_sym_PLUS,
    ACTIONS(482), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [4894] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_as,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4928] = 6,
    ACTIONS(462), 1,
      anon_sym_STAR,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(468), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(494), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4954] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(498), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(496), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [4974] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(500), 3,
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
  [4994] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(502), 3,
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
  [5014] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(504), 3,
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
  [5034] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(506), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(374), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5054] = 6,
    ACTIONS(508), 1,
      anon_sym_STAR,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(366), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5079] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(374), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5098] = 3,
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
  [5117] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(498), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(496), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5136] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(388), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5155] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(350), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5174] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(386), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5193] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(456), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5212] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(348), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5231] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(454), 2,
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
  [5250] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(460), 2,
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
  [5269] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(404), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5288] = 3,
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
  [5307] = 6,
    ACTIONS(508), 1,
      anon_sym_STAR,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(358), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5332] = 3,
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
  [5351] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(500), 2,
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
  [5370] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(502), 2,
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
  [5389] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(378), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5408] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(380), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5427] = 11,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(508), 1,
      anon_sym_STAR,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(512), 1,
      anon_sym_PERCENT,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(524), 1,
      anon_sym_DOT,
    ACTIONS(526), 1,
      anon_sym_as,
    ACTIONS(528), 1,
      anon_sym_PLUS,
    ACTIONS(530), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5462] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(504), 2,
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
  [5481] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(534), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(532), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5500] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(538), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(536), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5519] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(542), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(540), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5538] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(546), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(544), 6,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
  [5557] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(548), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5589] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_as,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5621] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_as,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5653] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_as,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5685] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_as,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5717] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_as,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5749] = 10,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(364), 1,
      anon_sym_PERCENT,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(488), 1,
      anon_sym_as,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5781] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(332), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5798] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(330), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5815] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5832] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5849] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5866] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5883] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5900] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(278), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5917] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5934] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5951] = 5,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(562), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5972] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(292), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [5989] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(318), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [6006] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(328), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [6023] = 6,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(232), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6044] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(222), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6065] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(250), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6086] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    STATE(341), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6109] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_output_parameters,
    STATE(277), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6132] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    STATE(338), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6155] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    STATE(335), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6178] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    STATE(329), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6201] = 6,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      aux_sym_filepath_component_token1,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6222] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6243] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(214), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6264] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(250), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6285] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6306] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_output_parameters,
    STATE(281), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6329] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(216), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6350] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6371] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(220), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6392] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6413] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6434] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(250), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6455] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      sym_output_parameters,
    STATE(288), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6478] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(224), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6499] = 5,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    ACTIONS(617), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(227), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6518] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6539] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(228), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6560] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6581] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(230), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6602] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(250), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6623] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_output_parameters,
    STATE(273), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6646] = 4,
    ACTIONS(632), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [6663] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6684] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6705] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(236), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6726] = 5,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(642), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(245), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6745] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6766] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(239), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6787] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(250), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6808] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_output_parameters,
    STATE(286), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(327), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6831] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(241), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6852] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6873] = 5,
    ACTIONS(644), 1,
      anon_sym_COLON_COLON,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(227), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6892] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [6907] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(244), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6928] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(235), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6949] = 6,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_identifier,
    STATE(319), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6970] = 6,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(670), 1,
      aux_sym_filepath_component_token1,
    STATE(295), 1,
      sym_identifier,
    STATE(347), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(250), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6991] = 7,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_type_definition,
    STATE(295), 1,
      sym_identifier,
    STATE(325), 1,
      sym_input_parameters,
    STATE(327), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7014] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
    ACTIONS(675), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7027] = 5,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    STATE(295), 1,
      sym_identifier,
    STATE(311), 1,
      sym_type_definition,
    STATE(327), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7044] = 4,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
    ACTIONS(679), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7059] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(685), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7072] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
    ACTIONS(689), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7085] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7096] = 4,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    ACTIONS(695), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(693), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [7111] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7122] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7133] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7144] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7155] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7166] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7177] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7188] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(699), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7201] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7212] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7223] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7234] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7245] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7256] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7267] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7281] = 4,
    ACTIONS(705), 1,
      aux_sym_filepath_component_token1,
    STATE(238), 1,
      sym_filepath_component,
    STATE(294), 1,
      sym_namespace,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7295] = 3,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7307] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7321] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7335] = 3,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(713), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7347] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7361] = 4,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7375] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7389] = 4,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7403] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7417] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7431] = 4,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7445] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7459] = 4,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7473] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7487] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7501] = 4,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_COLON,
    STATE(298), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7515] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7529] = 3,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7541] = 3,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7553] = 3,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7565] = 4,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7579] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7593] = 4,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7607] = 4,
    ACTIONS(758), 1,
      anon_sym_COLON,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7621] = 4,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7635] = 4,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7649] = 4,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7663] = 3,
    ACTIONS(772), 1,
      sym_number,
    STATE(321), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7674] = 3,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7685] = 3,
    ACTIONS(772), 1,
      sym_number,
    STATE(318), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7696] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [7705] = 3,
    ACTIONS(772), 1,
      sym_number,
    STATE(333), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7716] = 3,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7727] = 3,
    ACTIONS(772), 1,
      sym_number,
    STATE(340), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7738] = 3,
    ACTIONS(772), 1,
      sym_number,
    STATE(324), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7749] = 3,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7760] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7769] = 3,
    ACTIONS(772), 1,
      sym_number,
    STATE(323), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7780] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(778), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [7789] = 3,
    ACTIONS(705), 1,
      aux_sym_filepath_component_token1,
    STATE(256), 1,
      sym_filepath_component,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7800] = 3,
    ACTIONS(572), 1,
      aux_sym_filepath_component_token1,
    STATE(305), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7811] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7820] = 3,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    STATE(292), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7831] = 2,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7839] = 2,
    ACTIONS(784), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7847] = 2,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7855] = 2,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7863] = 2,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7871] = 2,
    ACTIONS(792), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7879] = 2,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7887] = 2,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7895] = 2,
    ACTIONS(798), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7903] = 2,
    ACTIONS(800), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7911] = 2,
    ACTIONS(802), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7919] = 2,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7927] = 2,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7935] = 2,
    ACTIONS(808), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7943] = 2,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7951] = 2,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7959] = 2,
    ACTIONS(814), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7967] = 2,
    ACTIONS(816), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7975] = 2,
    ACTIONS(818), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7983] = 2,
    ACTIONS(820), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7991] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7999] = 2,
    ACTIONS(824), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8007] = 2,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8015] = 2,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8023] = 2,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8031] = 2,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8039] = 2,
    ACTIONS(834), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8047] = 2,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8055] = 2,
    ACTIONS(838), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8063] = 2,
    ACTIONS(840), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 228,
  [SMALL_STATE(6)] = 304,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 456,
  [SMALL_STATE(9)] = 532,
  [SMALL_STATE(10)] = 583,
  [SMALL_STATE(11)] = 634,
  [SMALL_STATE(12)] = 685,
  [SMALL_STATE(13)] = 730,
  [SMALL_STATE(14)] = 775,
  [SMALL_STATE(15)] = 820,
  [SMALL_STATE(16)] = 865,
  [SMALL_STATE(17)] = 910,
  [SMALL_STATE(18)] = 955,
  [SMALL_STATE(19)] = 1000,
  [SMALL_STATE(20)] = 1045,
  [SMALL_STATE(21)] = 1087,
  [SMALL_STATE(22)] = 1129,
  [SMALL_STATE(23)] = 1171,
  [SMALL_STATE(24)] = 1213,
  [SMALL_STATE(25)] = 1255,
  [SMALL_STATE(26)] = 1297,
  [SMALL_STATE(27)] = 1339,
  [SMALL_STATE(28)] = 1381,
  [SMALL_STATE(29)] = 1423,
  [SMALL_STATE(30)] = 1465,
  [SMALL_STATE(31)] = 1507,
  [SMALL_STATE(32)] = 1549,
  [SMALL_STATE(33)] = 1591,
  [SMALL_STATE(34)] = 1633,
  [SMALL_STATE(35)] = 1675,
  [SMALL_STATE(36)] = 1717,
  [SMALL_STATE(37)] = 1759,
  [SMALL_STATE(38)] = 1801,
  [SMALL_STATE(39)] = 1843,
  [SMALL_STATE(40)] = 1885,
  [SMALL_STATE(41)] = 1927,
  [SMALL_STATE(42)] = 1969,
  [SMALL_STATE(43)] = 2011,
  [SMALL_STATE(44)] = 2053,
  [SMALL_STATE(45)] = 2095,
  [SMALL_STATE(46)] = 2137,
  [SMALL_STATE(47)] = 2179,
  [SMALL_STATE(48)] = 2221,
  [SMALL_STATE(49)] = 2263,
  [SMALL_STATE(50)] = 2305,
  [SMALL_STATE(51)] = 2347,
  [SMALL_STATE(52)] = 2389,
  [SMALL_STATE(53)] = 2431,
  [SMALL_STATE(54)] = 2458,
  [SMALL_STATE(55)] = 2482,
  [SMALL_STATE(56)] = 2520,
  [SMALL_STATE(57)] = 2560,
  [SMALL_STATE(58)] = 2586,
  [SMALL_STATE(59)] = 2621,
  [SMALL_STATE(60)] = 2656,
  [SMALL_STATE(61)] = 2677,
  [SMALL_STATE(62)] = 2698,
  [SMALL_STATE(63)] = 2719,
  [SMALL_STATE(64)] = 2754,
  [SMALL_STATE(65)] = 2775,
  [SMALL_STATE(66)] = 2810,
  [SMALL_STATE(67)] = 2845,
  [SMALL_STATE(68)] = 2880,
  [SMALL_STATE(69)] = 2915,
  [SMALL_STATE(70)] = 2946,
  [SMALL_STATE(71)] = 2981,
  [SMALL_STATE(72)] = 3016,
  [SMALL_STATE(73)] = 3039,
  [SMALL_STATE(74)] = 3074,
  [SMALL_STATE(75)] = 3109,
  [SMALL_STATE(76)] = 3144,
  [SMALL_STATE(77)] = 3165,
  [SMALL_STATE(78)] = 3200,
  [SMALL_STATE(79)] = 3235,
  [SMALL_STATE(80)] = 3256,
  [SMALL_STATE(81)] = 3291,
  [SMALL_STATE(82)] = 3312,
  [SMALL_STATE(83)] = 3333,
  [SMALL_STATE(84)] = 3368,
  [SMALL_STATE(85)] = 3403,
  [SMALL_STATE(86)] = 3424,
  [SMALL_STATE(87)] = 3459,
  [SMALL_STATE(88)] = 3480,
  [SMALL_STATE(89)] = 3501,
  [SMALL_STATE(90)] = 3522,
  [SMALL_STATE(91)] = 3547,
  [SMALL_STATE(92)] = 3568,
  [SMALL_STATE(93)] = 3590,
  [SMALL_STATE(94)] = 3610,
  [SMALL_STATE(95)] = 3630,
  [SMALL_STATE(96)] = 3650,
  [SMALL_STATE(97)] = 3670,
  [SMALL_STATE(98)] = 3692,
  [SMALL_STATE(99)] = 3714,
  [SMALL_STATE(100)] = 3736,
  [SMALL_STATE(101)] = 3762,
  [SMALL_STATE(102)] = 3788,
  [SMALL_STATE(103)] = 3808,
  [SMALL_STATE(104)] = 3828,
  [SMALL_STATE(105)] = 3848,
  [SMALL_STATE(106)] = 3868,
  [SMALL_STATE(107)] = 3890,
  [SMALL_STATE(108)] = 3910,
  [SMALL_STATE(109)] = 3930,
  [SMALL_STATE(110)] = 3952,
  [SMALL_STATE(111)] = 3974,
  [SMALL_STATE(112)] = 3994,
  [SMALL_STATE(113)] = 4014,
  [SMALL_STATE(114)] = 4036,
  [SMALL_STATE(115)] = 4058,
  [SMALL_STATE(116)] = 4080,
  [SMALL_STATE(117)] = 4102,
  [SMALL_STATE(118)] = 4128,
  [SMALL_STATE(119)] = 4148,
  [SMALL_STATE(120)] = 4174,
  [SMALL_STATE(121)] = 4196,
  [SMALL_STATE(122)] = 4218,
  [SMALL_STATE(123)] = 4239,
  [SMALL_STATE(124)] = 4260,
  [SMALL_STATE(125)] = 4285,
  [SMALL_STATE(126)] = 4310,
  [SMALL_STATE(127)] = 4331,
  [SMALL_STATE(128)] = 4364,
  [SMALL_STATE(129)] = 4385,
  [SMALL_STATE(130)] = 4406,
  [SMALL_STATE(131)] = 4427,
  [SMALL_STATE(132)] = 4448,
  [SMALL_STATE(133)] = 4481,
  [SMALL_STATE(134)] = 4502,
  [SMALL_STATE(135)] = 4523,
  [SMALL_STATE(136)] = 4544,
  [SMALL_STATE(137)] = 4569,
  [SMALL_STATE(138)] = 4590,
  [SMALL_STATE(139)] = 4611,
  [SMALL_STATE(140)] = 4632,
  [SMALL_STATE(141)] = 4652,
  [SMALL_STATE(142)] = 4672,
  [SMALL_STATE(143)] = 4692,
  [SMALL_STATE(144)] = 4712,
  [SMALL_STATE(145)] = 4732,
  [SMALL_STATE(146)] = 4752,
  [SMALL_STATE(147)] = 4772,
  [SMALL_STATE(148)] = 4792,
  [SMALL_STATE(149)] = 4812,
  [SMALL_STATE(150)] = 4832,
  [SMALL_STATE(151)] = 4858,
  [SMALL_STATE(152)] = 4894,
  [SMALL_STATE(153)] = 4928,
  [SMALL_STATE(154)] = 4954,
  [SMALL_STATE(155)] = 4974,
  [SMALL_STATE(156)] = 4994,
  [SMALL_STATE(157)] = 5014,
  [SMALL_STATE(158)] = 5034,
  [SMALL_STATE(159)] = 5054,
  [SMALL_STATE(160)] = 5079,
  [SMALL_STATE(161)] = 5098,
  [SMALL_STATE(162)] = 5117,
  [SMALL_STATE(163)] = 5136,
  [SMALL_STATE(164)] = 5155,
  [SMALL_STATE(165)] = 5174,
  [SMALL_STATE(166)] = 5193,
  [SMALL_STATE(167)] = 5212,
  [SMALL_STATE(168)] = 5231,
  [SMALL_STATE(169)] = 5250,
  [SMALL_STATE(170)] = 5269,
  [SMALL_STATE(171)] = 5288,
  [SMALL_STATE(172)] = 5307,
  [SMALL_STATE(173)] = 5332,
  [SMALL_STATE(174)] = 5351,
  [SMALL_STATE(175)] = 5370,
  [SMALL_STATE(176)] = 5389,
  [SMALL_STATE(177)] = 5408,
  [SMALL_STATE(178)] = 5427,
  [SMALL_STATE(179)] = 5462,
  [SMALL_STATE(180)] = 5481,
  [SMALL_STATE(181)] = 5500,
  [SMALL_STATE(182)] = 5519,
  [SMALL_STATE(183)] = 5538,
  [SMALL_STATE(184)] = 5557,
  [SMALL_STATE(185)] = 5589,
  [SMALL_STATE(186)] = 5621,
  [SMALL_STATE(187)] = 5653,
  [SMALL_STATE(188)] = 5685,
  [SMALL_STATE(189)] = 5717,
  [SMALL_STATE(190)] = 5749,
  [SMALL_STATE(191)] = 5781,
  [SMALL_STATE(192)] = 5798,
  [SMALL_STATE(193)] = 5815,
  [SMALL_STATE(194)] = 5832,
  [SMALL_STATE(195)] = 5849,
  [SMALL_STATE(196)] = 5866,
  [SMALL_STATE(197)] = 5883,
  [SMALL_STATE(198)] = 5900,
  [SMALL_STATE(199)] = 5917,
  [SMALL_STATE(200)] = 5934,
  [SMALL_STATE(201)] = 5951,
  [SMALL_STATE(202)] = 5972,
  [SMALL_STATE(203)] = 5989,
  [SMALL_STATE(204)] = 6006,
  [SMALL_STATE(205)] = 6023,
  [SMALL_STATE(206)] = 6044,
  [SMALL_STATE(207)] = 6065,
  [SMALL_STATE(208)] = 6086,
  [SMALL_STATE(209)] = 6109,
  [SMALL_STATE(210)] = 6132,
  [SMALL_STATE(211)] = 6155,
  [SMALL_STATE(212)] = 6178,
  [SMALL_STATE(213)] = 6201,
  [SMALL_STATE(214)] = 6222,
  [SMALL_STATE(215)] = 6243,
  [SMALL_STATE(216)] = 6264,
  [SMALL_STATE(217)] = 6285,
  [SMALL_STATE(218)] = 6306,
  [SMALL_STATE(219)] = 6329,
  [SMALL_STATE(220)] = 6350,
  [SMALL_STATE(221)] = 6371,
  [SMALL_STATE(222)] = 6392,
  [SMALL_STATE(223)] = 6413,
  [SMALL_STATE(224)] = 6434,
  [SMALL_STATE(225)] = 6455,
  [SMALL_STATE(226)] = 6478,
  [SMALL_STATE(227)] = 6499,
  [SMALL_STATE(228)] = 6518,
  [SMALL_STATE(229)] = 6539,
  [SMALL_STATE(230)] = 6560,
  [SMALL_STATE(231)] = 6581,
  [SMALL_STATE(232)] = 6602,
  [SMALL_STATE(233)] = 6623,
  [SMALL_STATE(234)] = 6646,
  [SMALL_STATE(235)] = 6663,
  [SMALL_STATE(236)] = 6684,
  [SMALL_STATE(237)] = 6705,
  [SMALL_STATE(238)] = 6726,
  [SMALL_STATE(239)] = 6745,
  [SMALL_STATE(240)] = 6766,
  [SMALL_STATE(241)] = 6787,
  [SMALL_STATE(242)] = 6808,
  [SMALL_STATE(243)] = 6831,
  [SMALL_STATE(244)] = 6852,
  [SMALL_STATE(245)] = 6873,
  [SMALL_STATE(246)] = 6892,
  [SMALL_STATE(247)] = 6907,
  [SMALL_STATE(248)] = 6928,
  [SMALL_STATE(249)] = 6949,
  [SMALL_STATE(250)] = 6970,
  [SMALL_STATE(251)] = 6991,
  [SMALL_STATE(252)] = 7014,
  [SMALL_STATE(253)] = 7027,
  [SMALL_STATE(254)] = 7044,
  [SMALL_STATE(255)] = 7059,
  [SMALL_STATE(256)] = 7072,
  [SMALL_STATE(257)] = 7085,
  [SMALL_STATE(258)] = 7096,
  [SMALL_STATE(259)] = 7111,
  [SMALL_STATE(260)] = 7122,
  [SMALL_STATE(261)] = 7133,
  [SMALL_STATE(262)] = 7144,
  [SMALL_STATE(263)] = 7155,
  [SMALL_STATE(264)] = 7166,
  [SMALL_STATE(265)] = 7177,
  [SMALL_STATE(266)] = 7188,
  [SMALL_STATE(267)] = 7201,
  [SMALL_STATE(268)] = 7212,
  [SMALL_STATE(269)] = 7223,
  [SMALL_STATE(270)] = 7234,
  [SMALL_STATE(271)] = 7245,
  [SMALL_STATE(272)] = 7256,
  [SMALL_STATE(273)] = 7267,
  [SMALL_STATE(274)] = 7281,
  [SMALL_STATE(275)] = 7295,
  [SMALL_STATE(276)] = 7307,
  [SMALL_STATE(277)] = 7321,
  [SMALL_STATE(278)] = 7335,
  [SMALL_STATE(279)] = 7347,
  [SMALL_STATE(280)] = 7361,
  [SMALL_STATE(281)] = 7375,
  [SMALL_STATE(282)] = 7389,
  [SMALL_STATE(283)] = 7403,
  [SMALL_STATE(284)] = 7417,
  [SMALL_STATE(285)] = 7431,
  [SMALL_STATE(286)] = 7445,
  [SMALL_STATE(287)] = 7459,
  [SMALL_STATE(288)] = 7473,
  [SMALL_STATE(289)] = 7487,
  [SMALL_STATE(290)] = 7501,
  [SMALL_STATE(291)] = 7515,
  [SMALL_STATE(292)] = 7529,
  [SMALL_STATE(293)] = 7541,
  [SMALL_STATE(294)] = 7553,
  [SMALL_STATE(295)] = 7565,
  [SMALL_STATE(296)] = 7579,
  [SMALL_STATE(297)] = 7593,
  [SMALL_STATE(298)] = 7607,
  [SMALL_STATE(299)] = 7621,
  [SMALL_STATE(300)] = 7635,
  [SMALL_STATE(301)] = 7649,
  [SMALL_STATE(302)] = 7663,
  [SMALL_STATE(303)] = 7674,
  [SMALL_STATE(304)] = 7685,
  [SMALL_STATE(305)] = 7696,
  [SMALL_STATE(306)] = 7705,
  [SMALL_STATE(307)] = 7716,
  [SMALL_STATE(308)] = 7727,
  [SMALL_STATE(309)] = 7738,
  [SMALL_STATE(310)] = 7749,
  [SMALL_STATE(311)] = 7760,
  [SMALL_STATE(312)] = 7769,
  [SMALL_STATE(313)] = 7780,
  [SMALL_STATE(314)] = 7789,
  [SMALL_STATE(315)] = 7800,
  [SMALL_STATE(316)] = 7811,
  [SMALL_STATE(317)] = 7820,
  [SMALL_STATE(318)] = 7831,
  [SMALL_STATE(319)] = 7839,
  [SMALL_STATE(320)] = 7847,
  [SMALL_STATE(321)] = 7855,
  [SMALL_STATE(322)] = 7863,
  [SMALL_STATE(323)] = 7871,
  [SMALL_STATE(324)] = 7879,
  [SMALL_STATE(325)] = 7887,
  [SMALL_STATE(326)] = 7895,
  [SMALL_STATE(327)] = 7903,
  [SMALL_STATE(328)] = 7911,
  [SMALL_STATE(329)] = 7919,
  [SMALL_STATE(330)] = 7927,
  [SMALL_STATE(331)] = 7935,
  [SMALL_STATE(332)] = 7943,
  [SMALL_STATE(333)] = 7951,
  [SMALL_STATE(334)] = 7959,
  [SMALL_STATE(335)] = 7967,
  [SMALL_STATE(336)] = 7975,
  [SMALL_STATE(337)] = 7983,
  [SMALL_STATE(338)] = 7991,
  [SMALL_STATE(339)] = 7999,
  [SMALL_STATE(340)] = 8007,
  [SMALL_STATE(341)] = 8015,
  [SMALL_STATE(342)] = 8023,
  [SMALL_STATE(343)] = 8031,
  [SMALL_STATE(344)] = 8039,
  [SMALL_STATE(345)] = 8047,
  [SMALL_STATE(346)] = 8055,
  [SMALL_STATE(347)] = 8063,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(183),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 3, .production_id = 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, .production_id = 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, .production_id = 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division, 3, .production_id = 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulus, 3, .production_id = 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_of, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dereference, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 3, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 5),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dereference, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_of, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3, .production_id = 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction, 3, .production_id = 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division, 3, .production_id = 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulus, 3, .production_id = 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_definition, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_definition, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(53),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2), SHIFT_REPEAT(314),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2), SHIFT_REPEAT(53),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath_component, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath_component, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_definition, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_definition, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_namespace, 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_namespace, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_definition, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_variable_definition, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(12),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(315),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2), SHIFT_REPEAT(253),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_size, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [814] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
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
