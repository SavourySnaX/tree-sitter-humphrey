#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_meta_item = 31,
  sym_block_comment = 32,
  sym_source_file = 33,
  sym__global_definition = 34,
  sym__definition_or_type = 35,
  sym_variable_definition = 36,
  sym_function_definition = 37,
  sym_block = 38,
  sym_statement = 39,
  sym_statement_expression = 40,
  sym_if_statement = 41,
  sym_else_statement = 42,
  sym_while_statement = 43,
  sym_local_variable_definition = 44,
  sym_type_definition = 45,
  sym_meta_list = 46,
  sym_identifier_list = 47,
  sym_type = 48,
  sym_function_type = 49,
  sym_input_parameters = 50,
  sym_output_parameters = 51,
  sym_array_type = 52,
  sym_alias_type = 53,
  sym_enum_type = 54,
  sym_enum_member = 55,
  sym_struct_type = 56,
  sym_struct_member = 57,
  sym_pointer_type = 58,
  sym_array_size = 59,
  sym_using_statement = 60,
  sym_namespace = 61,
  sym__rest_of_namespace = 62,
  sym_expression = 63,
  sym__expression = 64,
  sym_bracketed = 65,
  sym_subscript = 66,
  sym_address_of = 67,
  sym_dereference = 68,
  sym_assignment = 69,
  sym_dot = 70,
  sym_function_call = 71,
  sym_function_call_args = 72,
  sym_as = 73,
  sym_sum = 74,
  sym_subtraction = 75,
  sym_division = 76,
  sym_modulus = 77,
  sym_product = 78,
  sym_filepath_component = 79,
  sym_identifier = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_block_repeat1 = 82,
  aux_sym_meta_list_repeat1 = 83,
  aux_sym_identifier_list_repeat1 = 84,
  aux_sym_input_parameters_repeat1 = 85,
  aux_sym_alias_type_repeat1 = 86,
  aux_sym_enum_type_repeat1 = 87,
  aux_sym_namespace_repeat1 = 88,
  aux_sym_function_call_args_repeat1 = 89,
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
  [sym_meta_item] = "meta_item",
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
  [sym_meta_list] = "meta_list",
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
  [aux_sym_meta_list_repeat1] = "meta_list_repeat1",
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
  [sym_meta_item] = sym_meta_item,
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
  [sym_meta_list] = sym_meta_list,
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
  [aux_sym_meta_list_repeat1] = aux_sym_meta_list_repeat1,
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
  [sym_meta_item] = {
    .visible = true,
    .named = true,
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
  [sym_meta_list] = {
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
  [aux_sym_meta_list_repeat1] = {
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
  [4] = 4,
  [5] = 2,
  [6] = 4,
  [7] = 4,
  [8] = 2,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 26,
  [33] = 24,
  [34] = 31,
  [35] = 35,
  [36] = 26,
  [37] = 37,
  [38] = 31,
  [39] = 30,
  [40] = 28,
  [41] = 25,
  [42] = 24,
  [43] = 27,
  [44] = 23,
  [45] = 30,
  [46] = 28,
  [47] = 35,
  [48] = 29,
  [49] = 35,
  [50] = 23,
  [51] = 37,
  [52] = 29,
  [53] = 27,
  [54] = 37,
  [55] = 25,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 67,
  [75] = 65,
  [76] = 76,
  [77] = 77,
  [78] = 67,
  [79] = 68,
  [80] = 80,
  [81] = 68,
  [82] = 82,
  [83] = 66,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 71,
  [88] = 71,
  [89] = 56,
  [90] = 90,
  [91] = 69,
  [92] = 92,
  [93] = 73,
  [94] = 94,
  [95] = 92,
  [96] = 71,
  [97] = 76,
  [98] = 80,
  [99] = 90,
  [100] = 100,
  [101] = 68,
  [102] = 102,
  [103] = 102,
  [104] = 68,
  [105] = 105,
  [106] = 100,
  [107] = 86,
  [108] = 85,
  [109] = 62,
  [110] = 84,
  [111] = 82,
  [112] = 67,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 117,
  [130] = 69,
  [131] = 73,
  [132] = 65,
  [133] = 76,
  [134] = 82,
  [135] = 121,
  [136] = 66,
  [137] = 137,
  [138] = 122,
  [139] = 84,
  [140] = 127,
  [141] = 85,
  [142] = 86,
  [143] = 100,
  [144] = 128,
  [145] = 102,
  [146] = 90,
  [147] = 126,
  [148] = 123,
  [149] = 80,
  [150] = 120,
  [151] = 151,
  [152] = 92,
  [153] = 62,
  [154] = 115,
  [155] = 124,
  [156] = 113,
  [157] = 157,
  [158] = 116,
  [159] = 114,
  [160] = 119,
  [161] = 118,
  [162] = 151,
  [163] = 163,
  [164] = 157,
  [165] = 137,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 127,
  [172] = 115,
  [173] = 121,
  [174] = 122,
  [175] = 113,
  [176] = 114,
  [177] = 120,
  [178] = 119,
  [179] = 92,
  [180] = 118,
  [181] = 117,
  [182] = 116,
  [183] = 56,
  [184] = 123,
  [185] = 124,
  [186] = 126,
  [187] = 151,
  [188] = 128,
  [189] = 189,
  [190] = 86,
  [191] = 191,
  [192] = 192,
  [193] = 100,
  [194] = 69,
  [195] = 192,
  [196] = 76,
  [197] = 192,
  [198] = 192,
  [199] = 189,
  [200] = 192,
  [201] = 151,
  [202] = 65,
  [203] = 203,
  [204] = 73,
  [205] = 191,
  [206] = 189,
  [207] = 203,
  [208] = 203,
  [209] = 102,
  [210] = 189,
  [211] = 80,
  [212] = 191,
  [213] = 82,
  [214] = 66,
  [215] = 90,
  [216] = 189,
  [217] = 85,
  [218] = 84,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 225,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 225,
  [233] = 233,
  [234] = 233,
  [235] = 230,
  [236] = 225,
  [237] = 227,
  [238] = 233,
  [239] = 233,
  [240] = 229,
  [241] = 228,
  [242] = 230,
  [243] = 228,
  [244] = 228,
  [245] = 227,
  [246] = 227,
  [247] = 228,
  [248] = 233,
  [249] = 249,
  [250] = 229,
  [251] = 230,
  [252] = 225,
  [253] = 230,
  [254] = 229,
  [255] = 229,
  [256] = 227,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 80,
  [263] = 263,
  [264] = 76,
  [265] = 86,
  [266] = 65,
  [267] = 85,
  [268] = 73,
  [269] = 56,
  [270] = 270,
  [271] = 84,
  [272] = 100,
  [273] = 66,
  [274] = 82,
  [275] = 102,
  [276] = 137,
  [277] = 90,
  [278] = 69,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 157,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 285,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 286,
  [297] = 292,
  [298] = 298,
  [299] = 293,
  [300] = 300,
  [301] = 301,
  [302] = 292,
  [303] = 293,
  [304] = 304,
  [305] = 292,
  [306] = 293,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 286,
  [311] = 285,
  [312] = 292,
  [313] = 293,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 315,
  [321] = 321,
  [322] = 315,
  [323] = 315,
  [324] = 315,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 334,
  [336] = 334,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 331,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 331,
  [348] = 342,
  [349] = 349,
  [350] = 342,
  [351] = 331,
  [352] = 342,
  [353] = 353,
  [354] = 331,
  [355] = 342,
  [356] = 334,
  [357] = 357,
  [358] = 334,
  [359] = 359,
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(58);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (aux_sym_filepath_component_token1_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym_number_character_set_1(lookahead)) ADVANCE(49);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 'w') ADVANCE(58);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_number_character_set_1(lookahead)) ADVANCE(49);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '&') ADVANCE(40);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 'w') ADVANCE(58);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_number_character_set_1(lookahead)) ADVANCE(49);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      if (sym_number_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(74);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 13:
      if (sym_number_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(11);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(15)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(16)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(17)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_while);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(11);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_bit_type);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_using);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_as);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(49);
      if (aux_sym_filepath_component_token1_character_set_5(lookahead)) ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == ';') ADVANCE(28);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(26);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(27);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'f') ADVANCE(25);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'g') ADVANCE(38);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'h') ADVANCE(61);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(70);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(64);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(63);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(69);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(54);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(57);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(52);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'r') ADVANCE(65);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(43);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(60);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(53);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(36);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(72);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'u') ADVANCE(66);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_meta_item);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 16, .external_lex_state = 1},
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
  [53] = {.lex_state = 1, .external_lex_state = 1},
  [54] = {.lex_state = 1, .external_lex_state = 1},
  [55] = {.lex_state = 1, .external_lex_state = 1},
  [56] = {.lex_state = 5, .external_lex_state = 1},
  [57] = {.lex_state = 15, .external_lex_state = 1},
  [58] = {.lex_state = 16, .external_lex_state = 1},
  [59] = {.lex_state = 7, .external_lex_state = 1},
  [60] = {.lex_state = 16, .external_lex_state = 1},
  [61] = {.lex_state = 7, .external_lex_state = 1},
  [62] = {.lex_state = 5, .external_lex_state = 1},
  [63] = {.lex_state = 7, .external_lex_state = 1},
  [64] = {.lex_state = 7, .external_lex_state = 1},
  [65] = {.lex_state = 5, .external_lex_state = 1},
  [66] = {.lex_state = 5, .external_lex_state = 1},
  [67] = {.lex_state = 7, .external_lex_state = 1},
  [68] = {.lex_state = 7, .external_lex_state = 1},
  [69] = {.lex_state = 5, .external_lex_state = 1},
  [70] = {.lex_state = 7, .external_lex_state = 1},
  [71] = {.lex_state = 7, .external_lex_state = 1},
  [72] = {.lex_state = 7, .external_lex_state = 1},
  [73] = {.lex_state = 15, .external_lex_state = 1},
  [74] = {.lex_state = 7, .external_lex_state = 1},
  [75] = {.lex_state = 15, .external_lex_state = 1},
  [76] = {.lex_state = 15, .external_lex_state = 1},
  [77] = {.lex_state = 7, .external_lex_state = 1},
  [78] = {.lex_state = 7, .external_lex_state = 1},
  [79] = {.lex_state = 7, .external_lex_state = 1},
  [80] = {.lex_state = 5, .external_lex_state = 1},
  [81] = {.lex_state = 7, .external_lex_state = 1},
  [82] = {.lex_state = 15, .external_lex_state = 1},
  [83] = {.lex_state = 15, .external_lex_state = 1},
  [84] = {.lex_state = 15, .external_lex_state = 1},
  [85] = {.lex_state = 15, .external_lex_state = 1},
  [86] = {.lex_state = 15, .external_lex_state = 1},
  [87] = {.lex_state = 7, .external_lex_state = 1},
  [88] = {.lex_state = 7, .external_lex_state = 1},
  [89] = {.lex_state = 6, .external_lex_state = 1},
  [90] = {.lex_state = 5, .external_lex_state = 1},
  [91] = {.lex_state = 15, .external_lex_state = 1},
  [92] = {.lex_state = 15, .external_lex_state = 1},
  [93] = {.lex_state = 5, .external_lex_state = 1},
  [94] = {.lex_state = 5, .external_lex_state = 1},
  [95] = {.lex_state = 5, .external_lex_state = 1},
  [96] = {.lex_state = 7, .external_lex_state = 1},
  [97] = {.lex_state = 5, .external_lex_state = 1},
  [98] = {.lex_state = 15, .external_lex_state = 1},
  [99] = {.lex_state = 15, .external_lex_state = 1},
  [100] = {.lex_state = 15, .external_lex_state = 1},
  [101] = {.lex_state = 7, .external_lex_state = 1},
  [102] = {.lex_state = 15, .external_lex_state = 1},
  [103] = {.lex_state = 5, .external_lex_state = 1},
  [104] = {.lex_state = 7, .external_lex_state = 1},
  [105] = {.lex_state = 7, .external_lex_state = 1},
  [106] = {.lex_state = 5, .external_lex_state = 1},
  [107] = {.lex_state = 5, .external_lex_state = 1},
  [108] = {.lex_state = 5, .external_lex_state = 1},
  [109] = {.lex_state = 15, .external_lex_state = 1},
  [110] = {.lex_state = 5, .external_lex_state = 1},
  [111] = {.lex_state = 5, .external_lex_state = 1},
  [112] = {.lex_state = 7, .external_lex_state = 1},
  [113] = {.lex_state = 5, .external_lex_state = 1},
  [114] = {.lex_state = 5, .external_lex_state = 1},
  [115] = {.lex_state = 5, .external_lex_state = 1},
  [116] = {.lex_state = 5, .external_lex_state = 1},
  [117] = {.lex_state = 5, .external_lex_state = 1},
  [118] = {.lex_state = 5, .external_lex_state = 1},
  [119] = {.lex_state = 5, .external_lex_state = 1},
  [120] = {.lex_state = 5, .external_lex_state = 1},
  [121] = {.lex_state = 5, .external_lex_state = 1},
  [122] = {.lex_state = 5, .external_lex_state = 1},
  [123] = {.lex_state = 5, .external_lex_state = 1},
  [124] = {.lex_state = 5, .external_lex_state = 1},
  [125] = {.lex_state = 2, .external_lex_state = 1},
  [126] = {.lex_state = 5, .external_lex_state = 1},
  [127] = {.lex_state = 5, .external_lex_state = 1},
  [128] = {.lex_state = 5, .external_lex_state = 1},
  [129] = {.lex_state = 15, .external_lex_state = 1},
  [130] = {.lex_state = 6, .external_lex_state = 1},
  [131] = {.lex_state = 6, .external_lex_state = 1},
  [132] = {.lex_state = 6, .external_lex_state = 1},
  [133] = {.lex_state = 6, .external_lex_state = 1},
  [134] = {.lex_state = 6, .external_lex_state = 1},
  [135] = {.lex_state = 15, .external_lex_state = 1},
  [136] = {.lex_state = 6, .external_lex_state = 1},
  [137] = {.lex_state = 2, .external_lex_state = 1},
  [138] = {.lex_state = 15, .external_lex_state = 1},
  [139] = {.lex_state = 6, .external_lex_state = 1},
  [140] = {.lex_state = 15, .external_lex_state = 1},
  [141] = {.lex_state = 6, .external_lex_state = 1},
  [142] = {.lex_state = 6, .external_lex_state = 1},
  [143] = {.lex_state = 6, .external_lex_state = 1},
  [144] = {.lex_state = 15, .external_lex_state = 1},
  [145] = {.lex_state = 6, .external_lex_state = 1},
  [146] = {.lex_state = 6, .external_lex_state = 1},
  [147] = {.lex_state = 15, .external_lex_state = 1},
  [148] = {.lex_state = 15, .external_lex_state = 1},
  [149] = {.lex_state = 6, .external_lex_state = 1},
  [150] = {.lex_state = 15, .external_lex_state = 1},
  [151] = {.lex_state = 15, .external_lex_state = 1},
  [152] = {.lex_state = 6, .external_lex_state = 1},
  [153] = {.lex_state = 6, .external_lex_state = 1},
  [154] = {.lex_state = 15, .external_lex_state = 1},
  [155] = {.lex_state = 15, .external_lex_state = 1},
  [156] = {.lex_state = 15, .external_lex_state = 1},
  [157] = {.lex_state = 2, .external_lex_state = 1},
  [158] = {.lex_state = 15, .external_lex_state = 1},
  [159] = {.lex_state = 15, .external_lex_state = 1},
  [160] = {.lex_state = 15, .external_lex_state = 1},
  [161] = {.lex_state = 15, .external_lex_state = 1},
  [162] = {.lex_state = 5, .external_lex_state = 1},
  [163] = {.lex_state = 3, .external_lex_state = 1},
  [164] = {.lex_state = 3, .external_lex_state = 1},
  [165] = {.lex_state = 3, .external_lex_state = 1},
  [166] = {.lex_state = 3, .external_lex_state = 1},
  [167] = {.lex_state = 3, .external_lex_state = 1},
  [168] = {.lex_state = 3, .external_lex_state = 1},
  [169] = {.lex_state = 3, .external_lex_state = 1},
  [170] = {.lex_state = 3, .external_lex_state = 1},
  [171] = {.lex_state = 6, .external_lex_state = 1},
  [172] = {.lex_state = 6, .external_lex_state = 1},
  [173] = {.lex_state = 6, .external_lex_state = 1},
  [174] = {.lex_state = 6, .external_lex_state = 1},
  [175] = {.lex_state = 6, .external_lex_state = 1},
  [176] = {.lex_state = 6, .external_lex_state = 1},
  [177] = {.lex_state = 6, .external_lex_state = 1},
  [178] = {.lex_state = 6, .external_lex_state = 1},
  [179] = {.lex_state = 5, .external_lex_state = 1},
  [180] = {.lex_state = 6, .external_lex_state = 1},
  [181] = {.lex_state = 6, .external_lex_state = 1},
  [182] = {.lex_state = 6, .external_lex_state = 1},
  [183] = {.lex_state = 16, .external_lex_state = 1},
  [184] = {.lex_state = 6, .external_lex_state = 1},
  [185] = {.lex_state = 6, .external_lex_state = 1},
  [186] = {.lex_state = 6, .external_lex_state = 1},
  [187] = {.lex_state = 6, .external_lex_state = 1},
  [188] = {.lex_state = 6, .external_lex_state = 1},
  [189] = {.lex_state = 8, .external_lex_state = 1},
  [190] = {.lex_state = 16, .external_lex_state = 1},
  [191] = {.lex_state = 5, .external_lex_state = 1},
  [192] = {.lex_state = 8, .external_lex_state = 1},
  [193] = {.lex_state = 16, .external_lex_state = 1},
  [194] = {.lex_state = 16, .external_lex_state = 1},
  [195] = {.lex_state = 8, .external_lex_state = 1},
  [196] = {.lex_state = 16, .external_lex_state = 1},
  [197] = {.lex_state = 8, .external_lex_state = 1},
  [198] = {.lex_state = 8, .external_lex_state = 1},
  [199] = {.lex_state = 8, .external_lex_state = 1},
  [200] = {.lex_state = 8, .external_lex_state = 1},
  [201] = {.lex_state = 5, .external_lex_state = 1},
  [202] = {.lex_state = 16, .external_lex_state = 1},
  [203] = {.lex_state = 5, .external_lex_state = 1},
  [204] = {.lex_state = 16, .external_lex_state = 1},
  [205] = {.lex_state = 5, .external_lex_state = 1},
  [206] = {.lex_state = 8, .external_lex_state = 1},
  [207] = {.lex_state = 5, .external_lex_state = 1},
  [208] = {.lex_state = 5, .external_lex_state = 1},
  [209] = {.lex_state = 16, .external_lex_state = 1},
  [210] = {.lex_state = 8, .external_lex_state = 1},
  [211] = {.lex_state = 16, .external_lex_state = 1},
  [212] = {.lex_state = 5, .external_lex_state = 1},
  [213] = {.lex_state = 16, .external_lex_state = 1},
  [214] = {.lex_state = 16, .external_lex_state = 1},
  [215] = {.lex_state = 16, .external_lex_state = 1},
  [216] = {.lex_state = 8, .external_lex_state = 1},
  [217] = {.lex_state = 16, .external_lex_state = 1},
  [218] = {.lex_state = 16, .external_lex_state = 1},
  [219] = {.lex_state = 16, .external_lex_state = 1},
  [220] = {.lex_state = 17, .external_lex_state = 1},
  [221] = {.lex_state = 17, .external_lex_state = 1},
  [222] = {.lex_state = 8, .external_lex_state = 1},
  [223] = {.lex_state = 17, .external_lex_state = 1},
  [224] = {.lex_state = 16, .external_lex_state = 1},
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
  [236] = {.lex_state = 8, .external_lex_state = 1},
  [237] = {.lex_state = 8, .external_lex_state = 1},
  [238] = {.lex_state = 8, .external_lex_state = 1},
  [239] = {.lex_state = 8, .external_lex_state = 1},
  [240] = {.lex_state = 8, .external_lex_state = 1},
  [241] = {.lex_state = 8, .external_lex_state = 1},
  [242] = {.lex_state = 8, .external_lex_state = 1},
  [243] = {.lex_state = 8, .external_lex_state = 1},
  [244] = {.lex_state = 8, .external_lex_state = 1},
  [245] = {.lex_state = 8, .external_lex_state = 1},
  [246] = {.lex_state = 8, .external_lex_state = 1},
  [247] = {.lex_state = 8, .external_lex_state = 1},
  [248] = {.lex_state = 8, .external_lex_state = 1},
  [249] = {.lex_state = 8, .external_lex_state = 1},
  [250] = {.lex_state = 8, .external_lex_state = 1},
  [251] = {.lex_state = 8, .external_lex_state = 1},
  [252] = {.lex_state = 8, .external_lex_state = 1},
  [253] = {.lex_state = 8, .external_lex_state = 1},
  [254] = {.lex_state = 8, .external_lex_state = 1},
  [255] = {.lex_state = 8, .external_lex_state = 1},
  [256] = {.lex_state = 8, .external_lex_state = 1},
  [257] = {.lex_state = 16, .external_lex_state = 1},
  [258] = {.lex_state = 17, .external_lex_state = 1},
  [259] = {.lex_state = 16, .external_lex_state = 1},
  [260] = {.lex_state = 16, .external_lex_state = 1},
  [261] = {.lex_state = 17, .external_lex_state = 1},
  [262] = {.lex_state = 8, .external_lex_state = 1},
  [263] = {.lex_state = 16, .external_lex_state = 1},
  [264] = {.lex_state = 8, .external_lex_state = 1},
  [265] = {.lex_state = 8, .external_lex_state = 1},
  [266] = {.lex_state = 8, .external_lex_state = 1},
  [267] = {.lex_state = 8, .external_lex_state = 1},
  [268] = {.lex_state = 8, .external_lex_state = 1},
  [269] = {.lex_state = 8, .external_lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 1},
  [271] = {.lex_state = 8, .external_lex_state = 1},
  [272] = {.lex_state = 8, .external_lex_state = 1},
  [273] = {.lex_state = 8, .external_lex_state = 1},
  [274] = {.lex_state = 8, .external_lex_state = 1},
  [275] = {.lex_state = 8, .external_lex_state = 1},
  [276] = {.lex_state = 16, .external_lex_state = 1},
  [277] = {.lex_state = 8, .external_lex_state = 1},
  [278] = {.lex_state = 8, .external_lex_state = 1},
  [279] = {.lex_state = 16, .external_lex_state = 1},
  [280] = {.lex_state = 16, .external_lex_state = 1},
  [281] = {.lex_state = 8, .external_lex_state = 1},
  [282] = {.lex_state = 0, .external_lex_state = 1},
  [283] = {.lex_state = 16, .external_lex_state = 1},
  [284] = {.lex_state = 8, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 16, .external_lex_state = 1},
  [288] = {.lex_state = 8, .external_lex_state = 1},
  [289] = {.lex_state = 8, .external_lex_state = 1},
  [290] = {.lex_state = 8, .external_lex_state = 1},
  [291] = {.lex_state = 0, .external_lex_state = 1},
  [292] = {.lex_state = 0, .external_lex_state = 1},
  [293] = {.lex_state = 0, .external_lex_state = 1},
  [294] = {.lex_state = 16, .external_lex_state = 1},
  [295] = {.lex_state = 0, .external_lex_state = 1},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 0, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 0, .external_lex_state = 1},
  [301] = {.lex_state = 0, .external_lex_state = 1},
  [302] = {.lex_state = 0, .external_lex_state = 1},
  [303] = {.lex_state = 0, .external_lex_state = 1},
  [304] = {.lex_state = 8, .external_lex_state = 1},
  [305] = {.lex_state = 0, .external_lex_state = 1},
  [306] = {.lex_state = 0, .external_lex_state = 1},
  [307] = {.lex_state = 16, .external_lex_state = 1},
  [308] = {.lex_state = 0, .external_lex_state = 1},
  [309] = {.lex_state = 0, .external_lex_state = 1},
  [310] = {.lex_state = 0, .external_lex_state = 1},
  [311] = {.lex_state = 0, .external_lex_state = 1},
  [312] = {.lex_state = 0, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 8, .external_lex_state = 1},
  [315] = {.lex_state = 9, .external_lex_state = 1},
  [316] = {.lex_state = 8, .external_lex_state = 1},
  [317] = {.lex_state = 0, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 0, .external_lex_state = 1},
  [320] = {.lex_state = 9, .external_lex_state = 1},
  [321] = {.lex_state = 8, .external_lex_state = 1},
  [322] = {.lex_state = 9, .external_lex_state = 1},
  [323] = {.lex_state = 9, .external_lex_state = 1},
  [324] = {.lex_state = 9, .external_lex_state = 1},
  [325] = {.lex_state = 0, .external_lex_state = 1},
  [326] = {.lex_state = 16, .external_lex_state = 1},
  [327] = {.lex_state = 0, .external_lex_state = 1},
  [328] = {.lex_state = 8, .external_lex_state = 1},
  [329] = {.lex_state = 16, .external_lex_state = 1},
  [330] = {.lex_state = 16, .external_lex_state = 1},
  [331] = {.lex_state = 0, .external_lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 1},
  [333] = {.lex_state = 0, .external_lex_state = 1},
  [334] = {.lex_state = 0, .external_lex_state = 1},
  [335] = {.lex_state = 0, .external_lex_state = 1},
  [336] = {.lex_state = 0, .external_lex_state = 1},
  [337] = {.lex_state = 16, .external_lex_state = 1},
  [338] = {.lex_state = 0, .external_lex_state = 1},
  [339] = {.lex_state = 16, .external_lex_state = 1},
  [340] = {.lex_state = 16, .external_lex_state = 1},
  [341] = {.lex_state = 0, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 16, .external_lex_state = 1},
  [344] = {.lex_state = 16, .external_lex_state = 1},
  [345] = {.lex_state = 0, .external_lex_state = 1},
  [346] = {.lex_state = 0, .external_lex_state = 1},
  [347] = {.lex_state = 0, .external_lex_state = 1},
  [348] = {.lex_state = 0, .external_lex_state = 1},
  [349] = {.lex_state = 0, .external_lex_state = 1},
  [350] = {.lex_state = 0, .external_lex_state = 1},
  [351] = {.lex_state = 0, .external_lex_state = 1},
  [352] = {.lex_state = 0, .external_lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 1},
  [354] = {.lex_state = 0, .external_lex_state = 1},
  [355] = {.lex_state = 0, .external_lex_state = 1},
  [356] = {.lex_state = 0, .external_lex_state = 1},
  [357] = {.lex_state = 16, .external_lex_state = 1},
  [358] = {.lex_state = 0, .external_lex_state = 1},
  [359] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_meta_item] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(346),
    [sym__global_definition] = STATE(58),
    [sym__definition_or_type] = STATE(58),
    [sym_variable_definition] = STATE(58),
    [sym_function_definition] = STATE(58),
    [sym_type_definition] = STATE(58),
    [sym_meta_list] = STATE(290),
    [sym_identifier_list] = STATE(340),
    [sym_using_statement] = STATE(58),
    [sym_identifier] = STATE(307),
    [aux_sym_source_file_repeat1] = STATE(58),
    [aux_sym_meta_list_repeat1] = STATE(314),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym_filepath_component_token1] = ACTIONS(9),
    [sym_meta_item] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      sym_return_keyword,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    STATE(94), 1,
      sym_identifier,
    STATE(304), 1,
      sym_meta_list,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(329), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_expression,
    STATE(349), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(163), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(162), 14,
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
  [82] = 21,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(38), 1,
      anon_sym_while,
    ACTIONS(41), 1,
      sym_return_keyword,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(50), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(56), 1,
      sym_string,
    ACTIONS(59), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(62), 1,
      sym_meta_item,
    STATE(94), 1,
      sym_identifier,
    STATE(304), 1,
      sym_meta_list,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(329), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_expression,
    STATE(349), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(163), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(162), 14,
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
  [164] = 21,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      sym_return_keyword,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_identifier,
    STATE(304), 1,
      sym_meta_list,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(329), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_expression,
    STATE(349), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(163), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(162), 14,
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
  [246] = 21,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      sym_return_keyword,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_identifier,
    STATE(304), 1,
      sym_meta_list,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(329), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_expression,
    STATE(349), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(163), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(162), 14,
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
  [328] = 21,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      sym_return_keyword,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_identifier,
    STATE(304), 1,
      sym_meta_list,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(329), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_expression,
    STATE(349), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(163), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(162), 14,
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
  [410] = 21,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      sym_return_keyword,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_identifier,
    STATE(304), 1,
      sym_meta_list,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(329), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_expression,
    STATE(349), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(163), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(162), 14,
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
  [492] = 21,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_while,
    ACTIONS(19), 1,
      sym_return_keyword,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_identifier,
    STATE(304), 1,
      sym_meta_list,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(329), 1,
      sym_identifier_list,
    STATE(332), 1,
      sym_expression,
    STATE(349), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(163), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(162), 14,
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
  [574] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_identifier,
    STATE(124), 1,
      sym_function_call_args,
    STATE(291), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 14,
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
  [625] = 12,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    STATE(109), 1,
      sym_identifier,
    STATE(260), 1,
      sym_expression,
    STATE(280), 1,
      sym_block,
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
  [676] = 12,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    STATE(109), 1,
      sym_identifier,
    STATE(257), 1,
      sym_expression,
    STATE(279), 1,
      sym_block,
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
  [727] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_identifier,
    STATE(155), 1,
      sym_function_call_args,
    STATE(285), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 14,
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
  [778] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_identifier,
    STATE(185), 1,
      sym_function_call_args,
    STATE(311), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 14,
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
  [829] = 10,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    STATE(109), 1,
      sym_identifier,
    STATE(257), 1,
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
  [874] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    STATE(62), 1,
      sym_identifier,
    STATE(260), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 14,
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
  [919] = 10,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(103), 1,
      sym_string,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    STATE(153), 1,
      sym_identifier,
    STATE(328), 1,
      sym_expression,
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
  [964] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(109), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    STATE(317), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(201), 14,
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
  [1009] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(109), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    STATE(319), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(201), 14,
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
  [1054] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    STATE(62), 1,
      sym_identifier,
    STATE(325), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 14,
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
  [1099] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    STATE(62), 1,
      sym_identifier,
    STATE(257), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 14,
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
  [1144] = 10,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    STATE(62), 1,
      sym_identifier,
    STATE(259), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 14,
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
  [1189] = 10,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    STATE(109), 1,
      sym_identifier,
    STATE(259), 1,
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
  [1234] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(113), 1,
      sym_string,
    STATE(153), 1,
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
  [1276] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(115), 1,
      sym_number,
    ACTIONS(117), 1,
      sym_string,
    STATE(153), 1,
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
  [1318] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(121), 1,
      sym_string,
    STATE(109), 1,
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
  [1360] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(123), 1,
      sym_number,
    ACTIONS(125), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(114), 14,
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
  [1402] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(127), 1,
      sym_number,
    ACTIONS(129), 1,
      sym_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(135), 14,
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
  [1444] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(131), 1,
      sym_number,
    ACTIONS(133), 1,
      sym_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(161), 14,
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
  [1486] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(135), 1,
      sym_number,
    ACTIONS(137), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 14,
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
  [1528] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(139), 1,
      sym_number,
    ACTIONS(141), 1,
      sym_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 14,
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
  [1570] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(145), 1,
      sym_string,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(158), 14,
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
  [1612] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(147), 1,
      sym_number,
    ACTIONS(149), 1,
      sym_string,
    STATE(153), 1,
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
  [1654] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(151), 1,
      sym_number,
    ACTIONS(153), 1,
      sym_string,
    STATE(109), 1,
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
  [1696] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(155), 1,
      sym_number,
    ACTIONS(157), 1,
      sym_string,
    STATE(153), 1,
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
  [1738] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(161), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(212), 14,
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
  [1780] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(163), 1,
      sym_number,
    ACTIONS(165), 1,
      sym_string,
    STATE(109), 1,
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
  [1822] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(167), 1,
      sym_number,
    ACTIONS(169), 1,
      sym_string,
    STATE(109), 1,
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
  [1864] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(171), 1,
      sym_number,
    ACTIONS(173), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(116), 14,
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
  [1906] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(175), 1,
      sym_number,
    ACTIONS(177), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(117), 14,
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
  [1948] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(179), 1,
      sym_number,
    ACTIONS(181), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(118), 14,
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
  [1990] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(183), 1,
      sym_number,
    ACTIONS(185), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(119), 14,
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
  [2032] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(120), 14,
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
  [2074] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(191), 1,
      sym_number,
    ACTIONS(193), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 14,
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
  [2116] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(197), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(122), 14,
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
  [2158] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(201), 1,
      sym_string,
    STATE(153), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(181), 14,
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
  [2200] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(203), 1,
      sym_number,
    ACTIONS(205), 1,
      sym_string,
    STATE(153), 1,
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
  [2242] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(207), 1,
      sym_number,
    ACTIONS(209), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(205), 14,
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
  [2284] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(211), 1,
      sym_number,
    ACTIONS(213), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(208), 14,
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
  [2326] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(215), 1,
      sym_number,
    ACTIONS(217), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(191), 14,
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
  [2368] = 9,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(219), 1,
      sym_number,
    ACTIONS(221), 1,
      sym_string,
    STATE(109), 1,
      sym_identifier,
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
  [2410] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(223), 1,
      sym_number,
    ACTIONS(225), 1,
      sym_string,
    STATE(153), 1,
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
  [2452] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(227), 1,
      sym_number,
    ACTIONS(229), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(203), 14,
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
  [2494] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(231), 1,
      sym_number,
    ACTIONS(233), 1,
      sym_string,
    STATE(153), 1,
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
  [2536] = 9,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(235), 1,
      sym_number,
    ACTIONS(237), 1,
      sym_string,
    STATE(62), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(113), 14,
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
  [2578] = 9,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(239), 1,
      sym_number,
    ACTIONS(241), 1,
      sym_string,
    STATE(153), 1,
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
  [2620] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(243), 17,
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
  [2644] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_LBRACK,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(243), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [2669] = 10,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(290), 1,
      sym_meta_list,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(60), 7,
      sym__global_definition,
      sym__definition_or_type,
      sym_variable_definition,
      sym_function_definition,
      sym_type_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [2707] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(249), 1,
      anon_sym_EQ,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(219), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2745] = 10,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      anon_sym_using,
    ACTIONS(266), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(269), 1,
      sym_meta_item,
    STATE(290), 1,
      sym_meta_list,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(340), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(60), 7,
      sym__global_definition,
      sym__definition_or_type,
      sym_variable_definition,
      sym_function_definition,
      sym_type_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [2783] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    ACTIONS(272), 1,
      anon_sym_EQ,
    STATE(300), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2821] = 4,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(274), 13,
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
  [2847] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    ACTIONS(280), 1,
      anon_sym_EQ,
    STATE(301), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2885] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    ACTIONS(282), 1,
      anon_sym_EQ,
    STATE(224), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2923] = 2,
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
  [2944] = 2,
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
  [2965] = 9,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      sym_bit_type,
    ACTIONS(296), 1,
      anon_sym_STAR,
    STATE(152), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(130), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3000] = 9,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_bit_type,
    ACTIONS(306), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      aux_sym_filepath_component_token1,
    STATE(271), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(278), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3035] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(310), 14,
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
  [3056] = 9,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_bit_type,
    ACTIONS(306), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      aux_sym_filepath_component_token1,
    STATE(281), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(278), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3091] = 9,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      sym_bit_type,
    ACTIONS(306), 1,
      anon_sym_STAR,
    ACTIONS(308), 1,
      aux_sym_filepath_component_token1,
    STATE(277), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(278), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3126] = 9,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      sym_bit_type,
    ACTIONS(320), 1,
      anon_sym_STAR,
    STATE(90), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(69), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3161] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(322), 11,
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
      sym_meta_item,
  [3184] = 9,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      sym_bit_type,
    ACTIONS(320), 1,
      anon_sym_STAR,
    STATE(179), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(69), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3219] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(284), 11,
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
      sym_meta_item,
  [3242] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(328), 11,
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
      sym_meta_item,
  [3265] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(282), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3300] = 9,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      sym_bit_type,
    ACTIONS(320), 1,
      anon_sym_STAR,
    STATE(95), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(69), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3335] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(218), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3370] = 2,
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
  [3391] = 9,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      sym_bit_type,
    ACTIONS(296), 1,
      anon_sym_STAR,
    STATE(139), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(130), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3426] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(334), 11,
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
      sym_meta_item,
  [3449] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(286), 11,
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
      sym_meta_item,
  [3472] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(340), 11,
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
      sym_meta_item,
  [3495] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(344), 11,
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
      sym_meta_item,
  [3518] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(348), 11,
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
      sym_meta_item,
  [3541] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(215), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3576] = 9,
    ACTIONS(105), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      sym_bit_type,
    ACTIONS(296), 1,
      anon_sym_STAR,
    STATE(146), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(130), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3611] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(243), 12,
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
  [3634] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 14,
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
  [3655] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(310), 11,
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
      sym_meta_item,
  [3678] = 5,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [3705] = 2,
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
  [3726] = 7,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(274), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3757] = 4,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 12,
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
  [3782] = 9,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      sym_bit_type,
    ACTIONS(380), 1,
      anon_sym_STAR,
    STATE(99), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(91), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3817] = 2,
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
  [3838] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(332), 11,
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
      sym_meta_item,
  [3861] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(352), 11,
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
      sym_meta_item,
  [3884] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(386), 11,
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
      sym_meta_item,
  [3907] = 9,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      sym_bit_type,
    ACTIONS(380), 1,
      anon_sym_STAR,
    STATE(84), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(91), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [3942] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(390), 11,
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
      sym_meta_item,
  [3965] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 14,
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
  [3986] = 9,
    ACTIONS(31), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      sym_bit_type,
    ACTIONS(320), 1,
      anon_sym_STAR,
    STATE(110), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(69), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [4021] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_bit_type,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(270), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [4056] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(386), 14,
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
  [4077] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 14,
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
  [4098] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 14,
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
  [4119] = 5,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4146] = 2,
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
  [4167] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(334), 14,
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
  [4188] = 9,
    ACTIONS(89), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      sym_bit_type,
    ACTIONS(380), 1,
      anon_sym_STAR,
    STATE(92), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(91), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [4223] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(400), 13,
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
  [4243] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(402), 13,
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
  [4263] = 2,
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
  [4283] = 2,
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
  [4303] = 2,
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
  [4323] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 13,
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
  [4343] = 5,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(412), 10,
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
  [4369] = 5,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(420), 10,
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
  [4395] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(422), 13,
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
  [4415] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(424), 13,
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
  [4435] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(426), 13,
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
  [4455] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(428), 13,
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
  [4475] = 5,
    ACTIONS(434), 1,
      anon_sym_else,
    STATE(167), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(432), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(430), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [4501] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(436), 13,
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
  [4521] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(438), 13,
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
  [4541] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(440), 13,
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
  [4561] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(442), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(408), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4582] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(310), 10,
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
  [4603] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 2,
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
  [4624] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(326), 2,
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
  [4645] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 2,
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
  [4666] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(334), 10,
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
  [4687] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(422), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4708] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(338), 2,
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
  [4729] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(448), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(446), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [4750] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(424), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4771] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 2,
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
  [4792] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(438), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4813] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(344), 10,
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
  [4834] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(348), 10,
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
  [4855] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(386), 10,
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
  [4876] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(454), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(440), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4897] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(390), 10,
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
  [4918] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(352), 10,
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
  [4939] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(456), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(436), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4960] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(426), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [4981] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 2,
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
  [5002] = 6,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(462), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(420), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_meta_item,
  [5029] = 11,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(470), 1,
      anon_sym_EQ,
    ACTIONS(474), 1,
      anon_sym_DOT,
    ACTIONS(476), 1,
      anon_sym_as,
    ACTIONS(478), 1,
      anon_sym_PLUS,
    ACTIONS(480), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(472), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5066] = 5,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(356), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5091] = 5,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5116] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(490), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(404), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [5137] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(428), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [5158] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(494), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(400), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [5179] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(498), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(496), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5200] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(406), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [5221] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(502), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [5242] = 6,
    ACTIONS(460), 1,
      anon_sym_STAR,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(466), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(412), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_meta_item,
  [5269] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(506), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(410), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_meta_item,
  [5290] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_as,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(468), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5324] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(518), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5344] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(498), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(496), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5364] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(446), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5384] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(524), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(522), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5404] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(526), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5424] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(530), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5444] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(536), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(534), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5464] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(540), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
    ACTIONS(538), 7,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      sym_string,
      sym_meta_item,
  [5484] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(438), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5503] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(490), 2,
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
  [5522] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(422), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5541] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(424), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5560] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(400), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5579] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(402), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5598] = 6,
    ACTIONS(542), 1,
      anon_sym_STAR,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    ACTIONS(546), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(420), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5623] = 6,
    ACTIONS(542), 1,
      anon_sym_STAR,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    ACTIONS(546), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(412), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5648] = 3,
    ACTIONS(370), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 9,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5667] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(410), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5686] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(442), 2,
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
  [5705] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(500), 2,
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
  [5724] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [5743] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(426), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5762] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(428), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5781] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(436), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5800] = 11,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(472), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(542), 1,
      anon_sym_STAR,
    ACTIONS(544), 1,
      anon_sym_SLASH,
    ACTIONS(546), 1,
      anon_sym_PERCENT,
    ACTIONS(548), 1,
      anon_sym_EQ,
    ACTIONS(550), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      anon_sym_as,
    ACTIONS(554), 1,
      anon_sym_PLUS,
    ACTIONS(556), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5835] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(440), 8,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5854] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    STATE(217), 1,
      sym_output_parameters,
    STATE(289), 1,
      sym_meta_list,
    STATE(306), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5886] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [5904] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_as,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5936] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_meta_list,
    STATE(295), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    STATE(331), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5968] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(386), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [5986] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(310), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6004] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_meta_list,
    STATE(295), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    STATE(354), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6036] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(328), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6054] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_meta_list,
    STATE(295), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    STATE(351), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6086] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_meta_list,
    STATE(295), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    STATE(347), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6118] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      sym_output_parameters,
    STATE(289), 1,
      sym_meta_list,
    STATE(307), 1,
      sym_identifier,
    STATE(313), 1,
      sym_type_definition,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6150] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_meta_list,
    STATE(295), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    STATE(341), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6182] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(568), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6214] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6232] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_as,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6264] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(322), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6282] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_as,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6314] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      sym_output_parameters,
    STATE(289), 1,
      sym_meta_list,
    STATE(293), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6346] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_as,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6378] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_as,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6410] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(390), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6428] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_output_parameters,
    STATE(289), 1,
      sym_meta_list,
    STATE(299), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6460] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(382), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(332), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6478] = 10,
    ACTIONS(414), 1,
      anon_sym_STAR,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(512), 1,
      anon_sym_as,
    ACTIONS(514), 1,
      anon_sym_PLUS,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6510] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6528] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(286), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6546] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6564] = 10,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_output_parameters,
    STATE(289), 1,
      sym_meta_list,
    STATE(303), 1,
      sym_type_definition,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(330), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6596] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(344), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6614] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(340), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_meta_item,
  [6632] = 6,
    ACTIONS(588), 1,
      anon_sym_EQ,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(586), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(594), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [6654] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(596), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(598), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(221), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6674] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(602), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(604), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(223), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6694] = 8,
    ACTIONS(11), 1,
      sym_meta_item,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    STATE(289), 1,
      sym_meta_list,
    STATE(307), 1,
      sym_identifier,
    STATE(314), 1,
      aux_sym_meta_list_repeat1,
    STATE(318), 1,
      sym_type_definition,
    STATE(330), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6720] = 5,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(606), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(608), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(223), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [6740] = 6,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(615), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(617), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [6762] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(253), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6783] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(251), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6804] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(228), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6825] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6846] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(233), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6867] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(231), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6888] = 6,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 1,
      aux_sym_filepath_component_token1,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(231), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6909] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(230), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6930] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6951] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [6972] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(231), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [6993] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(242), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [7014] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(241), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7035] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7056] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7077] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(234), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7098] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7119] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(231), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [7140] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7161] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7182] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(243), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7203] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(247), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7224] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7245] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7266] = 6,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      aux_sym_filepath_component_token1,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(249), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7287] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(238), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7308] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(231), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [7329] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(235), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [7350] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(343), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(231), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [7371] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(239), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7392] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(248), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7413] = 6,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym_identifier,
    STATE(339), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(244), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [7434] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(689), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_meta_item,
  [7448] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(693), 3,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      sym_meta_item,
  [7462] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(699), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(697), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_meta_item,
  [7476] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(701), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_meta_item,
  [7490] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(705), 3,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
      sym_meta_item,
  [7504] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7515] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(711), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7528] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7539] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7550] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7561] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7572] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(322), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7583] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7594] = 4,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7609] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7620] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(386), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7631] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7642] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7653] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7664] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(448), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7677] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7688] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [7699] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(713), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(715), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7712] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(717), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(719), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7725] = 4,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    ACTIONS(725), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [7740] = 4,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7755] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(498), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [7768] = 4,
    ACTIONS(727), 1,
      aux_sym_filepath_component_token1,
    STATE(220), 1,
      sym_filepath_component,
    STATE(263), 1,
      sym_namespace,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7782] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7796] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7810] = 4,
    ACTIONS(735), 1,
      anon_sym_COLON,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7824] = 4,
    ACTIONS(740), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(742), 1,
      sym_meta_item,
    STATE(288), 1,
      aux_sym_meta_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7838] = 4,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    STATE(307), 1,
      sym_identifier,
    STATE(344), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7852] = 4,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    STATE(307), 1,
      sym_identifier,
    STATE(337), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7866] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7880] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7894] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7908] = 4,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_COLON,
    STATE(287), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7922] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7936] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7950] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7964] = 4,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7978] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [7992] = 4,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8006] = 4,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(768), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8020] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8034] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8048] = 4,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    STATE(307), 1,
      sym_identifier,
    STATE(357), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8062] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8076] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8090] = 4,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8104] = 4,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8118] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8132] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8146] = 4,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8160] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8174] = 4,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8188] = 4,
    ACTIONS(793), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(795), 1,
      sym_meta_item,
    STATE(288), 1,
      aux_sym_meta_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8202] = 3,
    ACTIONS(797), 1,
      sym_number,
    STATE(336), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8213] = 3,
    ACTIONS(560), 1,
      aux_sym_filepath_component_token1,
    STATE(326), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8224] = 3,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8235] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8244] = 3,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8255] = 3,
    ACTIONS(797), 1,
      sym_number,
    STATE(334), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8266] = 3,
    ACTIONS(727), 1,
      aux_sym_filepath_component_token1,
    STATE(261), 1,
      sym_filepath_component,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8277] = 3,
    ACTIONS(797), 1,
      sym_number,
    STATE(358), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8288] = 3,
    ACTIONS(797), 1,
      sym_number,
    STATE(356), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8299] = 3,
    ACTIONS(797), 1,
      sym_number,
    STATE(335), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8310] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(764), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8319] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [8328] = 3,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8339] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(803), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [8348] = 2,
    ACTIONS(805), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8356] = 2,
    ACTIONS(807), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8364] = 2,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8372] = 2,
    ACTIONS(811), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8380] = 2,
    ACTIONS(813), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8388] = 2,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8396] = 2,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8404] = 2,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8412] = 2,
    ACTIONS(821), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8420] = 2,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8428] = 2,
    ACTIONS(825), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8436] = 2,
    ACTIONS(827), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8444] = 2,
    ACTIONS(829), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8452] = 2,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8460] = 2,
    ACTIONS(833), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8468] = 2,
    ACTIONS(835), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8476] = 2,
    ACTIONS(837), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8484] = 2,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8492] = 2,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8500] = 2,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8508] = 2,
    ACTIONS(845), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8516] = 2,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8524] = 2,
    ACTIONS(849), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8532] = 2,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8540] = 2,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8548] = 2,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8556] = 2,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8564] = 2,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8572] = 2,
    ACTIONS(861), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8580] = 2,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [8588] = 2,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 410,
  [SMALL_STATE(8)] = 492,
  [SMALL_STATE(9)] = 574,
  [SMALL_STATE(10)] = 625,
  [SMALL_STATE(11)] = 676,
  [SMALL_STATE(12)] = 727,
  [SMALL_STATE(13)] = 778,
  [SMALL_STATE(14)] = 829,
  [SMALL_STATE(15)] = 874,
  [SMALL_STATE(16)] = 919,
  [SMALL_STATE(17)] = 964,
  [SMALL_STATE(18)] = 1009,
  [SMALL_STATE(19)] = 1054,
  [SMALL_STATE(20)] = 1099,
  [SMALL_STATE(21)] = 1144,
  [SMALL_STATE(22)] = 1189,
  [SMALL_STATE(23)] = 1234,
  [SMALL_STATE(24)] = 1276,
  [SMALL_STATE(25)] = 1318,
  [SMALL_STATE(26)] = 1360,
  [SMALL_STATE(27)] = 1402,
  [SMALL_STATE(28)] = 1444,
  [SMALL_STATE(29)] = 1486,
  [SMALL_STATE(30)] = 1528,
  [SMALL_STATE(31)] = 1570,
  [SMALL_STATE(32)] = 1612,
  [SMALL_STATE(33)] = 1654,
  [SMALL_STATE(34)] = 1696,
  [SMALL_STATE(35)] = 1738,
  [SMALL_STATE(36)] = 1780,
  [SMALL_STATE(37)] = 1822,
  [SMALL_STATE(38)] = 1864,
  [SMALL_STATE(39)] = 1906,
  [SMALL_STATE(40)] = 1948,
  [SMALL_STATE(41)] = 1990,
  [SMALL_STATE(42)] = 2032,
  [SMALL_STATE(43)] = 2074,
  [SMALL_STATE(44)] = 2116,
  [SMALL_STATE(45)] = 2158,
  [SMALL_STATE(46)] = 2200,
  [SMALL_STATE(47)] = 2242,
  [SMALL_STATE(48)] = 2284,
  [SMALL_STATE(49)] = 2326,
  [SMALL_STATE(50)] = 2368,
  [SMALL_STATE(51)] = 2410,
  [SMALL_STATE(52)] = 2452,
  [SMALL_STATE(53)] = 2494,
  [SMALL_STATE(54)] = 2536,
  [SMALL_STATE(55)] = 2578,
  [SMALL_STATE(56)] = 2620,
  [SMALL_STATE(57)] = 2644,
  [SMALL_STATE(58)] = 2669,
  [SMALL_STATE(59)] = 2707,
  [SMALL_STATE(60)] = 2745,
  [SMALL_STATE(61)] = 2783,
  [SMALL_STATE(62)] = 2821,
  [SMALL_STATE(63)] = 2847,
  [SMALL_STATE(64)] = 2885,
  [SMALL_STATE(65)] = 2923,
  [SMALL_STATE(66)] = 2944,
  [SMALL_STATE(67)] = 2965,
  [SMALL_STATE(68)] = 3000,
  [SMALL_STATE(69)] = 3035,
  [SMALL_STATE(70)] = 3056,
  [SMALL_STATE(71)] = 3091,
  [SMALL_STATE(72)] = 3126,
  [SMALL_STATE(73)] = 3161,
  [SMALL_STATE(74)] = 3184,
  [SMALL_STATE(75)] = 3219,
  [SMALL_STATE(76)] = 3242,
  [SMALL_STATE(77)] = 3265,
  [SMALL_STATE(78)] = 3300,
  [SMALL_STATE(79)] = 3335,
  [SMALL_STATE(80)] = 3370,
  [SMALL_STATE(81)] = 3391,
  [SMALL_STATE(82)] = 3426,
  [SMALL_STATE(83)] = 3449,
  [SMALL_STATE(84)] = 3472,
  [SMALL_STATE(85)] = 3495,
  [SMALL_STATE(86)] = 3518,
  [SMALL_STATE(87)] = 3541,
  [SMALL_STATE(88)] = 3576,
  [SMALL_STATE(89)] = 3611,
  [SMALL_STATE(90)] = 3634,
  [SMALL_STATE(91)] = 3655,
  [SMALL_STATE(92)] = 3678,
  [SMALL_STATE(93)] = 3705,
  [SMALL_STATE(94)] = 3726,
  [SMALL_STATE(95)] = 3757,
  [SMALL_STATE(96)] = 3782,
  [SMALL_STATE(97)] = 3817,
  [SMALL_STATE(98)] = 3838,
  [SMALL_STATE(99)] = 3861,
  [SMALL_STATE(100)] = 3884,
  [SMALL_STATE(101)] = 3907,
  [SMALL_STATE(102)] = 3942,
  [SMALL_STATE(103)] = 3965,
  [SMALL_STATE(104)] = 3986,
  [SMALL_STATE(105)] = 4021,
  [SMALL_STATE(106)] = 4056,
  [SMALL_STATE(107)] = 4077,
  [SMALL_STATE(108)] = 4098,
  [SMALL_STATE(109)] = 4119,
  [SMALL_STATE(110)] = 4146,
  [SMALL_STATE(111)] = 4167,
  [SMALL_STATE(112)] = 4188,
  [SMALL_STATE(113)] = 4223,
  [SMALL_STATE(114)] = 4243,
  [SMALL_STATE(115)] = 4263,
  [SMALL_STATE(116)] = 4283,
  [SMALL_STATE(117)] = 4303,
  [SMALL_STATE(118)] = 4323,
  [SMALL_STATE(119)] = 4343,
  [SMALL_STATE(120)] = 4369,
  [SMALL_STATE(121)] = 4395,
  [SMALL_STATE(122)] = 4415,
  [SMALL_STATE(123)] = 4435,
  [SMALL_STATE(124)] = 4455,
  [SMALL_STATE(125)] = 4475,
  [SMALL_STATE(126)] = 4501,
  [SMALL_STATE(127)] = 4521,
  [SMALL_STATE(128)] = 4541,
  [SMALL_STATE(129)] = 4561,
  [SMALL_STATE(130)] = 4582,
  [SMALL_STATE(131)] = 4603,
  [SMALL_STATE(132)] = 4624,
  [SMALL_STATE(133)] = 4645,
  [SMALL_STATE(134)] = 4666,
  [SMALL_STATE(135)] = 4687,
  [SMALL_STATE(136)] = 4708,
  [SMALL_STATE(137)] = 4729,
  [SMALL_STATE(138)] = 4750,
  [SMALL_STATE(139)] = 4771,
  [SMALL_STATE(140)] = 4792,
  [SMALL_STATE(141)] = 4813,
  [SMALL_STATE(142)] = 4834,
  [SMALL_STATE(143)] = 4855,
  [SMALL_STATE(144)] = 4876,
  [SMALL_STATE(145)] = 4897,
  [SMALL_STATE(146)] = 4918,
  [SMALL_STATE(147)] = 4939,
  [SMALL_STATE(148)] = 4960,
  [SMALL_STATE(149)] = 4981,
  [SMALL_STATE(150)] = 5002,
  [SMALL_STATE(151)] = 5029,
  [SMALL_STATE(152)] = 5066,
  [SMALL_STATE(153)] = 5091,
  [SMALL_STATE(154)] = 5116,
  [SMALL_STATE(155)] = 5137,
  [SMALL_STATE(156)] = 5158,
  [SMALL_STATE(157)] = 5179,
  [SMALL_STATE(158)] = 5200,
  [SMALL_STATE(159)] = 5221,
  [SMALL_STATE(160)] = 5242,
  [SMALL_STATE(161)] = 5269,
  [SMALL_STATE(162)] = 5290,
  [SMALL_STATE(163)] = 5324,
  [SMALL_STATE(164)] = 5344,
  [SMALL_STATE(165)] = 5364,
  [SMALL_STATE(166)] = 5384,
  [SMALL_STATE(167)] = 5404,
  [SMALL_STATE(168)] = 5424,
  [SMALL_STATE(169)] = 5444,
  [SMALL_STATE(170)] = 5464,
  [SMALL_STATE(171)] = 5484,
  [SMALL_STATE(172)] = 5503,
  [SMALL_STATE(173)] = 5522,
  [SMALL_STATE(174)] = 5541,
  [SMALL_STATE(175)] = 5560,
  [SMALL_STATE(176)] = 5579,
  [SMALL_STATE(177)] = 5598,
  [SMALL_STATE(178)] = 5623,
  [SMALL_STATE(179)] = 5648,
  [SMALL_STATE(180)] = 5667,
  [SMALL_STATE(181)] = 5686,
  [SMALL_STATE(182)] = 5705,
  [SMALL_STATE(183)] = 5724,
  [SMALL_STATE(184)] = 5743,
  [SMALL_STATE(185)] = 5762,
  [SMALL_STATE(186)] = 5781,
  [SMALL_STATE(187)] = 5800,
  [SMALL_STATE(188)] = 5835,
  [SMALL_STATE(189)] = 5854,
  [SMALL_STATE(190)] = 5886,
  [SMALL_STATE(191)] = 5904,
  [SMALL_STATE(192)] = 5936,
  [SMALL_STATE(193)] = 5968,
  [SMALL_STATE(194)] = 5986,
  [SMALL_STATE(195)] = 6004,
  [SMALL_STATE(196)] = 6036,
  [SMALL_STATE(197)] = 6054,
  [SMALL_STATE(198)] = 6086,
  [SMALL_STATE(199)] = 6118,
  [SMALL_STATE(200)] = 6150,
  [SMALL_STATE(201)] = 6182,
  [SMALL_STATE(202)] = 6214,
  [SMALL_STATE(203)] = 6232,
  [SMALL_STATE(204)] = 6264,
  [SMALL_STATE(205)] = 6282,
  [SMALL_STATE(206)] = 6314,
  [SMALL_STATE(207)] = 6346,
  [SMALL_STATE(208)] = 6378,
  [SMALL_STATE(209)] = 6410,
  [SMALL_STATE(210)] = 6428,
  [SMALL_STATE(211)] = 6460,
  [SMALL_STATE(212)] = 6478,
  [SMALL_STATE(213)] = 6510,
  [SMALL_STATE(214)] = 6528,
  [SMALL_STATE(215)] = 6546,
  [SMALL_STATE(216)] = 6564,
  [SMALL_STATE(217)] = 6596,
  [SMALL_STATE(218)] = 6614,
  [SMALL_STATE(219)] = 6632,
  [SMALL_STATE(220)] = 6654,
  [SMALL_STATE(221)] = 6674,
  [SMALL_STATE(222)] = 6694,
  [SMALL_STATE(223)] = 6720,
  [SMALL_STATE(224)] = 6740,
  [SMALL_STATE(225)] = 6762,
  [SMALL_STATE(226)] = 6783,
  [SMALL_STATE(227)] = 6804,
  [SMALL_STATE(228)] = 6825,
  [SMALL_STATE(229)] = 6846,
  [SMALL_STATE(230)] = 6867,
  [SMALL_STATE(231)] = 6888,
  [SMALL_STATE(232)] = 6909,
  [SMALL_STATE(233)] = 6930,
  [SMALL_STATE(234)] = 6951,
  [SMALL_STATE(235)] = 6972,
  [SMALL_STATE(236)] = 6993,
  [SMALL_STATE(237)] = 7014,
  [SMALL_STATE(238)] = 7035,
  [SMALL_STATE(239)] = 7056,
  [SMALL_STATE(240)] = 7077,
  [SMALL_STATE(241)] = 7098,
  [SMALL_STATE(242)] = 7119,
  [SMALL_STATE(243)] = 7140,
  [SMALL_STATE(244)] = 7161,
  [SMALL_STATE(245)] = 7182,
  [SMALL_STATE(246)] = 7203,
  [SMALL_STATE(247)] = 7224,
  [SMALL_STATE(248)] = 7245,
  [SMALL_STATE(249)] = 7266,
  [SMALL_STATE(250)] = 7287,
  [SMALL_STATE(251)] = 7308,
  [SMALL_STATE(252)] = 7329,
  [SMALL_STATE(253)] = 7350,
  [SMALL_STATE(254)] = 7371,
  [SMALL_STATE(255)] = 7392,
  [SMALL_STATE(256)] = 7413,
  [SMALL_STATE(257)] = 7434,
  [SMALL_STATE(258)] = 7448,
  [SMALL_STATE(259)] = 7462,
  [SMALL_STATE(260)] = 7476,
  [SMALL_STATE(261)] = 7490,
  [SMALL_STATE(262)] = 7504,
  [SMALL_STATE(263)] = 7515,
  [SMALL_STATE(264)] = 7528,
  [SMALL_STATE(265)] = 7539,
  [SMALL_STATE(266)] = 7550,
  [SMALL_STATE(267)] = 7561,
  [SMALL_STATE(268)] = 7572,
  [SMALL_STATE(269)] = 7583,
  [SMALL_STATE(270)] = 7594,
  [SMALL_STATE(271)] = 7609,
  [SMALL_STATE(272)] = 7620,
  [SMALL_STATE(273)] = 7631,
  [SMALL_STATE(274)] = 7642,
  [SMALL_STATE(275)] = 7653,
  [SMALL_STATE(276)] = 7664,
  [SMALL_STATE(277)] = 7677,
  [SMALL_STATE(278)] = 7688,
  [SMALL_STATE(279)] = 7699,
  [SMALL_STATE(280)] = 7712,
  [SMALL_STATE(281)] = 7725,
  [SMALL_STATE(282)] = 7740,
  [SMALL_STATE(283)] = 7755,
  [SMALL_STATE(284)] = 7768,
  [SMALL_STATE(285)] = 7782,
  [SMALL_STATE(286)] = 7796,
  [SMALL_STATE(287)] = 7810,
  [SMALL_STATE(288)] = 7824,
  [SMALL_STATE(289)] = 7838,
  [SMALL_STATE(290)] = 7852,
  [SMALL_STATE(291)] = 7866,
  [SMALL_STATE(292)] = 7880,
  [SMALL_STATE(293)] = 7894,
  [SMALL_STATE(294)] = 7908,
  [SMALL_STATE(295)] = 7922,
  [SMALL_STATE(296)] = 7936,
  [SMALL_STATE(297)] = 7950,
  [SMALL_STATE(298)] = 7964,
  [SMALL_STATE(299)] = 7978,
  [SMALL_STATE(300)] = 7992,
  [SMALL_STATE(301)] = 8006,
  [SMALL_STATE(302)] = 8020,
  [SMALL_STATE(303)] = 8034,
  [SMALL_STATE(304)] = 8048,
  [SMALL_STATE(305)] = 8062,
  [SMALL_STATE(306)] = 8076,
  [SMALL_STATE(307)] = 8090,
  [SMALL_STATE(308)] = 8104,
  [SMALL_STATE(309)] = 8118,
  [SMALL_STATE(310)] = 8132,
  [SMALL_STATE(311)] = 8146,
  [SMALL_STATE(312)] = 8160,
  [SMALL_STATE(313)] = 8174,
  [SMALL_STATE(314)] = 8188,
  [SMALL_STATE(315)] = 8202,
  [SMALL_STATE(316)] = 8213,
  [SMALL_STATE(317)] = 8224,
  [SMALL_STATE(318)] = 8235,
  [SMALL_STATE(319)] = 8244,
  [SMALL_STATE(320)] = 8255,
  [SMALL_STATE(321)] = 8266,
  [SMALL_STATE(322)] = 8277,
  [SMALL_STATE(323)] = 8288,
  [SMALL_STATE(324)] = 8299,
  [SMALL_STATE(325)] = 8310,
  [SMALL_STATE(326)] = 8319,
  [SMALL_STATE(327)] = 8328,
  [SMALL_STATE(328)] = 8339,
  [SMALL_STATE(329)] = 8348,
  [SMALL_STATE(330)] = 8356,
  [SMALL_STATE(331)] = 8364,
  [SMALL_STATE(332)] = 8372,
  [SMALL_STATE(333)] = 8380,
  [SMALL_STATE(334)] = 8388,
  [SMALL_STATE(335)] = 8396,
  [SMALL_STATE(336)] = 8404,
  [SMALL_STATE(337)] = 8412,
  [SMALL_STATE(338)] = 8420,
  [SMALL_STATE(339)] = 8428,
  [SMALL_STATE(340)] = 8436,
  [SMALL_STATE(341)] = 8444,
  [SMALL_STATE(342)] = 8452,
  [SMALL_STATE(343)] = 8460,
  [SMALL_STATE(344)] = 8468,
  [SMALL_STATE(345)] = 8476,
  [SMALL_STATE(346)] = 8484,
  [SMALL_STATE(347)] = 8492,
  [SMALL_STATE(348)] = 8500,
  [SMALL_STATE(349)] = 8508,
  [SMALL_STATE(350)] = 8516,
  [SMALL_STATE(351)] = 8524,
  [SMALL_STATE(352)] = 8532,
  [SMALL_STATE(353)] = 8540,
  [SMALL_STATE(354)] = 8548,
  [SMALL_STATE(355)] = 8556,
  [SMALL_STATE(356)] = 8564,
  [SMALL_STATE(357)] = 8572,
  [SMALL_STATE(358)] = 8580,
  [SMALL_STATE(359)] = 8588,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(163),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(162),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(162),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(314),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(314),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 3, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 3, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_of, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dereference, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, .production_id = 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division, 3, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulus, 3, .production_id = 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, .production_id = 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division, 3, .production_id = 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulus, 3, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction, 3, .production_id = 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_of, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dereference, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_definition, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_definition, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2), SHIFT_REPEAT(321),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2), SHIFT_REPEAT(183),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(183),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath_component, 1),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath_component, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_namespace, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_namespace, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(316),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_list_repeat1, 2),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_list_repeat1, 2), SHIFT_REPEAT(288),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(19),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2), SHIFT_REPEAT(222),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_list, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 4),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_size, 1),
  [839] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 3),
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
