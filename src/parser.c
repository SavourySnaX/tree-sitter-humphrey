#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 315
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym_comment = 24,
  sym_number = 25,
  sym_string = 26,
  aux_sym_filepath_component_token1 = 27,
  sym_block_comment = 28,
  sym_source_file = 29,
  sym__global_definition = 30,
  sym_global_variable_definition = 31,
  sym_function_definition = 32,
  sym_block = 33,
  sym_statement = 34,
  sym_statement_expression = 35,
  sym_if_statement = 36,
  sym_else_statement = 37,
  sym_while_statement = 38,
  sym_local_variable_definition = 39,
  sym_variable_definition = 40,
  sym_type_definition = 41,
  sym_identifier_list = 42,
  sym_type = 43,
  sym_function_type = 44,
  sym_input_parameters = 45,
  sym_output_parameters = 46,
  sym_array_type = 47,
  sym_alias_type = 48,
  sym_enum_type = 49,
  sym_enum_member = 50,
  sym_struct_type = 51,
  sym_struct_member = 52,
  sym_pointer_type = 53,
  sym_array_size = 54,
  sym_using_statement = 55,
  sym_namespace = 56,
  sym__rest_of_namespace = 57,
  sym_expression = 58,
  sym__expression = 59,
  sym_subscript = 60,
  sym_address_of = 61,
  sym_assignment = 62,
  sym_dot = 63,
  sym_function_call = 64,
  sym_function_call_args = 65,
  sym_as = 66,
  sym_sum = 67,
  sym_product = 68,
  sym_filepath_component = 69,
  sym_identifier = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_block_repeat1 = 72,
  aux_sym_identifier_list_repeat1 = 73,
  aux_sym_input_parameters_repeat1 = 74,
  aux_sym_alias_type_repeat1 = 75,
  aux_sym_enum_type_repeat1 = 76,
  aux_sym_namespace_repeat1 = 77,
  aux_sym_function_call_args_repeat1 = 78,
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
  [sym_subscript] = "subscript",
  [sym_address_of] = "address_of",
  [sym_assignment] = "assignment",
  [sym_dot] = "dot",
  [sym_function_call] = "function_call",
  [sym_function_call_args] = "function_call_args",
  [sym_as] = "as",
  [sym_sum] = "sum",
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
  [sym_subscript] = sym_subscript,
  [sym_address_of] = sym_address_of,
  [sym_assignment] = sym_assignment,
  [sym_dot] = sym_dot,
  [sym_function_call] = sym_function_call,
  [sym_function_call_args] = sym_function_call_args,
  [sym_as] = sym_as,
  [sym_sum] = sym_sum,
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
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_address_of] = {
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
  [4] = 4,
  [5] = 2,
  [6] = 3,
  [7] = 3,
  [8] = 2,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 25,
  [30] = 26,
  [31] = 28,
  [32] = 28,
  [33] = 33,
  [34] = 25,
  [35] = 35,
  [36] = 28,
  [37] = 24,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 24,
  [44] = 26,
  [45] = 23,
  [46] = 38,
  [47] = 39,
  [48] = 28,
  [49] = 40,
  [50] = 26,
  [51] = 41,
  [52] = 39,
  [53] = 38,
  [54] = 23,
  [55] = 28,
  [56] = 14,
  [57] = 41,
  [58] = 40,
  [59] = 26,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 14,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 67,
  [83] = 83,
  [84] = 76,
  [85] = 77,
  [86] = 66,
  [87] = 65,
  [88] = 72,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 64,
  [94] = 78,
  [95] = 71,
  [96] = 68,
  [97] = 75,
  [98] = 70,
  [99] = 74,
  [100] = 100,
  [101] = 101,
  [102] = 61,
  [103] = 73,
  [104] = 104,
  [105] = 67,
  [106] = 77,
  [107] = 65,
  [108] = 108,
  [109] = 66,
  [110] = 110,
  [111] = 68,
  [112] = 70,
  [113] = 71,
  [114] = 61,
  [115] = 72,
  [116] = 78,
  [117] = 73,
  [118] = 76,
  [119] = 74,
  [120] = 75,
  [121] = 64,
  [122] = 77,
  [123] = 101,
  [124] = 124,
  [125] = 125,
  [126] = 65,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 64,
  [131] = 131,
  [132] = 68,
  [133] = 133,
  [134] = 91,
  [135] = 70,
  [136] = 83,
  [137] = 71,
  [138] = 72,
  [139] = 139,
  [140] = 73,
  [141] = 108,
  [142] = 133,
  [143] = 110,
  [144] = 81,
  [145] = 66,
  [146] = 89,
  [147] = 100,
  [148] = 90,
  [149] = 92,
  [150] = 80,
  [151] = 79,
  [152] = 74,
  [153] = 67,
  [154] = 75,
  [155] = 76,
  [156] = 83,
  [157] = 91,
  [158] = 81,
  [159] = 89,
  [160] = 78,
  [161] = 133,
  [162] = 90,
  [163] = 80,
  [164] = 79,
  [165] = 100,
  [166] = 101,
  [167] = 92,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 170,
  [172] = 172,
  [173] = 170,
  [174] = 170,
  [175] = 133,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 179,
  [180] = 169,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 183,
  [185] = 169,
  [186] = 182,
  [187] = 178,
  [188] = 183,
  [189] = 189,
  [190] = 182,
  [191] = 172,
  [192] = 176,
  [193] = 178,
  [194] = 176,
  [195] = 195,
  [196] = 172,
  [197] = 172,
  [198] = 189,
  [199] = 178,
  [200] = 169,
  [201] = 181,
  [202] = 182,
  [203] = 170,
  [204] = 14,
  [205] = 183,
  [206] = 181,
  [207] = 169,
  [208] = 189,
  [209] = 189,
  [210] = 172,
  [211] = 183,
  [212] = 189,
  [213] = 176,
  [214] = 214,
  [215] = 215,
  [216] = 178,
  [217] = 182,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 14,
  [223] = 65,
  [224] = 66,
  [225] = 67,
  [226] = 226,
  [227] = 68,
  [228] = 228,
  [229] = 70,
  [230] = 71,
  [231] = 72,
  [232] = 73,
  [233] = 74,
  [234] = 75,
  [235] = 235,
  [236] = 76,
  [237] = 237,
  [238] = 77,
  [239] = 64,
  [240] = 240,
  [241] = 241,
  [242] = 110,
  [243] = 243,
  [244] = 243,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 241,
  [249] = 249,
  [250] = 250,
  [251] = 241,
  [252] = 252,
  [253] = 253,
  [254] = 247,
  [255] = 255,
  [256] = 256,
  [257] = 247,
  [258] = 250,
  [259] = 247,
  [260] = 241,
  [261] = 108,
  [262] = 243,
  [263] = 263,
  [264] = 264,
  [265] = 241,
  [266] = 247,
  [267] = 267,
  [268] = 250,
  [269] = 269,
  [270] = 270,
  [271] = 269,
  [272] = 272,
  [273] = 273,
  [274] = 269,
  [275] = 269,
  [276] = 269,
  [277] = 269,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 288,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 288,
  [295] = 295,
  [296] = 296,
  [297] = 290,
  [298] = 298,
  [299] = 288,
  [300] = 300,
  [301] = 301,
  [302] = 290,
  [303] = 298,
  [304] = 288,
  [305] = 290,
  [306] = 298,
  [307] = 288,
  [308] = 290,
  [309] = 298,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 298,
  [314] = 314,
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
  return (c < 6576
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'c' && c <= 'z')))
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (sym_number_character_set_1(lookahead)) ADVANCE(41);
      if (aux_sym_filepath_component_token1_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym_number_character_set_1(lookahead)) ADVANCE(41);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_number_character_set_1(lookahead)) ADVANCE(41);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '&') ADVANCE(35);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_number_character_set_1(lookahead)) ADVANCE(41);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(5)
      if (sym_number_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 11:
      if (sym_number_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(12)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(65);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(13)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_while);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_bit_type);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_using);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_as);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(41);
      if (aux_sym_filepath_component_token1_character_set_5(lookahead)) ADVANCE(65);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == ';') ADVANCE(24);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(22);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(23);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'f') ADVANCE(21);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'g') ADVANCE(33);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'h') ADVANCE(53);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(62);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(55);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(61);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(46);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(49);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(44);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'r') ADVANCE(57);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(38);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(52);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(45);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(31);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(64);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'u') ADVANCE(58);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 1},
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
  [12] = {.lex_state = 7, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 12, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 7, .external_lex_state = 1},
  [20] = {.lex_state = 1, .external_lex_state = 1},
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 1, .external_lex_state = 1},
  [26] = {.lex_state = 7, .external_lex_state = 1},
  [27] = {.lex_state = 7, .external_lex_state = 1},
  [28] = {.lex_state = 7, .external_lex_state = 1},
  [29] = {.lex_state = 1, .external_lex_state = 1},
  [30] = {.lex_state = 7, .external_lex_state = 1},
  [31] = {.lex_state = 7, .external_lex_state = 1},
  [32] = {.lex_state = 7, .external_lex_state = 1},
  [33] = {.lex_state = 7, .external_lex_state = 1},
  [34] = {.lex_state = 1, .external_lex_state = 1},
  [35] = {.lex_state = 7, .external_lex_state = 1},
  [36] = {.lex_state = 7, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 7, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 7, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 7, .external_lex_state = 1},
  [45] = {.lex_state = 1, .external_lex_state = 1},
  [46] = {.lex_state = 1, .external_lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 1},
  [48] = {.lex_state = 7, .external_lex_state = 1},
  [49] = {.lex_state = 7, .external_lex_state = 1},
  [50] = {.lex_state = 7, .external_lex_state = 1},
  [51] = {.lex_state = 1, .external_lex_state = 1},
  [52] = {.lex_state = 1, .external_lex_state = 1},
  [53] = {.lex_state = 1, .external_lex_state = 1},
  [54] = {.lex_state = 1, .external_lex_state = 1},
  [55] = {.lex_state = 7, .external_lex_state = 1},
  [56] = {.lex_state = 5, .external_lex_state = 1},
  [57] = {.lex_state = 1, .external_lex_state = 1},
  [58] = {.lex_state = 7, .external_lex_state = 1},
  [59] = {.lex_state = 7, .external_lex_state = 1},
  [60] = {.lex_state = 13, .external_lex_state = 1},
  [61] = {.lex_state = 5, .external_lex_state = 1},
  [62] = {.lex_state = 13, .external_lex_state = 1},
  [63] = {.lex_state = 6, .external_lex_state = 1},
  [64] = {.lex_state = 5, .external_lex_state = 1},
  [65] = {.lex_state = 5, .external_lex_state = 1},
  [66] = {.lex_state = 5, .external_lex_state = 1},
  [67] = {.lex_state = 5, .external_lex_state = 1},
  [68] = {.lex_state = 5, .external_lex_state = 1},
  [69] = {.lex_state = 5, .external_lex_state = 1},
  [70] = {.lex_state = 5, .external_lex_state = 1},
  [71] = {.lex_state = 5, .external_lex_state = 1},
  [72] = {.lex_state = 5, .external_lex_state = 1},
  [73] = {.lex_state = 5, .external_lex_state = 1},
  [74] = {.lex_state = 5, .external_lex_state = 1},
  [75] = {.lex_state = 5, .external_lex_state = 1},
  [76] = {.lex_state = 5, .external_lex_state = 1},
  [77] = {.lex_state = 5, .external_lex_state = 1},
  [78] = {.lex_state = 5, .external_lex_state = 1},
  [79] = {.lex_state = 5, .external_lex_state = 1},
  [80] = {.lex_state = 5, .external_lex_state = 1},
  [81] = {.lex_state = 5, .external_lex_state = 1},
  [82] = {.lex_state = 12, .external_lex_state = 1},
  [83] = {.lex_state = 5, .external_lex_state = 1},
  [84] = {.lex_state = 12, .external_lex_state = 1},
  [85] = {.lex_state = 12, .external_lex_state = 1},
  [86] = {.lex_state = 12, .external_lex_state = 1},
  [87] = {.lex_state = 12, .external_lex_state = 1},
  [88] = {.lex_state = 12, .external_lex_state = 1},
  [89] = {.lex_state = 5, .external_lex_state = 1},
  [90] = {.lex_state = 5, .external_lex_state = 1},
  [91] = {.lex_state = 5, .external_lex_state = 1},
  [92] = {.lex_state = 5, .external_lex_state = 1},
  [93] = {.lex_state = 12, .external_lex_state = 1},
  [94] = {.lex_state = 12, .external_lex_state = 1},
  [95] = {.lex_state = 12, .external_lex_state = 1},
  [96] = {.lex_state = 12, .external_lex_state = 1},
  [97] = {.lex_state = 12, .external_lex_state = 1},
  [98] = {.lex_state = 12, .external_lex_state = 1},
  [99] = {.lex_state = 12, .external_lex_state = 1},
  [100] = {.lex_state = 5, .external_lex_state = 1},
  [101] = {.lex_state = 5, .external_lex_state = 1},
  [102] = {.lex_state = 12, .external_lex_state = 1},
  [103] = {.lex_state = 12, .external_lex_state = 1},
  [104] = {.lex_state = 3, .external_lex_state = 1},
  [105] = {.lex_state = 6, .external_lex_state = 1},
  [106] = {.lex_state = 6, .external_lex_state = 1},
  [107] = {.lex_state = 6, .external_lex_state = 1},
  [108] = {.lex_state = 3, .external_lex_state = 1},
  [109] = {.lex_state = 6, .external_lex_state = 1},
  [110] = {.lex_state = 3, .external_lex_state = 1},
  [111] = {.lex_state = 6, .external_lex_state = 1},
  [112] = {.lex_state = 6, .external_lex_state = 1},
  [113] = {.lex_state = 6, .external_lex_state = 1},
  [114] = {.lex_state = 6, .external_lex_state = 1},
  [115] = {.lex_state = 6, .external_lex_state = 1},
  [116] = {.lex_state = 6, .external_lex_state = 1},
  [117] = {.lex_state = 6, .external_lex_state = 1},
  [118] = {.lex_state = 6, .external_lex_state = 1},
  [119] = {.lex_state = 6, .external_lex_state = 1},
  [120] = {.lex_state = 6, .external_lex_state = 1},
  [121] = {.lex_state = 6, .external_lex_state = 1},
  [122] = {.lex_state = 13, .external_lex_state = 1},
  [123] = {.lex_state = 12, .external_lex_state = 1},
  [124] = {.lex_state = 2, .external_lex_state = 1},
  [125] = {.lex_state = 2, .external_lex_state = 1},
  [126] = {.lex_state = 13, .external_lex_state = 1},
  [127] = {.lex_state = 2, .external_lex_state = 1},
  [128] = {.lex_state = 2, .external_lex_state = 1},
  [129] = {.lex_state = 2, .external_lex_state = 1},
  [130] = {.lex_state = 13, .external_lex_state = 1},
  [131] = {.lex_state = 13, .external_lex_state = 1},
  [132] = {.lex_state = 13, .external_lex_state = 1},
  [133] = {.lex_state = 5, .external_lex_state = 1},
  [134] = {.lex_state = 12, .external_lex_state = 1},
  [135] = {.lex_state = 13, .external_lex_state = 1},
  [136] = {.lex_state = 12, .external_lex_state = 1},
  [137] = {.lex_state = 13, .external_lex_state = 1},
  [138] = {.lex_state = 13, .external_lex_state = 1},
  [139] = {.lex_state = 2, .external_lex_state = 1},
  [140] = {.lex_state = 13, .external_lex_state = 1},
  [141] = {.lex_state = 2, .external_lex_state = 1},
  [142] = {.lex_state = 12, .external_lex_state = 1},
  [143] = {.lex_state = 2, .external_lex_state = 1},
  [144] = {.lex_state = 12, .external_lex_state = 1},
  [145] = {.lex_state = 13, .external_lex_state = 1},
  [146] = {.lex_state = 12, .external_lex_state = 1},
  [147] = {.lex_state = 12, .external_lex_state = 1},
  [148] = {.lex_state = 12, .external_lex_state = 1},
  [149] = {.lex_state = 12, .external_lex_state = 1},
  [150] = {.lex_state = 12, .external_lex_state = 1},
  [151] = {.lex_state = 12, .external_lex_state = 1},
  [152] = {.lex_state = 13, .external_lex_state = 1},
  [153] = {.lex_state = 13, .external_lex_state = 1},
  [154] = {.lex_state = 13, .external_lex_state = 1},
  [155] = {.lex_state = 13, .external_lex_state = 1},
  [156] = {.lex_state = 6, .external_lex_state = 1},
  [157] = {.lex_state = 6, .external_lex_state = 1},
  [158] = {.lex_state = 6, .external_lex_state = 1},
  [159] = {.lex_state = 6, .external_lex_state = 1},
  [160] = {.lex_state = 5, .external_lex_state = 1},
  [161] = {.lex_state = 6, .external_lex_state = 1},
  [162] = {.lex_state = 6, .external_lex_state = 1},
  [163] = {.lex_state = 6, .external_lex_state = 1},
  [164] = {.lex_state = 6, .external_lex_state = 1},
  [165] = {.lex_state = 6, .external_lex_state = 1},
  [166] = {.lex_state = 6, .external_lex_state = 1},
  [167] = {.lex_state = 6, .external_lex_state = 1},
  [168] = {.lex_state = 8, .external_lex_state = 1},
  [169] = {.lex_state = 8, .external_lex_state = 1},
  [170] = {.lex_state = 8, .external_lex_state = 1},
  [171] = {.lex_state = 8, .external_lex_state = 1},
  [172] = {.lex_state = 8, .external_lex_state = 1},
  [173] = {.lex_state = 8, .external_lex_state = 1},
  [174] = {.lex_state = 8, .external_lex_state = 1},
  [175] = {.lex_state = 5, .external_lex_state = 1},
  [176] = {.lex_state = 8, .external_lex_state = 1},
  [177] = {.lex_state = 8, .external_lex_state = 1},
  [178] = {.lex_state = 8, .external_lex_state = 1},
  [179] = {.lex_state = 13, .external_lex_state = 1},
  [180] = {.lex_state = 8, .external_lex_state = 1},
  [181] = {.lex_state = 5, .external_lex_state = 1},
  [182] = {.lex_state = 8, .external_lex_state = 1},
  [183] = {.lex_state = 8, .external_lex_state = 1},
  [184] = {.lex_state = 8, .external_lex_state = 1},
  [185] = {.lex_state = 8, .external_lex_state = 1},
  [186] = {.lex_state = 8, .external_lex_state = 1},
  [187] = {.lex_state = 8, .external_lex_state = 1},
  [188] = {.lex_state = 8, .external_lex_state = 1},
  [189] = {.lex_state = 8, .external_lex_state = 1},
  [190] = {.lex_state = 8, .external_lex_state = 1},
  [191] = {.lex_state = 8, .external_lex_state = 1},
  [192] = {.lex_state = 8, .external_lex_state = 1},
  [193] = {.lex_state = 8, .external_lex_state = 1},
  [194] = {.lex_state = 8, .external_lex_state = 1},
  [195] = {.lex_state = 13, .external_lex_state = 1},
  [196] = {.lex_state = 8, .external_lex_state = 1},
  [197] = {.lex_state = 8, .external_lex_state = 1},
  [198] = {.lex_state = 8, .external_lex_state = 1},
  [199] = {.lex_state = 8, .external_lex_state = 1},
  [200] = {.lex_state = 8, .external_lex_state = 1},
  [201] = {.lex_state = 5, .external_lex_state = 1},
  [202] = {.lex_state = 8, .external_lex_state = 1},
  [203] = {.lex_state = 8, .external_lex_state = 1},
  [204] = {.lex_state = 13, .external_lex_state = 1},
  [205] = {.lex_state = 8, .external_lex_state = 1},
  [206] = {.lex_state = 5, .external_lex_state = 1},
  [207] = {.lex_state = 8, .external_lex_state = 1},
  [208] = {.lex_state = 8, .external_lex_state = 1},
  [209] = {.lex_state = 8, .external_lex_state = 1},
  [210] = {.lex_state = 8, .external_lex_state = 1},
  [211] = {.lex_state = 8, .external_lex_state = 1},
  [212] = {.lex_state = 8, .external_lex_state = 1},
  [213] = {.lex_state = 8, .external_lex_state = 1},
  [214] = {.lex_state = 13, .external_lex_state = 1},
  [215] = {.lex_state = 8, .external_lex_state = 1},
  [216] = {.lex_state = 8, .external_lex_state = 1},
  [217] = {.lex_state = 8, .external_lex_state = 1},
  [218] = {.lex_state = 13, .external_lex_state = 1},
  [219] = {.lex_state = 13, .external_lex_state = 1},
  [220] = {.lex_state = 13, .external_lex_state = 1},
  [221] = {.lex_state = 13, .external_lex_state = 1},
  [222] = {.lex_state = 8, .external_lex_state = 1},
  [223] = {.lex_state = 8, .external_lex_state = 1},
  [224] = {.lex_state = 8, .external_lex_state = 1},
  [225] = {.lex_state = 8, .external_lex_state = 1},
  [226] = {.lex_state = 8, .external_lex_state = 1},
  [227] = {.lex_state = 8, .external_lex_state = 1},
  [228] = {.lex_state = 13, .external_lex_state = 1},
  [229] = {.lex_state = 8, .external_lex_state = 1},
  [230] = {.lex_state = 8, .external_lex_state = 1},
  [231] = {.lex_state = 8, .external_lex_state = 1},
  [232] = {.lex_state = 8, .external_lex_state = 1},
  [233] = {.lex_state = 8, .external_lex_state = 1},
  [234] = {.lex_state = 8, .external_lex_state = 1},
  [235] = {.lex_state = 8, .external_lex_state = 1},
  [236] = {.lex_state = 8, .external_lex_state = 1},
  [237] = {.lex_state = 13, .external_lex_state = 1},
  [238] = {.lex_state = 8, .external_lex_state = 1},
  [239] = {.lex_state = 8, .external_lex_state = 1},
  [240] = {.lex_state = 0, .external_lex_state = 1},
  [241] = {.lex_state = 0, .external_lex_state = 1},
  [242] = {.lex_state = 13, .external_lex_state = 1},
  [243] = {.lex_state = 0, .external_lex_state = 1},
  [244] = {.lex_state = 0, .external_lex_state = 1},
  [245] = {.lex_state = 8, .external_lex_state = 1},
  [246] = {.lex_state = 13, .external_lex_state = 1},
  [247] = {.lex_state = 0, .external_lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 2, .external_lex_state = 1},
  [250] = {.lex_state = 0, .external_lex_state = 1},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 0, .external_lex_state = 1},
  [253] = {.lex_state = 13, .external_lex_state = 1},
  [254] = {.lex_state = 0, .external_lex_state = 1},
  [255] = {.lex_state = 0, .external_lex_state = 1},
  [256] = {.lex_state = 13, .external_lex_state = 1},
  [257] = {.lex_state = 0, .external_lex_state = 1},
  [258] = {.lex_state = 0, .external_lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 1},
  [260] = {.lex_state = 0, .external_lex_state = 1},
  [261] = {.lex_state = 13, .external_lex_state = 1},
  [262] = {.lex_state = 0, .external_lex_state = 1},
  [263] = {.lex_state = 0, .external_lex_state = 1},
  [264] = {.lex_state = 2, .external_lex_state = 1},
  [265] = {.lex_state = 0, .external_lex_state = 1},
  [266] = {.lex_state = 0, .external_lex_state = 1},
  [267] = {.lex_state = 2, .external_lex_state = 1},
  [268] = {.lex_state = 0, .external_lex_state = 1},
  [269] = {.lex_state = 5, .external_lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 1},
  [271] = {.lex_state = 5, .external_lex_state = 1},
  [272] = {.lex_state = 2, .external_lex_state = 1},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 5, .external_lex_state = 1},
  [275] = {.lex_state = 5, .external_lex_state = 1},
  [276] = {.lex_state = 5, .external_lex_state = 1},
  [277] = {.lex_state = 5, .external_lex_state = 1},
  [278] = {.lex_state = 8, .external_lex_state = 1},
  [279] = {.lex_state = 8, .external_lex_state = 1},
  [280] = {.lex_state = 0, .external_lex_state = 1},
  [281] = {.lex_state = 8, .external_lex_state = 1},
  [282] = {.lex_state = 0, .external_lex_state = 1},
  [283] = {.lex_state = 0, .external_lex_state = 1},
  [284] = {.lex_state = 0, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 0, .external_lex_state = 1},
  [291] = {.lex_state = 2, .external_lex_state = 1},
  [292] = {.lex_state = 0, .external_lex_state = 1},
  [293] = {.lex_state = 0, .external_lex_state = 1},
  [294] = {.lex_state = 0, .external_lex_state = 1},
  [295] = {.lex_state = 2, .external_lex_state = 1},
  [296] = {.lex_state = 2, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 0, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 2, .external_lex_state = 1},
  [301] = {.lex_state = 0, .external_lex_state = 1},
  [302] = {.lex_state = 0, .external_lex_state = 1},
  [303] = {.lex_state = 0, .external_lex_state = 1},
  [304] = {.lex_state = 0, .external_lex_state = 1},
  [305] = {.lex_state = 0, .external_lex_state = 1},
  [306] = {.lex_state = 0, .external_lex_state = 1},
  [307] = {.lex_state = 0, .external_lex_state = 1},
  [308] = {.lex_state = 0, .external_lex_state = 1},
  [309] = {.lex_state = 0, .external_lex_state = 1},
  [310] = {.lex_state = 2, .external_lex_state = 1},
  [311] = {.lex_state = 0, .external_lex_state = 1},
  [312] = {.lex_state = 0, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_filepath_component_token1] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(301),
    [sym__global_definition] = STATE(60),
    [sym_global_variable_definition] = STATE(60),
    [sym_function_definition] = STATE(60),
    [sym_variable_definition] = STATE(246),
    [sym_type_definition] = STATE(221),
    [sym_identifier_list] = STATE(295),
    [sym_using_statement] = STATE(60),
    [sym_identifier] = STATE(267),
    [aux_sym_source_file_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym_filepath_component_token1] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    STATE(69), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(296), 1,
      sym_identifier_list,
    STATE(311), 1,
      sym_type_definition,
    STATE(312), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(139), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [65] = 17,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(296), 1,
      sym_identifier_list,
    STATE(311), 1,
      sym_type_definition,
    STATE(312), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(8), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(139), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [130] = 17,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(34), 1,
      anon_sym_while,
    ACTIONS(37), 1,
      sym_return_keyword,
    ACTIONS(40), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(46), 1,
      sym_string,
    ACTIONS(49), 1,
      aux_sym_filepath_component_token1,
    STATE(69), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(296), 1,
      sym_identifier_list,
    STATE(311), 1,
      sym_type_definition,
    STATE(312), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(139), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [195] = 17,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(296), 1,
      sym_identifier_list,
    STATE(311), 1,
      sym_type_definition,
    STATE(312), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(139), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [260] = 17,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(296), 1,
      sym_identifier_list,
    STATE(311), 1,
      sym_type_definition,
    STATE(312), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(139), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [325] = 17,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(296), 1,
      sym_identifier_list,
    STATE(311), 1,
      sym_type_definition,
    STATE(312), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(139), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [390] = 17,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      sym_return_keyword,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_identifier,
    STATE(293), 1,
      sym_expression,
    STATE(296), 1,
      sym_identifier_list,
    STATE(311), 1,
      sym_type_definition,
    STATE(312), 1,
      sym_variable_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(139), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [455] = 10,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_identifier,
    STATE(151), 1,
      sym_function_call_args,
    STATE(243), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [495] = 10,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_identifier,
    STATE(164), 1,
      sym_function_call_args,
    STATE(262), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [535] = 10,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_identifier,
    STATE(79), 1,
      sym_function_call_args,
    STATE(244), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [575] = 10,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(66), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_bit_type,
    ACTIONS(76), 1,
      anon_sym_STAR,
    STATE(131), 1,
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
  [613] = 8,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    STATE(61), 1,
      sym_identifier,
    STATE(237), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [647] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(78), 12,
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
  [671] = 8,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    STATE(61), 1,
      sym_identifier,
    STATE(283), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [705] = 8,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    STATE(270), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(175), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [739] = 8,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      sym_number,
    ACTIONS(90), 1,
      sym_string,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    STATE(114), 1,
      sym_identifier,
    STATE(281), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(161), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [773] = 8,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(96), 1,
      sym_number,
    ACTIONS(98), 1,
      sym_string,
    STATE(102), 1,
      sym_identifier,
    STATE(237), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(142), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [807] = 11,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym_bit_type,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(106), 1,
      aux_sym_filepath_component_token1,
    STATE(131), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(218), 2,
      sym_function_type,
      sym_identifier,
    STATE(130), 5,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [847] = 8,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(96), 1,
      sym_number,
    ACTIONS(98), 1,
      sym_string,
    STATE(102), 1,
      sym_identifier,
    STATE(220), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(142), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [881] = 8,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    STATE(61), 1,
      sym_identifier,
    STATE(220), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(133), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [915] = 8,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    STATE(284), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(175), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [949] = 7,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(110), 1,
      sym_string,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(136), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [980] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(114), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(201), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1011] = 7,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(116), 1,
      sym_number,
    ACTIONS(118), 1,
      sym_string,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(157), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1042] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_bit_type,
    ACTIONS(128), 1,
      anon_sym_STAR,
    STATE(95), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(93), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [1077] = 9,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      sym_bit_type,
    ACTIONS(138), 1,
      anon_sym_STAR,
    STATE(113), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [1112] = 9,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      sym_bit_type,
    ACTIONS(138), 1,
      anon_sym_STAR,
    STATE(118), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [1147] = 7,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(142), 1,
      sym_string,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(134), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1178] = 9,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      sym_bit_type,
    ACTIONS(152), 1,
      anon_sym_STAR,
    STATE(71), 1,
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
  [1213] = 9,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      sym_bit_type,
    ACTIONS(152), 1,
      anon_sym_STAR,
    STATE(76), 1,
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
  [1248] = 9,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym_bit_type,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(106), 1,
      aux_sym_filepath_component_token1,
    STATE(155), 1,
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
  [1283] = 9,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      sym_bit_type,
    ACTIONS(162), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      aux_sym_filepath_component_token1,
    STATE(226), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(239), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [1318] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(166), 1,
      sym_number,
    ACTIONS(168), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(91), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1349] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_bit_type,
    ACTIONS(76), 1,
      anon_sym_STAR,
    STATE(131), 1,
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
  [1384] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_bit_type,
    ACTIONS(128), 1,
      anon_sym_STAR,
    STATE(84), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(93), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [1419] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(172), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(181), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1450] = 7,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(174), 1,
      sym_number,
    ACTIONS(176), 1,
      sym_string,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(144), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1481] = 7,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(178), 1,
      sym_number,
    ACTIONS(180), 1,
      sym_string,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(146), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1512] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      sym_bit_type,
    ACTIONS(128), 1,
      anon_sym_STAR,
    STATE(94), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(93), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [1547] = 7,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      sym_number,
    ACTIONS(184), 1,
      sym_string,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(148), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1578] = 9,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      sym_bit_type,
    ACTIONS(152), 1,
      anon_sym_STAR,
    STATE(160), 1,
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
  [1613] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(206), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1644] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_bit_type,
    ACTIONS(76), 1,
      anon_sym_STAR,
    STATE(137), 1,
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
  [1679] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(190), 1,
      sym_number,
    ACTIONS(192), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(83), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1710] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(194), 1,
      sym_number,
    ACTIONS(196), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(81), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1741] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(198), 1,
      sym_number,
    ACTIONS(200), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(89), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1772] = 9,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_bit_type,
    ACTIONS(76), 1,
      anon_sym_STAR,
    STATE(155), 1,
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
  [1807] = 9,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      sym_bit_type,
    ACTIONS(152), 1,
      anon_sym_STAR,
    STATE(78), 1,
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
  [1842] = 9,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      sym_bit_type,
    ACTIONS(162), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      aux_sym_filepath_component_token1,
    STATE(230), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(239), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [1877] = 7,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(204), 1,
      sym_string,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(162), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1908] = 7,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(206), 1,
      sym_number,
    ACTIONS(208), 1,
      sym_string,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(159), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1939] = 7,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(210), 1,
      sym_number,
    ACTIONS(212), 1,
      sym_string,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(158), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1970] = 7,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(214), 1,
      sym_number,
    ACTIONS(216), 1,
      sym_string,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(156), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [2001] = 9,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      sym_bit_type,
    ACTIONS(162), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      aux_sym_filepath_component_token1,
    STATE(236), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(239), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2036] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(78), 14,
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
  [2057] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(218), 1,
      sym_number,
    ACTIONS(220), 1,
      sym_string,
    STATE(61), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(90), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [2088] = 9,
    ACTIONS(92), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      sym_bit_type,
    ACTIONS(138), 1,
      anon_sym_STAR,
    STATE(116), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(121), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [2123] = 9,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      sym_bit_type,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(106), 1,
      aux_sym_filepath_component_token1,
    STATE(137), 1,
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
  [2158] = 9,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_type_definition,
    STATE(246), 1,
      sym_variable_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(295), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(62), 5,
      sym__global_definition,
      sym_global_variable_definition,
      sym_function_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [2191] = 4,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(224), 10,
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
  [2214] = 9,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      anon_sym_using,
    ACTIONS(235), 1,
      aux_sym_filepath_component_token1,
    STATE(221), 1,
      sym_type_definition,
    STATE(246), 1,
      sym_variable_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(295), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(62), 5,
      sym__global_definition,
      sym_global_variable_definition,
      sym_function_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [2247] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(78), 9,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2267] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(238), 11,
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
  [2285] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(240), 11,
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
  [2303] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(242), 11,
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
  [2321] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(244), 11,
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
  [2339] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(246), 11,
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
  [2357] = 7,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(224), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [2385] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(252), 11,
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
  [2403] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(254), 11,
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
  [2421] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(256), 11,
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
  [2439] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 11,
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
  [2457] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(260), 11,
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
  [2475] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(262), 11,
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
  [2493] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(264), 11,
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
  [2511] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(266), 11,
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
  [2529] = 4,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(268), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [2551] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(274), 10,
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
  [2568] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(276), 10,
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
  [2585] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(278), 10,
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
  [2602] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2621] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(282), 10,
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
  [2638] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2657] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2676] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(242), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2695] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(240), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2714] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2733] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(294), 10,
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
  [2750] = 3,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(296), 9,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [2769] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(300), 10,
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
  [2786] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(302), 10,
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
  [2803] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(304), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2822] = 5,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2845] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2864] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(246), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2883] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2902] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2921] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(260), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2940] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(322), 10,
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
  [2957] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 10,
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
  [2974] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2997] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3016] = 5,
    ACTIONS(338), 1,
      anon_sym_else,
    STATE(128), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(336), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3039] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(244), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3057] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(266), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3075] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(240), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3093] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(342), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3111] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(242), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3129] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(346), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3147] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(246), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3165] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(252), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3183] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(254), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3201] = 5,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(224), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3223] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(256), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3241] = 5,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(268), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3263] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(258), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3281] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(264), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3299] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(260), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3317] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(262), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3335] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3353] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3370] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3387] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(358), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(360), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3404] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(362), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(364), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3421] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3438] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(366), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(368), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3455] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(372), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3472] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(374), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(376), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3489] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3506] = 5,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(378), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3527] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3544] = 7,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_as,
    ACTIONS(394), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3569] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3586] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3603] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(282), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3620] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3637] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3654] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(400), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(402), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3671] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3688] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(342), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3705] = 8,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_STAR,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_as,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [3732] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(346), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      aux_sym_filepath_component_token1,
  [3749] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(416), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3766] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3783] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(294), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3800] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(420), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(322), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3817] = 4,
    ACTIONS(406), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(422), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(296), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3836] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(424), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(302), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3853] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3870] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(428), 3,
      anon_sym_using,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3887] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3904] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3921] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3938] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3955] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(282), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3971] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(300), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3987] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(278), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4003] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(294), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4019] = 3,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(268), 6,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [4035] = 8,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(408), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(430), 1,
      anon_sym_EQ,
    ACTIONS(432), 1,
      anon_sym_STAR,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_as,
    ACTIONS(438), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4061] = 4,
    ACTIONS(432), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(296), 4,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4079] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(276), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4095] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(274), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4111] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(322), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4127] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(324), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4143] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_as,
      aux_sym_filepath_component_token1,
    ACTIONS(302), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [4159] = 6,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    ACTIONS(442), 1,
      aux_sym_filepath_component_token1,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4180] = 6,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4201] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    STATE(308), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4224] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    STATE(305), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4247] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(212), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4268] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    STATE(302), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4291] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(297), 1,
      sym_input_parameters,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4314] = 7,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(394), 1,
      anon_sym_PLUS,
    ACTIONS(453), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4337] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4358] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4379] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(177), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4400] = 5,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(214), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [4419] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(190), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4440] = 7,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_as,
    ACTIONS(394), 1,
      anon_sym_PLUS,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4463] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(215), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4484] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_output_parameters,
    STATE(248), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4507] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_output_parameters,
    STATE(265), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4530] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(182), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4551] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(215), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4572] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(176), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4593] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_output_parameters,
    STATE(251), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4616] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4637] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(215), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4658] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(189), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4679] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4700] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4721] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4742] = 5,
    ACTIONS(465), 1,
      anon_sym_COLON_COLON,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(179), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [4761] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(198), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4782] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(208), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4803] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4824] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(192), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4845] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(217), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4866] = 7,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_as,
    ACTIONS(394), 1,
      anon_sym_PLUS,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4889] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(215), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4910] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(290), 1,
      sym_input_parameters,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4933] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [4948] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_output_parameters,
    STATE(260), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4971] = 7,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_EQ,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(392), 1,
      anon_sym_as,
    ACTIONS(394), 1,
      anon_sym_PLUS,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4994] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(202), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [5015] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [5036] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [5057] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(209), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [5078] = 7,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym_output_parameters,
    STATE(241), 1,
      sym_type_definition,
    STATE(267), 1,
      sym_identifier,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5101] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [5122] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(168), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [5143] = 5,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
    ACTIONS(537), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    STATE(214), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [5162] = 6,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      aux_sym_filepath_component_token1,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(215), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [5183] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(310), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(213), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [5204] = 6,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_identifier,
    STATE(291), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(215), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [5225] = 4,
    ACTIONS(549), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [5242] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(551), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
    ACTIONS(553), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5255] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(557), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5268] = 4,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5283] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(78), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5294] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5305] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5316] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(244), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5327] = 4,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [5342] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5353] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
    ACTIONS(573), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5366] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5377] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(254), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5388] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(256), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5399] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5410] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(260), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5421] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5432] = 5,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    STATE(267), 1,
      sym_identifier,
    STATE(282), 1,
      sym_type_definition,
    STATE(300), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5449] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5460] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(577), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5473] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5484] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      aux_sym_filepath_component_token1,
  [5495] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5509] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5523] = 3,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5535] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5549] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5563] = 4,
    ACTIONS(591), 1,
      aux_sym_filepath_component_token1,
    STATE(195), 1,
      sym_filepath_component,
    STATE(256), 1,
      sym_namespace,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5577] = 3,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5589] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5603] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5617] = 4,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_COLON,
    STATE(264), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5631] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5645] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5659] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5673] = 3,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5685] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5699] = 4,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5713] = 3,
    ACTIONS(620), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5725] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5739] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5753] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5767] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5781] = 3,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_using,
      aux_sym_filepath_component_token1,
  [5793] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5807] = 4,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5821] = 4,
    ACTIONS(639), 1,
      anon_sym_COLON,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5835] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5849] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5863] = 4,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5877] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5891] = 3,
    ACTIONS(650), 1,
      sym_number,
    STATE(304), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5902] = 3,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5913] = 3,
    ACTIONS(650), 1,
      sym_number,
    STATE(299), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5924] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(639), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [5933] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5944] = 3,
    ACTIONS(650), 1,
      sym_number,
    STATE(294), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5955] = 3,
    ACTIONS(650), 1,
      sym_number,
    STATE(289), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5966] = 3,
    ACTIONS(650), 1,
      sym_number,
    STATE(307), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5977] = 3,
    ACTIONS(650), 1,
      sym_number,
    STATE(288), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5988] = 3,
    ACTIONS(591), 1,
      aux_sym_filepath_component_token1,
    STATE(219), 1,
      sym_filepath_component,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5999] = 3,
    ACTIONS(447), 1,
      aux_sym_filepath_component_token1,
    STATE(272), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6010] = 3,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6021] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_RBRACE,
      aux_sym_filepath_component_token1,
  [6030] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6039] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6048] = 3,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6059] = 2,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6067] = 2,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6075] = 2,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6083] = 2,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6091] = 2,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6099] = 2,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6107] = 2,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6115] = 2,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6123] = 2,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6131] = 2,
    ACTIONS(678), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6139] = 2,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6147] = 2,
    ACTIONS(682), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6155] = 2,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6163] = 2,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6171] = 2,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6179] = 2,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6187] = 2,
    ACTIONS(692), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6195] = 2,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6203] = 2,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6211] = 2,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6219] = 2,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6227] = 2,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6235] = 2,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6243] = 2,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6251] = 2,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6259] = 2,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6267] = 2,
    ACTIONS(712), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6275] = 2,
    ACTIONS(714), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6283] = 2,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [6291] = 2,
    ACTIONS(718), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 325,
  [SMALL_STATE(8)] = 390,
  [SMALL_STATE(9)] = 455,
  [SMALL_STATE(10)] = 495,
  [SMALL_STATE(11)] = 535,
  [SMALL_STATE(12)] = 575,
  [SMALL_STATE(13)] = 613,
  [SMALL_STATE(14)] = 647,
  [SMALL_STATE(15)] = 671,
  [SMALL_STATE(16)] = 705,
  [SMALL_STATE(17)] = 739,
  [SMALL_STATE(18)] = 773,
  [SMALL_STATE(19)] = 807,
  [SMALL_STATE(20)] = 847,
  [SMALL_STATE(21)] = 881,
  [SMALL_STATE(22)] = 915,
  [SMALL_STATE(23)] = 949,
  [SMALL_STATE(24)] = 980,
  [SMALL_STATE(25)] = 1011,
  [SMALL_STATE(26)] = 1042,
  [SMALL_STATE(27)] = 1077,
  [SMALL_STATE(28)] = 1112,
  [SMALL_STATE(29)] = 1147,
  [SMALL_STATE(30)] = 1178,
  [SMALL_STATE(31)] = 1213,
  [SMALL_STATE(32)] = 1248,
  [SMALL_STATE(33)] = 1283,
  [SMALL_STATE(34)] = 1318,
  [SMALL_STATE(35)] = 1349,
  [SMALL_STATE(36)] = 1384,
  [SMALL_STATE(37)] = 1419,
  [SMALL_STATE(38)] = 1450,
  [SMALL_STATE(39)] = 1481,
  [SMALL_STATE(40)] = 1512,
  [SMALL_STATE(41)] = 1547,
  [SMALL_STATE(42)] = 1578,
  [SMALL_STATE(43)] = 1613,
  [SMALL_STATE(44)] = 1644,
  [SMALL_STATE(45)] = 1679,
  [SMALL_STATE(46)] = 1710,
  [SMALL_STATE(47)] = 1741,
  [SMALL_STATE(48)] = 1772,
  [SMALL_STATE(49)] = 1807,
  [SMALL_STATE(50)] = 1842,
  [SMALL_STATE(51)] = 1877,
  [SMALL_STATE(52)] = 1908,
  [SMALL_STATE(53)] = 1939,
  [SMALL_STATE(54)] = 1970,
  [SMALL_STATE(55)] = 2001,
  [SMALL_STATE(56)] = 2036,
  [SMALL_STATE(57)] = 2057,
  [SMALL_STATE(58)] = 2088,
  [SMALL_STATE(59)] = 2123,
  [SMALL_STATE(60)] = 2158,
  [SMALL_STATE(61)] = 2191,
  [SMALL_STATE(62)] = 2214,
  [SMALL_STATE(63)] = 2247,
  [SMALL_STATE(64)] = 2267,
  [SMALL_STATE(65)] = 2285,
  [SMALL_STATE(66)] = 2303,
  [SMALL_STATE(67)] = 2321,
  [SMALL_STATE(68)] = 2339,
  [SMALL_STATE(69)] = 2357,
  [SMALL_STATE(70)] = 2385,
  [SMALL_STATE(71)] = 2403,
  [SMALL_STATE(72)] = 2421,
  [SMALL_STATE(73)] = 2439,
  [SMALL_STATE(74)] = 2457,
  [SMALL_STATE(75)] = 2475,
  [SMALL_STATE(76)] = 2493,
  [SMALL_STATE(77)] = 2511,
  [SMALL_STATE(78)] = 2529,
  [SMALL_STATE(79)] = 2551,
  [SMALL_STATE(80)] = 2568,
  [SMALL_STATE(81)] = 2585,
  [SMALL_STATE(82)] = 2602,
  [SMALL_STATE(83)] = 2621,
  [SMALL_STATE(84)] = 2638,
  [SMALL_STATE(85)] = 2657,
  [SMALL_STATE(86)] = 2676,
  [SMALL_STATE(87)] = 2695,
  [SMALL_STATE(88)] = 2714,
  [SMALL_STATE(89)] = 2733,
  [SMALL_STATE(90)] = 2750,
  [SMALL_STATE(91)] = 2769,
  [SMALL_STATE(92)] = 2786,
  [SMALL_STATE(93)] = 2803,
  [SMALL_STATE(94)] = 2822,
  [SMALL_STATE(95)] = 2845,
  [SMALL_STATE(96)] = 2864,
  [SMALL_STATE(97)] = 2883,
  [SMALL_STATE(98)] = 2902,
  [SMALL_STATE(99)] = 2921,
  [SMALL_STATE(100)] = 2940,
  [SMALL_STATE(101)] = 2957,
  [SMALL_STATE(102)] = 2974,
  [SMALL_STATE(103)] = 2997,
  [SMALL_STATE(104)] = 3016,
  [SMALL_STATE(105)] = 3039,
  [SMALL_STATE(106)] = 3057,
  [SMALL_STATE(107)] = 3075,
  [SMALL_STATE(108)] = 3093,
  [SMALL_STATE(109)] = 3111,
  [SMALL_STATE(110)] = 3129,
  [SMALL_STATE(111)] = 3147,
  [SMALL_STATE(112)] = 3165,
  [SMALL_STATE(113)] = 3183,
  [SMALL_STATE(114)] = 3201,
  [SMALL_STATE(115)] = 3223,
  [SMALL_STATE(116)] = 3241,
  [SMALL_STATE(117)] = 3263,
  [SMALL_STATE(118)] = 3281,
  [SMALL_STATE(119)] = 3299,
  [SMALL_STATE(120)] = 3317,
  [SMALL_STATE(121)] = 3335,
  [SMALL_STATE(122)] = 3353,
  [SMALL_STATE(123)] = 3370,
  [SMALL_STATE(124)] = 3387,
  [SMALL_STATE(125)] = 3404,
  [SMALL_STATE(126)] = 3421,
  [SMALL_STATE(127)] = 3438,
  [SMALL_STATE(128)] = 3455,
  [SMALL_STATE(129)] = 3472,
  [SMALL_STATE(130)] = 3489,
  [SMALL_STATE(131)] = 3506,
  [SMALL_STATE(132)] = 3527,
  [SMALL_STATE(133)] = 3544,
  [SMALL_STATE(134)] = 3569,
  [SMALL_STATE(135)] = 3586,
  [SMALL_STATE(136)] = 3603,
  [SMALL_STATE(137)] = 3620,
  [SMALL_STATE(138)] = 3637,
  [SMALL_STATE(139)] = 3654,
  [SMALL_STATE(140)] = 3671,
  [SMALL_STATE(141)] = 3688,
  [SMALL_STATE(142)] = 3705,
  [SMALL_STATE(143)] = 3732,
  [SMALL_STATE(144)] = 3749,
  [SMALL_STATE(145)] = 3766,
  [SMALL_STATE(146)] = 3783,
  [SMALL_STATE(147)] = 3800,
  [SMALL_STATE(148)] = 3817,
  [SMALL_STATE(149)] = 3836,
  [SMALL_STATE(150)] = 3853,
  [SMALL_STATE(151)] = 3870,
  [SMALL_STATE(152)] = 3887,
  [SMALL_STATE(153)] = 3904,
  [SMALL_STATE(154)] = 3921,
  [SMALL_STATE(155)] = 3938,
  [SMALL_STATE(156)] = 3955,
  [SMALL_STATE(157)] = 3971,
  [SMALL_STATE(158)] = 3987,
  [SMALL_STATE(159)] = 4003,
  [SMALL_STATE(160)] = 4019,
  [SMALL_STATE(161)] = 4035,
  [SMALL_STATE(162)] = 4061,
  [SMALL_STATE(163)] = 4079,
  [SMALL_STATE(164)] = 4095,
  [SMALL_STATE(165)] = 4111,
  [SMALL_STATE(166)] = 4127,
  [SMALL_STATE(167)] = 4143,
  [SMALL_STATE(168)] = 4159,
  [SMALL_STATE(169)] = 4180,
  [SMALL_STATE(170)] = 4201,
  [SMALL_STATE(171)] = 4224,
  [SMALL_STATE(172)] = 4247,
  [SMALL_STATE(173)] = 4268,
  [SMALL_STATE(174)] = 4291,
  [SMALL_STATE(175)] = 4314,
  [SMALL_STATE(176)] = 4337,
  [SMALL_STATE(177)] = 4358,
  [SMALL_STATE(178)] = 4379,
  [SMALL_STATE(179)] = 4400,
  [SMALL_STATE(180)] = 4419,
  [SMALL_STATE(181)] = 4440,
  [SMALL_STATE(182)] = 4463,
  [SMALL_STATE(183)] = 4484,
  [SMALL_STATE(184)] = 4507,
  [SMALL_STATE(185)] = 4530,
  [SMALL_STATE(186)] = 4551,
  [SMALL_STATE(187)] = 4572,
  [SMALL_STATE(188)] = 4593,
  [SMALL_STATE(189)] = 4616,
  [SMALL_STATE(190)] = 4637,
  [SMALL_STATE(191)] = 4658,
  [SMALL_STATE(192)] = 4679,
  [SMALL_STATE(193)] = 4700,
  [SMALL_STATE(194)] = 4721,
  [SMALL_STATE(195)] = 4742,
  [SMALL_STATE(196)] = 4761,
  [SMALL_STATE(197)] = 4782,
  [SMALL_STATE(198)] = 4803,
  [SMALL_STATE(199)] = 4824,
  [SMALL_STATE(200)] = 4845,
  [SMALL_STATE(201)] = 4866,
  [SMALL_STATE(202)] = 4889,
  [SMALL_STATE(203)] = 4910,
  [SMALL_STATE(204)] = 4933,
  [SMALL_STATE(205)] = 4948,
  [SMALL_STATE(206)] = 4971,
  [SMALL_STATE(207)] = 4994,
  [SMALL_STATE(208)] = 5015,
  [SMALL_STATE(209)] = 5036,
  [SMALL_STATE(210)] = 5057,
  [SMALL_STATE(211)] = 5078,
  [SMALL_STATE(212)] = 5101,
  [SMALL_STATE(213)] = 5122,
  [SMALL_STATE(214)] = 5143,
  [SMALL_STATE(215)] = 5162,
  [SMALL_STATE(216)] = 5183,
  [SMALL_STATE(217)] = 5204,
  [SMALL_STATE(218)] = 5225,
  [SMALL_STATE(219)] = 5242,
  [SMALL_STATE(220)] = 5255,
  [SMALL_STATE(221)] = 5268,
  [SMALL_STATE(222)] = 5283,
  [SMALL_STATE(223)] = 5294,
  [SMALL_STATE(224)] = 5305,
  [SMALL_STATE(225)] = 5316,
  [SMALL_STATE(226)] = 5327,
  [SMALL_STATE(227)] = 5342,
  [SMALL_STATE(228)] = 5353,
  [SMALL_STATE(229)] = 5366,
  [SMALL_STATE(230)] = 5377,
  [SMALL_STATE(231)] = 5388,
  [SMALL_STATE(232)] = 5399,
  [SMALL_STATE(233)] = 5410,
  [SMALL_STATE(234)] = 5421,
  [SMALL_STATE(235)] = 5432,
  [SMALL_STATE(236)] = 5449,
  [SMALL_STATE(237)] = 5460,
  [SMALL_STATE(238)] = 5473,
  [SMALL_STATE(239)] = 5484,
  [SMALL_STATE(240)] = 5495,
  [SMALL_STATE(241)] = 5509,
  [SMALL_STATE(242)] = 5523,
  [SMALL_STATE(243)] = 5535,
  [SMALL_STATE(244)] = 5549,
  [SMALL_STATE(245)] = 5563,
  [SMALL_STATE(246)] = 5577,
  [SMALL_STATE(247)] = 5589,
  [SMALL_STATE(248)] = 5603,
  [SMALL_STATE(249)] = 5617,
  [SMALL_STATE(250)] = 5631,
  [SMALL_STATE(251)] = 5645,
  [SMALL_STATE(252)] = 5659,
  [SMALL_STATE(253)] = 5673,
  [SMALL_STATE(254)] = 5685,
  [SMALL_STATE(255)] = 5699,
  [SMALL_STATE(256)] = 5713,
  [SMALL_STATE(257)] = 5725,
  [SMALL_STATE(258)] = 5739,
  [SMALL_STATE(259)] = 5753,
  [SMALL_STATE(260)] = 5767,
  [SMALL_STATE(261)] = 5781,
  [SMALL_STATE(262)] = 5793,
  [SMALL_STATE(263)] = 5807,
  [SMALL_STATE(264)] = 5821,
  [SMALL_STATE(265)] = 5835,
  [SMALL_STATE(266)] = 5849,
  [SMALL_STATE(267)] = 5863,
  [SMALL_STATE(268)] = 5877,
  [SMALL_STATE(269)] = 5891,
  [SMALL_STATE(270)] = 5902,
  [SMALL_STATE(271)] = 5913,
  [SMALL_STATE(272)] = 5924,
  [SMALL_STATE(273)] = 5933,
  [SMALL_STATE(274)] = 5944,
  [SMALL_STATE(275)] = 5955,
  [SMALL_STATE(276)] = 5966,
  [SMALL_STATE(277)] = 5977,
  [SMALL_STATE(278)] = 5988,
  [SMALL_STATE(279)] = 5999,
  [SMALL_STATE(280)] = 6010,
  [SMALL_STATE(281)] = 6021,
  [SMALL_STATE(282)] = 6030,
  [SMALL_STATE(283)] = 6039,
  [SMALL_STATE(284)] = 6048,
  [SMALL_STATE(285)] = 6059,
  [SMALL_STATE(286)] = 6067,
  [SMALL_STATE(287)] = 6075,
  [SMALL_STATE(288)] = 6083,
  [SMALL_STATE(289)] = 6091,
  [SMALL_STATE(290)] = 6099,
  [SMALL_STATE(291)] = 6107,
  [SMALL_STATE(292)] = 6115,
  [SMALL_STATE(293)] = 6123,
  [SMALL_STATE(294)] = 6131,
  [SMALL_STATE(295)] = 6139,
  [SMALL_STATE(296)] = 6147,
  [SMALL_STATE(297)] = 6155,
  [SMALL_STATE(298)] = 6163,
  [SMALL_STATE(299)] = 6171,
  [SMALL_STATE(300)] = 6179,
  [SMALL_STATE(301)] = 6187,
  [SMALL_STATE(302)] = 6195,
  [SMALL_STATE(303)] = 6203,
  [SMALL_STATE(304)] = 6211,
  [SMALL_STATE(305)] = 6219,
  [SMALL_STATE(306)] = 6227,
  [SMALL_STATE(307)] = 6235,
  [SMALL_STATE(308)] = 6243,
  [SMALL_STATE(309)] = 6251,
  [SMALL_STATE(310)] = 6259,
  [SMALL_STATE(311)] = 6267,
  [SMALL_STATE(312)] = 6275,
  [SMALL_STATE(313)] = 6283,
  [SMALL_STATE(314)] = 6291,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(139),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(133),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(133),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 3, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_of, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 3, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_definition, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_definition, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_of, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(14),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2), SHIFT_REPEAT(278),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2), SHIFT_REPEAT(14),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_namespace, 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_namespace, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_definition, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_definition, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath_component, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath_component, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_definition, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_variable_definition, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(15),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 2),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2), SHIFT_REPEAT(235),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(279),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_size, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [692] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
