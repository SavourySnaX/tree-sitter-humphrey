#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 305
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_filepath_component = 27,
  sym_identifier = 28,
  sym_block_comment = 29,
  sym_source_file = 30,
  sym__global_definition = 31,
  sym_global_variable_definition = 32,
  sym_function_definition = 33,
  sym_block = 34,
  sym_statement = 35,
  sym_statement_expression = 36,
  sym_if_statement = 37,
  sym_else_statement = 38,
  sym_while_statement = 39,
  sym_local_variable_definition = 40,
  sym_variable_definition = 41,
  sym_type_definition = 42,
  sym_identifier_list = 43,
  sym_type = 44,
  sym_function_type = 45,
  sym_input_parameters = 46,
  sym_output_parameters = 47,
  sym_array_type = 48,
  sym_alias_type = 49,
  sym_enum_type = 50,
  sym_enum_member = 51,
  sym_struct_type = 52,
  sym_struct_member = 53,
  sym_pointer_type = 54,
  sym_array_size = 55,
  sym_using_statement = 56,
  sym_namespace = 57,
  sym__rest_of_namespace = 58,
  sym_expression = 59,
  sym__expression = 60,
  sym_subscript = 61,
  sym_address_of = 62,
  sym_assignment = 63,
  sym_dot = 64,
  sym_function_call = 65,
  sym_function_call_args = 66,
  sym_as = 67,
  sym_sum = 68,
  sym_product = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_block_repeat1 = 71,
  aux_sym_identifier_list_repeat1 = 72,
  aux_sym_input_parameters_repeat1 = 73,
  aux_sym_alias_type_repeat1 = 74,
  aux_sym_enum_type_repeat1 = 75,
  aux_sym_namespace_repeat1 = 76,
  aux_sym_function_call_args_repeat1 = 77,
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
  [sym_filepath_component] = "filepath_component",
  [sym_identifier] = "identifier",
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
  [sym_filepath_component] = sym_filepath_component,
  [sym_identifier] = sym_identifier,
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
  [sym_filepath_component] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 5,
  [8] = 5,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 13,
  [20] = 20,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 25,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 32,
  [36] = 24,
  [37] = 23,
  [38] = 38,
  [39] = 39,
  [40] = 29,
  [41] = 41,
  [42] = 25,
  [43] = 32,
  [44] = 38,
  [45] = 25,
  [46] = 39,
  [47] = 24,
  [48] = 41,
  [49] = 39,
  [50] = 38,
  [51] = 23,
  [52] = 25,
  [53] = 22,
  [54] = 24,
  [55] = 41,
  [56] = 56,
  [57] = 57,
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
  [72] = 72,
  [73] = 73,
  [74] = 63,
  [75] = 61,
  [76] = 57,
  [77] = 77,
  [78] = 78,
  [79] = 72,
  [80] = 73,
  [81] = 81,
  [82] = 82,
  [83] = 70,
  [84] = 56,
  [85] = 62,
  [86] = 69,
  [87] = 87,
  [88] = 58,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 65,
  [94] = 94,
  [95] = 71,
  [96] = 96,
  [97] = 60,
  [98] = 59,
  [99] = 66,
  [100] = 57,
  [101] = 101,
  [102] = 71,
  [103] = 70,
  [104] = 66,
  [105] = 72,
  [106] = 73,
  [107] = 58,
  [108] = 59,
  [109] = 60,
  [110] = 69,
  [111] = 61,
  [112] = 62,
  [113] = 56,
  [114] = 63,
  [115] = 65,
  [116] = 116,
  [117] = 87,
  [118] = 118,
  [119] = 119,
  [120] = 71,
  [121] = 72,
  [122] = 73,
  [123] = 89,
  [124] = 124,
  [125] = 82,
  [126] = 60,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 70,
  [131] = 69,
  [132] = 91,
  [133] = 90,
  [134] = 92,
  [135] = 101,
  [136] = 94,
  [137] = 137,
  [138] = 66,
  [139] = 65,
  [140] = 116,
  [141] = 63,
  [142] = 59,
  [143] = 143,
  [144] = 77,
  [145] = 96,
  [146] = 58,
  [147] = 78,
  [148] = 129,
  [149] = 62,
  [150] = 61,
  [151] = 91,
  [152] = 82,
  [153] = 77,
  [154] = 78,
  [155] = 89,
  [156] = 129,
  [157] = 57,
  [158] = 90,
  [159] = 87,
  [160] = 96,
  [161] = 94,
  [162] = 92,
  [163] = 163,
  [164] = 129,
  [165] = 165,
  [166] = 166,
  [167] = 163,
  [168] = 168,
  [169] = 163,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 171,
  [175] = 175,
  [176] = 172,
  [177] = 177,
  [178] = 178,
  [179] = 178,
  [180] = 171,
  [181] = 181,
  [182] = 177,
  [183] = 181,
  [184] = 173,
  [185] = 175,
  [186] = 186,
  [187] = 177,
  [188] = 172,
  [189] = 175,
  [190] = 173,
  [191] = 181,
  [192] = 181,
  [193] = 171,
  [194] = 178,
  [195] = 178,
  [196] = 177,
  [197] = 172,
  [198] = 177,
  [199] = 175,
  [200] = 178,
  [201] = 173,
  [202] = 202,
  [203] = 171,
  [204] = 181,
  [205] = 173,
  [206] = 175,
  [207] = 207,
  [208] = 202,
  [209] = 172,
  [210] = 202,
  [211] = 202,
  [212] = 202,
  [213] = 66,
  [214] = 60,
  [215] = 215,
  [216] = 71,
  [217] = 217,
  [218] = 218,
  [219] = 72,
  [220] = 220,
  [221] = 73,
  [222] = 222,
  [223] = 58,
  [224] = 61,
  [225] = 70,
  [226] = 69,
  [227] = 65,
  [228] = 63,
  [229] = 59,
  [230] = 62,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 232,
  [240] = 240,
  [241] = 241,
  [242] = 241,
  [243] = 232,
  [244] = 241,
  [245] = 245,
  [246] = 101,
  [247] = 240,
  [248] = 240,
  [249] = 249,
  [250] = 241,
  [251] = 238,
  [252] = 252,
  [253] = 241,
  [254] = 238,
  [255] = 255,
  [256] = 256,
  [257] = 240,
  [258] = 116,
  [259] = 240,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 264,
  [267] = 267,
  [268] = 264,
  [269] = 269,
  [270] = 264,
  [271] = 264,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 275,
  [277] = 277,
  [278] = 278,
  [279] = 274,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 274,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 288,
  [293] = 288,
  [294] = 275,
  [295] = 274,
  [296] = 288,
  [297] = 275,
  [298] = 298,
  [299] = 288,
  [300] = 275,
  [301] = 301,
  [302] = 274,
  [303] = 303,
  [304] = 304,
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

static inline bool sym_filepath_component_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
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
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
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
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
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
      : (c <= 2986 || (c < 4176
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
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
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
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
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
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
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

static inline bool sym_identifier_character_set_1(int32_t c) {
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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

static inline bool sym_identifier_character_set_4(int32_t c) {
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(52);
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
      if (sym_number_character_set_1(lookahead)) ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym_number_character_set_1(lookahead)) ADVANCE(42);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_number_character_set_1(lookahead)) ADVANCE(42);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(52);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_number_character_set_1(lookahead)) ADVANCE(42);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(37);
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
      if (sym_number_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(61);
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
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(41);
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
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      if (sym_filepath_component_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 12:
      if (sym_number_character_set_1(lookahead)) ADVANCE(43);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(13)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(67);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(14)
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
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
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
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
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_using);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
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
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(42);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(67);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (sym_number_character_set_2(lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_filepath_component);
      if (sym_filepath_component_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ';') ADVANCE(25);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(23);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(24);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(22);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(34);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(55);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(64);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(58);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(57);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(63);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(46);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(39);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(54);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(47);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(60);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(67);
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
  [14] = {.lex_state = 7, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 1, .external_lex_state = 1},
  [20] = {.lex_state = 7, .external_lex_state = 1},
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 7, .external_lex_state = 1},
  [25] = {.lex_state = 7, .external_lex_state = 1},
  [26] = {.lex_state = 7, .external_lex_state = 1},
  [27] = {.lex_state = 1, .external_lex_state = 1},
  [28] = {.lex_state = 7, .external_lex_state = 1},
  [29] = {.lex_state = 7, .external_lex_state = 1},
  [30] = {.lex_state = 7, .external_lex_state = 1},
  [31] = {.lex_state = 7, .external_lex_state = 1},
  [32] = {.lex_state = 1, .external_lex_state = 1},
  [33] = {.lex_state = 7, .external_lex_state = 1},
  [34] = {.lex_state = 7, .external_lex_state = 1},
  [35] = {.lex_state = 1, .external_lex_state = 1},
  [36] = {.lex_state = 7, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 7, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 7, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 1, .external_lex_state = 1},
  [45] = {.lex_state = 7, .external_lex_state = 1},
  [46] = {.lex_state = 1, .external_lex_state = 1},
  [47] = {.lex_state = 7, .external_lex_state = 1},
  [48] = {.lex_state = 1, .external_lex_state = 1},
  [49] = {.lex_state = 1, .external_lex_state = 1},
  [50] = {.lex_state = 1, .external_lex_state = 1},
  [51] = {.lex_state = 1, .external_lex_state = 1},
  [52] = {.lex_state = 7, .external_lex_state = 1},
  [53] = {.lex_state = 1, .external_lex_state = 1},
  [54] = {.lex_state = 7, .external_lex_state = 1},
  [55] = {.lex_state = 1, .external_lex_state = 1},
  [56] = {.lex_state = 5, .external_lex_state = 1},
  [57] = {.lex_state = 5, .external_lex_state = 1},
  [58] = {.lex_state = 5, .external_lex_state = 1},
  [59] = {.lex_state = 5, .external_lex_state = 1},
  [60] = {.lex_state = 5, .external_lex_state = 1},
  [61] = {.lex_state = 5, .external_lex_state = 1},
  [62] = {.lex_state = 5, .external_lex_state = 1},
  [63] = {.lex_state = 5, .external_lex_state = 1},
  [64] = {.lex_state = 14, .external_lex_state = 1},
  [65] = {.lex_state = 5, .external_lex_state = 1},
  [66] = {.lex_state = 5, .external_lex_state = 1},
  [67] = {.lex_state = 5, .external_lex_state = 1},
  [68] = {.lex_state = 14, .external_lex_state = 1},
  [69] = {.lex_state = 5, .external_lex_state = 1},
  [70] = {.lex_state = 5, .external_lex_state = 1},
  [71] = {.lex_state = 5, .external_lex_state = 1},
  [72] = {.lex_state = 5, .external_lex_state = 1},
  [73] = {.lex_state = 5, .external_lex_state = 1},
  [74] = {.lex_state = 13, .external_lex_state = 1},
  [75] = {.lex_state = 13, .external_lex_state = 1},
  [76] = {.lex_state = 13, .external_lex_state = 1},
  [77] = {.lex_state = 5, .external_lex_state = 1},
  [78] = {.lex_state = 5, .external_lex_state = 1},
  [79] = {.lex_state = 13, .external_lex_state = 1},
  [80] = {.lex_state = 13, .external_lex_state = 1},
  [81] = {.lex_state = 3, .external_lex_state = 1},
  [82] = {.lex_state = 5, .external_lex_state = 1},
  [83] = {.lex_state = 13, .external_lex_state = 1},
  [84] = {.lex_state = 13, .external_lex_state = 1},
  [85] = {.lex_state = 13, .external_lex_state = 1},
  [86] = {.lex_state = 13, .external_lex_state = 1},
  [87] = {.lex_state = 5, .external_lex_state = 1},
  [88] = {.lex_state = 13, .external_lex_state = 1},
  [89] = {.lex_state = 5, .external_lex_state = 1},
  [90] = {.lex_state = 5, .external_lex_state = 1},
  [91] = {.lex_state = 5, .external_lex_state = 1},
  [92] = {.lex_state = 5, .external_lex_state = 1},
  [93] = {.lex_state = 13, .external_lex_state = 1},
  [94] = {.lex_state = 5, .external_lex_state = 1},
  [95] = {.lex_state = 13, .external_lex_state = 1},
  [96] = {.lex_state = 5, .external_lex_state = 1},
  [97] = {.lex_state = 13, .external_lex_state = 1},
  [98] = {.lex_state = 13, .external_lex_state = 1},
  [99] = {.lex_state = 13, .external_lex_state = 1},
  [100] = {.lex_state = 6, .external_lex_state = 1},
  [101] = {.lex_state = 3, .external_lex_state = 1},
  [102] = {.lex_state = 6, .external_lex_state = 1},
  [103] = {.lex_state = 6, .external_lex_state = 1},
  [104] = {.lex_state = 6, .external_lex_state = 1},
  [105] = {.lex_state = 6, .external_lex_state = 1},
  [106] = {.lex_state = 6, .external_lex_state = 1},
  [107] = {.lex_state = 6, .external_lex_state = 1},
  [108] = {.lex_state = 6, .external_lex_state = 1},
  [109] = {.lex_state = 6, .external_lex_state = 1},
  [110] = {.lex_state = 6, .external_lex_state = 1},
  [111] = {.lex_state = 6, .external_lex_state = 1},
  [112] = {.lex_state = 6, .external_lex_state = 1},
  [113] = {.lex_state = 6, .external_lex_state = 1},
  [114] = {.lex_state = 6, .external_lex_state = 1},
  [115] = {.lex_state = 6, .external_lex_state = 1},
  [116] = {.lex_state = 3, .external_lex_state = 1},
  [117] = {.lex_state = 13, .external_lex_state = 1},
  [118] = {.lex_state = 2, .external_lex_state = 1},
  [119] = {.lex_state = 2, .external_lex_state = 1},
  [120] = {.lex_state = 14, .external_lex_state = 1},
  [121] = {.lex_state = 14, .external_lex_state = 1},
  [122] = {.lex_state = 14, .external_lex_state = 1},
  [123] = {.lex_state = 13, .external_lex_state = 1},
  [124] = {.lex_state = 2, .external_lex_state = 1},
  [125] = {.lex_state = 13, .external_lex_state = 1},
  [126] = {.lex_state = 14, .external_lex_state = 1},
  [127] = {.lex_state = 2, .external_lex_state = 1},
  [128] = {.lex_state = 2, .external_lex_state = 1},
  [129] = {.lex_state = 5, .external_lex_state = 1},
  [130] = {.lex_state = 14, .external_lex_state = 1},
  [131] = {.lex_state = 14, .external_lex_state = 1},
  [132] = {.lex_state = 13, .external_lex_state = 1},
  [133] = {.lex_state = 13, .external_lex_state = 1},
  [134] = {.lex_state = 13, .external_lex_state = 1},
  [135] = {.lex_state = 2, .external_lex_state = 1},
  [136] = {.lex_state = 13, .external_lex_state = 1},
  [137] = {.lex_state = 2, .external_lex_state = 1},
  [138] = {.lex_state = 14, .external_lex_state = 1},
  [139] = {.lex_state = 14, .external_lex_state = 1},
  [140] = {.lex_state = 2, .external_lex_state = 1},
  [141] = {.lex_state = 14, .external_lex_state = 1},
  [142] = {.lex_state = 14, .external_lex_state = 1},
  [143] = {.lex_state = 14, .external_lex_state = 1},
  [144] = {.lex_state = 13, .external_lex_state = 1},
  [145] = {.lex_state = 13, .external_lex_state = 1},
  [146] = {.lex_state = 14, .external_lex_state = 1},
  [147] = {.lex_state = 13, .external_lex_state = 1},
  [148] = {.lex_state = 13, .external_lex_state = 1},
  [149] = {.lex_state = 14, .external_lex_state = 1},
  [150] = {.lex_state = 14, .external_lex_state = 1},
  [151] = {.lex_state = 6, .external_lex_state = 1},
  [152] = {.lex_state = 6, .external_lex_state = 1},
  [153] = {.lex_state = 6, .external_lex_state = 1},
  [154] = {.lex_state = 6, .external_lex_state = 1},
  [155] = {.lex_state = 6, .external_lex_state = 1},
  [156] = {.lex_state = 6, .external_lex_state = 1},
  [157] = {.lex_state = 5, .external_lex_state = 1},
  [158] = {.lex_state = 6, .external_lex_state = 1},
  [159] = {.lex_state = 6, .external_lex_state = 1},
  [160] = {.lex_state = 6, .external_lex_state = 1},
  [161] = {.lex_state = 6, .external_lex_state = 1},
  [162] = {.lex_state = 6, .external_lex_state = 1},
  [163] = {.lex_state = 5, .external_lex_state = 1},
  [164] = {.lex_state = 5, .external_lex_state = 1},
  [165] = {.lex_state = 14, .external_lex_state = 1},
  [166] = {.lex_state = 14, .external_lex_state = 1},
  [167] = {.lex_state = 5, .external_lex_state = 1},
  [168] = {.lex_state = 14, .external_lex_state = 1},
  [169] = {.lex_state = 5, .external_lex_state = 1},
  [170] = {.lex_state = 14, .external_lex_state = 1},
  [171] = {.lex_state = 8, .external_lex_state = 1},
  [172] = {.lex_state = 8, .external_lex_state = 1},
  [173] = {.lex_state = 8, .external_lex_state = 1},
  [174] = {.lex_state = 8, .external_lex_state = 1},
  [175] = {.lex_state = 8, .external_lex_state = 1},
  [176] = {.lex_state = 8, .external_lex_state = 1},
  [177] = {.lex_state = 8, .external_lex_state = 1},
  [178] = {.lex_state = 8, .external_lex_state = 1},
  [179] = {.lex_state = 8, .external_lex_state = 1},
  [180] = {.lex_state = 8, .external_lex_state = 1},
  [181] = {.lex_state = 8, .external_lex_state = 1},
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
  [195] = {.lex_state = 8, .external_lex_state = 1},
  [196] = {.lex_state = 8, .external_lex_state = 1},
  [197] = {.lex_state = 8, .external_lex_state = 1},
  [198] = {.lex_state = 8, .external_lex_state = 1},
  [199] = {.lex_state = 8, .external_lex_state = 1},
  [200] = {.lex_state = 8, .external_lex_state = 1},
  [201] = {.lex_state = 8, .external_lex_state = 1},
  [202] = {.lex_state = 8, .external_lex_state = 1},
  [203] = {.lex_state = 8, .external_lex_state = 1},
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
  [215] = {.lex_state = 14, .external_lex_state = 1},
  [216] = {.lex_state = 8, .external_lex_state = 1},
  [217] = {.lex_state = 8, .external_lex_state = 1},
  [218] = {.lex_state = 14, .external_lex_state = 1},
  [219] = {.lex_state = 8, .external_lex_state = 1},
  [220] = {.lex_state = 14, .external_lex_state = 1},
  [221] = {.lex_state = 8, .external_lex_state = 1},
  [222] = {.lex_state = 14, .external_lex_state = 1},
  [223] = {.lex_state = 8, .external_lex_state = 1},
  [224] = {.lex_state = 8, .external_lex_state = 1},
  [225] = {.lex_state = 8, .external_lex_state = 1},
  [226] = {.lex_state = 8, .external_lex_state = 1},
  [227] = {.lex_state = 8, .external_lex_state = 1},
  [228] = {.lex_state = 8, .external_lex_state = 1},
  [229] = {.lex_state = 8, .external_lex_state = 1},
  [230] = {.lex_state = 8, .external_lex_state = 1},
  [231] = {.lex_state = 0, .external_lex_state = 1},
  [232] = {.lex_state = 0, .external_lex_state = 1},
  [233] = {.lex_state = 8, .external_lex_state = 1},
  [234] = {.lex_state = 2, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 14, .external_lex_state = 1},
  [237] = {.lex_state = 2, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 0, .external_lex_state = 1},
  [240] = {.lex_state = 0, .external_lex_state = 1},
  [241] = {.lex_state = 0, .external_lex_state = 1},
  [242] = {.lex_state = 0, .external_lex_state = 1},
  [243] = {.lex_state = 0, .external_lex_state = 1},
  [244] = {.lex_state = 0, .external_lex_state = 1},
  [245] = {.lex_state = 2, .external_lex_state = 1},
  [246] = {.lex_state = 14, .external_lex_state = 1},
  [247] = {.lex_state = 0, .external_lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 14, .external_lex_state = 1},
  [250] = {.lex_state = 0, .external_lex_state = 1},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 0, .external_lex_state = 1},
  [253] = {.lex_state = 0, .external_lex_state = 1},
  [254] = {.lex_state = 0, .external_lex_state = 1},
  [255] = {.lex_state = 14, .external_lex_state = 1},
  [256] = {.lex_state = 0, .external_lex_state = 1},
  [257] = {.lex_state = 0, .external_lex_state = 1},
  [258] = {.lex_state = 14, .external_lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 1},
  [260] = {.lex_state = 0, .external_lex_state = 1},
  [261] = {.lex_state = 9, .external_lex_state = 1},
  [262] = {.lex_state = 0, .external_lex_state = 1},
  [263] = {.lex_state = 8, .external_lex_state = 1},
  [264] = {.lex_state = 5, .external_lex_state = 1},
  [265] = {.lex_state = 0, .external_lex_state = 1},
  [266] = {.lex_state = 5, .external_lex_state = 1},
  [267] = {.lex_state = 0, .external_lex_state = 1},
  [268] = {.lex_state = 5, .external_lex_state = 1},
  [269] = {.lex_state = 2, .external_lex_state = 1},
  [270] = {.lex_state = 5, .external_lex_state = 1},
  [271] = {.lex_state = 5, .external_lex_state = 1},
  [272] = {.lex_state = 0, .external_lex_state = 1},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 0, .external_lex_state = 1},
  [275] = {.lex_state = 0, .external_lex_state = 1},
  [276] = {.lex_state = 0, .external_lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 1},
  [278] = {.lex_state = 8, .external_lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 1},
  [280] = {.lex_state = 0, .external_lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 1},
  [282] = {.lex_state = 2, .external_lex_state = 1},
  [283] = {.lex_state = 0, .external_lex_state = 1},
  [284] = {.lex_state = 2, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 9, .external_lex_state = 1},
  [291] = {.lex_state = 0, .external_lex_state = 1},
  [292] = {.lex_state = 0, .external_lex_state = 1},
  [293] = {.lex_state = 0, .external_lex_state = 1},
  [294] = {.lex_state = 0, .external_lex_state = 1},
  [295] = {.lex_state = 0, .external_lex_state = 1},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 2, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 0, .external_lex_state = 1},
  [301] = {.lex_state = 2, .external_lex_state = 1},
  [302] = {.lex_state = 0, .external_lex_state = 1},
  [303] = {.lex_state = 2, .external_lex_state = 1},
  [304] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_identifier] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(287),
    [sym__global_definition] = STATE(68),
    [sym_global_variable_definition] = STATE(68),
    [sym_function_definition] = STATE(68),
    [sym_variable_definition] = STATE(255),
    [sym_type_definition] = STATE(220),
    [sym_identifier_list] = STATE(282),
    [sym_using_statement] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
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
      sym_identifier,
    STATE(277), 1,
      sym_variable_definition,
    STATE(284), 1,
      sym_identifier_list,
    STATE(286), 1,
      sym_expression,
    STATE(289), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(8), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(137), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [62] = 16,
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
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variable_definition,
    STATE(284), 1,
      sym_identifier_list,
    STATE(286), 1,
      sym_expression,
    STATE(289), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(137), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [124] = 16,
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
      sym_identifier,
    STATE(277), 1,
      sym_variable_definition,
    STATE(284), 1,
      sym_identifier_list,
    STATE(286), 1,
      sym_expression,
    STATE(289), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(137), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [186] = 16,
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
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variable_definition,
    STATE(284), 1,
      sym_identifier_list,
    STATE(286), 1,
      sym_expression,
    STATE(289), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(137), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [248] = 16,
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
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variable_definition,
    STATE(284), 1,
      sym_identifier_list,
    STATE(286), 1,
      sym_expression,
    STATE(289), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(137), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [310] = 16,
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
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variable_definition,
    STATE(284), 1,
      sym_identifier_list,
    STATE(286), 1,
      sym_expression,
    STATE(289), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(137), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [372] = 16,
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
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variable_definition,
    STATE(284), 1,
      sym_identifier_list,
    STATE(286), 1,
      sym_expression,
    STATE(289), 1,
      sym_type_definition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(4), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(137), 4,
      sym_statement_expression,
      sym_if_statement,
      sym_while_statement,
      sym_local_variable_definition,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [434] = 9,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(94), 1,
      sym_function_call_args,
    STATE(238), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [471] = 9,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_function_call_args,
    STATE(254), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [508] = 9,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_function_call_args,
    STATE(251), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [545] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(68), 1,
      sym_number,
    ACTIONS(70), 1,
      sym_string,
    STATE(265), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(164), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [576] = 7,
    ACTIONS(72), 1,
      anon_sym_AMP,
    ACTIONS(74), 1,
      sym_number,
    ACTIONS(76), 1,
      sym_string,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(218), 1,
      sym_expression,
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
  [607] = 11,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      sym_bit_type,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(143), 1,
      sym_type,
    STATE(165), 1,
      sym_function_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(146), 5,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [646] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(68), 1,
      sym_number,
    ACTIONS(70), 1,
      sym_string,
    STATE(267), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(164), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [677] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(222), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [708] = 7,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(96), 1,
      sym_number,
    ACTIONS(98), 1,
      sym_string,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(263), 1,
      sym_expression,
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
  [739] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(260), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [770] = 7,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(218), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(129), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [801] = 9,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(102), 1,
      anon_sym_EQ,
    STATE(143), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(88), 2,
      sym_bit_type,
      sym_identifier,
    STATE(146), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [836] = 7,
    ACTIONS(72), 1,
      anon_sym_AMP,
    ACTIONS(74), 1,
      sym_number,
    ACTIONS(76), 1,
      sym_string,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(222), 1,
      sym_expression,
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
  [867] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(104), 1,
      sym_number,
    ACTIONS(106), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(167), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [895] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(110), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(92), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [923] = 8,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_STAR,
    STATE(104), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(118), 2,
      sym_bit_type,
      sym_identifier,
    STATE(107), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [955] = 8,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_STAR,
    STATE(109), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(118), 2,
      sym_bit_type,
      sym_identifier,
    STATE(107), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [987] = 8,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_STAR,
    STATE(138), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(88), 2,
      sym_bit_type,
      sym_identifier,
    STATE(146), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1019] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_number,
    ACTIONS(124), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(163), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1047] = 8,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_STAR,
    STATE(143), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(88), 2,
      sym_bit_type,
      sym_identifier,
    STATE(146), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1079] = 8,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_STAR,
    STATE(100), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(118), 2,
      sym_bit_type,
      sym_identifier,
    STATE(107), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1111] = 8,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_STAR,
    STATE(157), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(132), 2,
      sym_bit_type,
      sym_identifier,
    STATE(58), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1143] = 8,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_STAR,
    STATE(126), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(88), 2,
      sym_bit_type,
      sym_identifier,
    STATE(146), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1175] = 6,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_number,
    ACTIONS(138), 1,
      sym_string,
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
  [1203] = 8,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_STAR,
    STATE(217), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(146), 2,
      sym_bit_type,
      sym_identifier,
    STATE(223), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1235] = 8,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_STAR,
    STATE(57), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(132), 2,
      sym_bit_type,
      sym_identifier,
    STATE(58), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1267] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(150), 1,
      sym_number,
    ACTIONS(152), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(87), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1295] = 8,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_STAR,
    STATE(66), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(132), 2,
      sym_bit_type,
      sym_identifier,
    STATE(58), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1327] = 6,
    ACTIONS(72), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(156), 1,
      sym_string,
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
  [1355] = 6,
    ACTIONS(72), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(160), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(132), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1383] = 6,
    ACTIONS(72), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym_number,
    ACTIONS(164), 1,
      sym_string,
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
  [1411] = 8,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(76), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 2,
      sym_bit_type,
      sym_identifier,
    STATE(88), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1443] = 6,
    ACTIONS(72), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_number,
    ACTIONS(178), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(123), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1471] = 8,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(97), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 2,
      sym_bit_type,
      sym_identifier,
    STATE(88), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1503] = 6,
    ACTIONS(72), 1,
      anon_sym_AMP,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(180), 1,
      sym_number,
    ACTIONS(182), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(117), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1531] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(184), 1,
      sym_number,
    ACTIONS(186), 1,
      sym_string,
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
  [1559] = 8,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_STAR,
    STATE(60), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(132), 2,
      sym_bit_type,
      sym_identifier,
    STATE(58), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1591] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(188), 1,
      sym_number,
    ACTIONS(190), 1,
      sym_string,
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
  [1619] = 8,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_STAR,
    STATE(213), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(146), 2,
      sym_bit_type,
      sym_identifier,
    STATE(223), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1651] = 6,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(155), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1679] = 6,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(196), 1,
      sym_number,
    ACTIONS(198), 1,
      sym_string,
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
  [1707] = 6,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(151), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1735] = 6,
    ACTIONS(94), 1,
      anon_sym_AMP,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym_number,
    ACTIONS(206), 1,
      sym_string,
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
  [1763] = 8,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_STAR,
    STATE(214), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(146), 2,
      sym_bit_type,
      sym_identifier,
    STATE(223), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1795] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(169), 9,
      sym__expression,
      sym_subscript,
      sym_address_of,
      sym_assignment,
      sym_dot,
      sym_function_call,
      sym_as,
      sym_sum,
      sym_product,
  [1823] = 8,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(99), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(172), 2,
      sym_bit_type,
      sym_identifier,
    STATE(88), 6,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
  [1855] = 6,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_number,
    ACTIONS(214), 1,
      sym_string,
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
  [1883] = 4,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(216), 10,
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
  [1906] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(222), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [1928] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(228), 11,
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
  [1946] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(230), 11,
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
  [1964] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(232), 11,
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
  [1982] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(234), 11,
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
  [2000] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 11,
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
  [2018] = 2,
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
  [2036] = 8,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      anon_sym_using,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(220), 1,
      sym_type_definition,
    STATE(255), 1,
      sym_variable_definition,
    STATE(282), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(64), 5,
      sym__global_definition,
      sym_global_variable_definition,
      sym_function_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [2066] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(248), 11,
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
  [2084] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(250), 11,
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
  [2102] = 7,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(216), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [2130] = 8,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_type_definition,
    STATE(255), 1,
      sym_variable_definition,
    STATE(282), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(64), 5,
      sym__global_definition,
      sym_global_variable_definition,
      sym_function_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [2160] = 2,
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
  [2178] = 2,
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
  [2196] = 2,
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
  [2214] = 2,
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
  [2232] = 2,
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
  [2250] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(238), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2269] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(234), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2288] = 5,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2311] = 2,
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
  [2328] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(280), 10,
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
  [2345] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2364] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2383] = 5,
    ACTIONS(290), 1,
      anon_sym_else,
    STATE(127), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(288), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [2406] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(292), 10,
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
  [2423] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(260), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2442] = 5,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2465] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(236), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2484] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(304), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2503] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(306), 10,
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
  [2520] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(228), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2539] = 3,
    ACTIONS(312), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(310), 9,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [2558] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(314), 10,
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
  [2575] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(316), 10,
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
  [2592] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(318), 10,
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
  [2609] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2628] = 2,
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
  [2645] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2664] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(326), 10,
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
  [2681] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(232), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2700] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2719] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(250), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2738] = 5,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(222), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2760] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(340), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [2778] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(262), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2796] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(260), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2814] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(250), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2832] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(264), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2850] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(266), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2868] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(228), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2886] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(230), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2904] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(232), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2922] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(258), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2940] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(234), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2958] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(236), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2976] = 5,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(216), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [2998] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(238), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3016] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(248), 7,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3034] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(348), 5,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [3052] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(306), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3069] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(354), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [3086] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(358), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [3103] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3120] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3137] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3154] = 4,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(310), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3173] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(364), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(366), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [3190] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3207] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3224] = 3,
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
      sym_identifier,
  [3241] = 3,
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
      sym_identifier,
  [3258] = 7,
    ACTIONS(312), 1,
      anon_sym_STAR,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_as,
    ACTIONS(386), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3283] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3300] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3317] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(316), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3334] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(314), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3351] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(318), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3368] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(340), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [3385] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(322), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3402] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(396), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(398), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [3419] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3436] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3453] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(346), 4,
      anon_sym_RBRACE,
      sym_return_keyword,
      anon_sym_AMP,
      sym_string,
    ACTIONS(348), 4,
      anon_sym_if,
      anon_sym_while,
      sym_number,
      sym_identifier,
  [3470] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3487] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3504] = 5,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(400), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3525] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3542] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(326), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3559] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3576] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_using,
      anon_sym_as,
      sym_identifier,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3593] = 8,
    ACTIONS(360), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_as,
    ACTIONS(422), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_using,
      sym_identifier,
  [3620] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(236), 6,
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
    ACTIONS(270), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(234), 6,
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
    ACTIONS(388), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(316), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3670] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(368), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(292), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3686] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(278), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3702] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(280), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3718] = 4,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(310), 4,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3736] = 8,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      anon_sym_EQ,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      anon_sym_as,
    ACTIONS(432), 1,
      anon_sym_PLUS,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3762] = 3,
    ACTIONS(226), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(222), 6,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_PLUS,
  [3778] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(314), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3794] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(306), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3810] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(326), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3826] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(322), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3842] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_as,
      sym_identifier,
    ACTIONS(318), 5,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_PLUS,
  [3858] = 7,
    ACTIONS(312), 1,
      anon_sym_STAR,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_as,
    ACTIONS(386), 1,
      anon_sym_PLUS,
    ACTIONS(434), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3881] = 7,
    ACTIONS(312), 1,
      anon_sym_STAR,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_PLUS,
    ACTIONS(436), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3904] = 4,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_using,
      sym_identifier,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_PIPE,
  [3921] = 5,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_using,
      sym_identifier,
    STATE(170), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [3940] = 7,
    ACTIONS(312), 1,
      anon_sym_STAR,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_as,
    ACTIONS(386), 1,
      anon_sym_PLUS,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [3963] = 5,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_using,
      sym_identifier,
    STATE(168), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [3982] = 7,
    ACTIONS(312), 1,
      anon_sym_STAR,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_as,
    ACTIONS(386), 1,
      anon_sym_PLUS,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4005] = 5,
    ACTIONS(444), 1,
      anon_sym_COLON_COLON,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_using,
      sym_identifier,
    STATE(168), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [4024] = 5,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(178), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4042] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_output_parameters,
    STATE(253), 1,
      sym_type_definition,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4062] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(192), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4080] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(179), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4098] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4116] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_output_parameters,
    STATE(244), 1,
      sym_type_definition,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4136] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(175), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4154] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4172] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4190] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(200), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4208] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4226] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(206), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4244] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4262] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(181), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4280] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4298] = 5,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4316] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(189), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4334] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_output_parameters,
    STATE(250), 1,
      sym_type_definition,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4354] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4372] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(191), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4390] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4408] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4426] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(195), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4444] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4462] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4480] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(199), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4498] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_output_parameters,
    STATE(241), 1,
      sym_type_definition,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4518] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(185), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4536] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4554] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4572] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(204), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4590] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_type_definition,
    STATE(292), 1,
      sym_input_parameters,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4610] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(194), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4628] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4646] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(183), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4664] = 5,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(186), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [4682] = 5,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(298), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(207), 2,
      sym_struct_member,
      aux_sym_alias_type_repeat1,
  [4700] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_type_definition,
    STATE(288), 1,
      sym_input_parameters,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4720] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      sym_output_parameters,
    STATE(242), 1,
      sym_type_definition,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4740] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_type_definition,
    STATE(293), 1,
      sym_input_parameters,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4760] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_type_definition,
    STATE(296), 1,
      sym_input_parameters,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4780] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_type_definition,
    STATE(299), 1,
      sym_input_parameters,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [4800] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4811] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4822] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON,
    ACTIONS(547), 2,
      anon_sym_using,
      sym_identifier,
  [4835] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4846] = 4,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4861] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(555), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(557), 2,
      anon_sym_using,
      sym_identifier,
  [4874] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4885] = 4,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_using,
      sym_identifier,
  [4900] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4911] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(567), 2,
      anon_sym_using,
      sym_identifier,
  [4924] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4935] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4946] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(260), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4957] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4968] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4979] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [4990] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [5001] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(236), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
  [5012] = 4,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5026] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5040] = 4,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(273), 1,
      sym_type_definition,
    STATE(303), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5054] = 4,
    ACTIONS(578), 1,
      anon_sym_COLON,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5068] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5082] = 3,
    ACTIONS(587), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_using,
      sym_identifier,
  [5094] = 4,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5108] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5122] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5136] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5150] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5164] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5178] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5192] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5206] = 4,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_COLON,
    STATE(234), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5220] = 3,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_using,
      sym_identifier,
  [5232] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5246] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5260] = 3,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_using,
      sym_identifier,
  [5272] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5286] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5300] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5314] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5328] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5342] = 3,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_using,
      sym_identifier,
  [5354] = 4,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5368] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5382] = 3,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_using,
      sym_identifier,
  [5394] = 4,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5408] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5417] = 3,
    ACTIONS(638), 1,
      sym_filepath_component,
    STATE(249), 1,
      sym_namespace,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5428] = 3,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5439] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(642), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [5448] = 3,
    ACTIONS(644), 1,
      sym_number,
    STATE(279), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5459] = 3,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5470] = 3,
    ACTIONS(644), 1,
      sym_number,
    STATE(295), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5481] = 3,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5492] = 3,
    ACTIONS(644), 1,
      sym_number,
    STATE(283), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5503] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [5512] = 3,
    ACTIONS(644), 1,
      sym_number,
    STATE(302), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5523] = 3,
    ACTIONS(644), 1,
      sym_number,
    STATE(274), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5534] = 3,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5545] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5554] = 2,
    ACTIONS(650), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5562] = 2,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5570] = 2,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5578] = 2,
    ACTIONS(656), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5586] = 2,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5594] = 2,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5602] = 2,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5610] = 2,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5618] = 2,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5626] = 2,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5634] = 2,
    ACTIONS(670), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5642] = 2,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5650] = 2,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5658] = 2,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5666] = 2,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5674] = 2,
    ACTIONS(680), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5682] = 2,
    ACTIONS(682), 1,
      sym_filepath_component,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5690] = 2,
    ACTIONS(684), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5698] = 2,
    ACTIONS(686), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5706] = 2,
    ACTIONS(688), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5714] = 2,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5722] = 2,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5730] = 2,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5738] = 2,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5746] = 2,
    ACTIONS(698), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5754] = 2,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5762] = 2,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5770] = 2,
    ACTIONS(704), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5778] = 2,
    ACTIONS(706), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5786] = 2,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [5794] = 2,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 248,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 372,
  [SMALL_STATE(9)] = 434,
  [SMALL_STATE(10)] = 471,
  [SMALL_STATE(11)] = 508,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 576,
  [SMALL_STATE(14)] = 607,
  [SMALL_STATE(15)] = 646,
  [SMALL_STATE(16)] = 677,
  [SMALL_STATE(17)] = 708,
  [SMALL_STATE(18)] = 739,
  [SMALL_STATE(19)] = 770,
  [SMALL_STATE(20)] = 801,
  [SMALL_STATE(21)] = 836,
  [SMALL_STATE(22)] = 867,
  [SMALL_STATE(23)] = 895,
  [SMALL_STATE(24)] = 923,
  [SMALL_STATE(25)] = 955,
  [SMALL_STATE(26)] = 987,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1047,
  [SMALL_STATE(29)] = 1079,
  [SMALL_STATE(30)] = 1111,
  [SMALL_STATE(31)] = 1143,
  [SMALL_STATE(32)] = 1175,
  [SMALL_STATE(33)] = 1203,
  [SMALL_STATE(34)] = 1235,
  [SMALL_STATE(35)] = 1267,
  [SMALL_STATE(36)] = 1295,
  [SMALL_STATE(37)] = 1327,
  [SMALL_STATE(38)] = 1355,
  [SMALL_STATE(39)] = 1383,
  [SMALL_STATE(40)] = 1411,
  [SMALL_STATE(41)] = 1443,
  [SMALL_STATE(42)] = 1471,
  [SMALL_STATE(43)] = 1503,
  [SMALL_STATE(44)] = 1531,
  [SMALL_STATE(45)] = 1559,
  [SMALL_STATE(46)] = 1591,
  [SMALL_STATE(47)] = 1619,
  [SMALL_STATE(48)] = 1651,
  [SMALL_STATE(49)] = 1679,
  [SMALL_STATE(50)] = 1707,
  [SMALL_STATE(51)] = 1735,
  [SMALL_STATE(52)] = 1763,
  [SMALL_STATE(53)] = 1795,
  [SMALL_STATE(54)] = 1823,
  [SMALL_STATE(55)] = 1855,
  [SMALL_STATE(56)] = 1883,
  [SMALL_STATE(57)] = 1906,
  [SMALL_STATE(58)] = 1928,
  [SMALL_STATE(59)] = 1946,
  [SMALL_STATE(60)] = 1964,
  [SMALL_STATE(61)] = 1982,
  [SMALL_STATE(62)] = 2000,
  [SMALL_STATE(63)] = 2018,
  [SMALL_STATE(64)] = 2036,
  [SMALL_STATE(65)] = 2066,
  [SMALL_STATE(66)] = 2084,
  [SMALL_STATE(67)] = 2102,
  [SMALL_STATE(68)] = 2130,
  [SMALL_STATE(69)] = 2160,
  [SMALL_STATE(70)] = 2178,
  [SMALL_STATE(71)] = 2196,
  [SMALL_STATE(72)] = 2214,
  [SMALL_STATE(73)] = 2232,
  [SMALL_STATE(74)] = 2250,
  [SMALL_STATE(75)] = 2269,
  [SMALL_STATE(76)] = 2288,
  [SMALL_STATE(77)] = 2311,
  [SMALL_STATE(78)] = 2328,
  [SMALL_STATE(79)] = 2345,
  [SMALL_STATE(80)] = 2364,
  [SMALL_STATE(81)] = 2383,
  [SMALL_STATE(82)] = 2406,
  [SMALL_STATE(83)] = 2423,
  [SMALL_STATE(84)] = 2442,
  [SMALL_STATE(85)] = 2465,
  [SMALL_STATE(86)] = 2484,
  [SMALL_STATE(87)] = 2503,
  [SMALL_STATE(88)] = 2520,
  [SMALL_STATE(89)] = 2539,
  [SMALL_STATE(90)] = 2558,
  [SMALL_STATE(91)] = 2575,
  [SMALL_STATE(92)] = 2592,
  [SMALL_STATE(93)] = 2609,
  [SMALL_STATE(94)] = 2628,
  [SMALL_STATE(95)] = 2645,
  [SMALL_STATE(96)] = 2664,
  [SMALL_STATE(97)] = 2681,
  [SMALL_STATE(98)] = 2700,
  [SMALL_STATE(99)] = 2719,
  [SMALL_STATE(100)] = 2738,
  [SMALL_STATE(101)] = 2760,
  [SMALL_STATE(102)] = 2778,
  [SMALL_STATE(103)] = 2796,
  [SMALL_STATE(104)] = 2814,
  [SMALL_STATE(105)] = 2832,
  [SMALL_STATE(106)] = 2850,
  [SMALL_STATE(107)] = 2868,
  [SMALL_STATE(108)] = 2886,
  [SMALL_STATE(109)] = 2904,
  [SMALL_STATE(110)] = 2922,
  [SMALL_STATE(111)] = 2940,
  [SMALL_STATE(112)] = 2958,
  [SMALL_STATE(113)] = 2976,
  [SMALL_STATE(114)] = 2998,
  [SMALL_STATE(115)] = 3016,
  [SMALL_STATE(116)] = 3034,
  [SMALL_STATE(117)] = 3052,
  [SMALL_STATE(118)] = 3069,
  [SMALL_STATE(119)] = 3086,
  [SMALL_STATE(120)] = 3103,
  [SMALL_STATE(121)] = 3120,
  [SMALL_STATE(122)] = 3137,
  [SMALL_STATE(123)] = 3154,
  [SMALL_STATE(124)] = 3173,
  [SMALL_STATE(125)] = 3190,
  [SMALL_STATE(126)] = 3207,
  [SMALL_STATE(127)] = 3224,
  [SMALL_STATE(128)] = 3241,
  [SMALL_STATE(129)] = 3258,
  [SMALL_STATE(130)] = 3283,
  [SMALL_STATE(131)] = 3300,
  [SMALL_STATE(132)] = 3317,
  [SMALL_STATE(133)] = 3334,
  [SMALL_STATE(134)] = 3351,
  [SMALL_STATE(135)] = 3368,
  [SMALL_STATE(136)] = 3385,
  [SMALL_STATE(137)] = 3402,
  [SMALL_STATE(138)] = 3419,
  [SMALL_STATE(139)] = 3436,
  [SMALL_STATE(140)] = 3453,
  [SMALL_STATE(141)] = 3470,
  [SMALL_STATE(142)] = 3487,
  [SMALL_STATE(143)] = 3504,
  [SMALL_STATE(144)] = 3525,
  [SMALL_STATE(145)] = 3542,
  [SMALL_STATE(146)] = 3559,
  [SMALL_STATE(147)] = 3576,
  [SMALL_STATE(148)] = 3593,
  [SMALL_STATE(149)] = 3620,
  [SMALL_STATE(150)] = 3637,
  [SMALL_STATE(151)] = 3654,
  [SMALL_STATE(152)] = 3670,
  [SMALL_STATE(153)] = 3686,
  [SMALL_STATE(154)] = 3702,
  [SMALL_STATE(155)] = 3718,
  [SMALL_STATE(156)] = 3736,
  [SMALL_STATE(157)] = 3762,
  [SMALL_STATE(158)] = 3778,
  [SMALL_STATE(159)] = 3794,
  [SMALL_STATE(160)] = 3810,
  [SMALL_STATE(161)] = 3826,
  [SMALL_STATE(162)] = 3842,
  [SMALL_STATE(163)] = 3858,
  [SMALL_STATE(164)] = 3881,
  [SMALL_STATE(165)] = 3904,
  [SMALL_STATE(166)] = 3921,
  [SMALL_STATE(167)] = 3940,
  [SMALL_STATE(168)] = 3963,
  [SMALL_STATE(169)] = 3982,
  [SMALL_STATE(170)] = 4005,
  [SMALL_STATE(171)] = 4024,
  [SMALL_STATE(172)] = 4042,
  [SMALL_STATE(173)] = 4062,
  [SMALL_STATE(174)] = 4080,
  [SMALL_STATE(175)] = 4098,
  [SMALL_STATE(176)] = 4116,
  [SMALL_STATE(177)] = 4136,
  [SMALL_STATE(178)] = 4154,
  [SMALL_STATE(179)] = 4172,
  [SMALL_STATE(180)] = 4190,
  [SMALL_STATE(181)] = 4208,
  [SMALL_STATE(182)] = 4226,
  [SMALL_STATE(183)] = 4244,
  [SMALL_STATE(184)] = 4262,
  [SMALL_STATE(185)] = 4280,
  [SMALL_STATE(186)] = 4298,
  [SMALL_STATE(187)] = 4316,
  [SMALL_STATE(188)] = 4334,
  [SMALL_STATE(189)] = 4354,
  [SMALL_STATE(190)] = 4372,
  [SMALL_STATE(191)] = 4390,
  [SMALL_STATE(192)] = 4408,
  [SMALL_STATE(193)] = 4426,
  [SMALL_STATE(194)] = 4444,
  [SMALL_STATE(195)] = 4462,
  [SMALL_STATE(196)] = 4480,
  [SMALL_STATE(197)] = 4498,
  [SMALL_STATE(198)] = 4518,
  [SMALL_STATE(199)] = 4536,
  [SMALL_STATE(200)] = 4554,
  [SMALL_STATE(201)] = 4572,
  [SMALL_STATE(202)] = 4590,
  [SMALL_STATE(203)] = 4610,
  [SMALL_STATE(204)] = 4628,
  [SMALL_STATE(205)] = 4646,
  [SMALL_STATE(206)] = 4664,
  [SMALL_STATE(207)] = 4682,
  [SMALL_STATE(208)] = 4700,
  [SMALL_STATE(209)] = 4720,
  [SMALL_STATE(210)] = 4740,
  [SMALL_STATE(211)] = 4760,
  [SMALL_STATE(212)] = 4780,
  [SMALL_STATE(213)] = 4800,
  [SMALL_STATE(214)] = 4811,
  [SMALL_STATE(215)] = 4822,
  [SMALL_STATE(216)] = 4835,
  [SMALL_STATE(217)] = 4846,
  [SMALL_STATE(218)] = 4861,
  [SMALL_STATE(219)] = 4874,
  [SMALL_STATE(220)] = 4885,
  [SMALL_STATE(221)] = 4900,
  [SMALL_STATE(222)] = 4911,
  [SMALL_STATE(223)] = 4924,
  [SMALL_STATE(224)] = 4935,
  [SMALL_STATE(225)] = 4946,
  [SMALL_STATE(226)] = 4957,
  [SMALL_STATE(227)] = 4968,
  [SMALL_STATE(228)] = 4979,
  [SMALL_STATE(229)] = 4990,
  [SMALL_STATE(230)] = 5001,
  [SMALL_STATE(231)] = 5012,
  [SMALL_STATE(232)] = 5026,
  [SMALL_STATE(233)] = 5040,
  [SMALL_STATE(234)] = 5054,
  [SMALL_STATE(235)] = 5068,
  [SMALL_STATE(236)] = 5082,
  [SMALL_STATE(237)] = 5094,
  [SMALL_STATE(238)] = 5108,
  [SMALL_STATE(239)] = 5122,
  [SMALL_STATE(240)] = 5136,
  [SMALL_STATE(241)] = 5150,
  [SMALL_STATE(242)] = 5164,
  [SMALL_STATE(243)] = 5178,
  [SMALL_STATE(244)] = 5192,
  [SMALL_STATE(245)] = 5206,
  [SMALL_STATE(246)] = 5220,
  [SMALL_STATE(247)] = 5232,
  [SMALL_STATE(248)] = 5246,
  [SMALL_STATE(249)] = 5260,
  [SMALL_STATE(250)] = 5272,
  [SMALL_STATE(251)] = 5286,
  [SMALL_STATE(252)] = 5300,
  [SMALL_STATE(253)] = 5314,
  [SMALL_STATE(254)] = 5328,
  [SMALL_STATE(255)] = 5342,
  [SMALL_STATE(256)] = 5354,
  [SMALL_STATE(257)] = 5368,
  [SMALL_STATE(258)] = 5382,
  [SMALL_STATE(259)] = 5394,
  [SMALL_STATE(260)] = 5408,
  [SMALL_STATE(261)] = 5417,
  [SMALL_STATE(262)] = 5428,
  [SMALL_STATE(263)] = 5439,
  [SMALL_STATE(264)] = 5448,
  [SMALL_STATE(265)] = 5459,
  [SMALL_STATE(266)] = 5470,
  [SMALL_STATE(267)] = 5481,
  [SMALL_STATE(268)] = 5492,
  [SMALL_STATE(269)] = 5503,
  [SMALL_STATE(270)] = 5512,
  [SMALL_STATE(271)] = 5523,
  [SMALL_STATE(272)] = 5534,
  [SMALL_STATE(273)] = 5545,
  [SMALL_STATE(274)] = 5554,
  [SMALL_STATE(275)] = 5562,
  [SMALL_STATE(276)] = 5570,
  [SMALL_STATE(277)] = 5578,
  [SMALL_STATE(278)] = 5586,
  [SMALL_STATE(279)] = 5594,
  [SMALL_STATE(280)] = 5602,
  [SMALL_STATE(281)] = 5610,
  [SMALL_STATE(282)] = 5618,
  [SMALL_STATE(283)] = 5626,
  [SMALL_STATE(284)] = 5634,
  [SMALL_STATE(285)] = 5642,
  [SMALL_STATE(286)] = 5650,
  [SMALL_STATE(287)] = 5658,
  [SMALL_STATE(288)] = 5666,
  [SMALL_STATE(289)] = 5674,
  [SMALL_STATE(290)] = 5682,
  [SMALL_STATE(291)] = 5690,
  [SMALL_STATE(292)] = 5698,
  [SMALL_STATE(293)] = 5706,
  [SMALL_STATE(294)] = 5714,
  [SMALL_STATE(295)] = 5722,
  [SMALL_STATE(296)] = 5730,
  [SMALL_STATE(297)] = 5738,
  [SMALL_STATE(298)] = 5746,
  [SMALL_STATE(299)] = 5754,
  [SMALL_STATE(300)] = 5762,
  [SMALL_STATE(301)] = 5770,
  [SMALL_STATE(302)] = 5778,
  [SMALL_STATE(303)] = 5786,
  [SMALL_STATE(304)] = 5794,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(137),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(129),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(129),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 3, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 3, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_of, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, .production_id = 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, .production_id = 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_of, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_definition, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_definition, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2), SHIFT_REPEAT(290),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2), SHIFT_REPEAT(237),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(237),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_namespace, 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_namespace, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__global_definition, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__global_definition, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2), SHIFT_REPEAT(233),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(278),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_definition, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_variable_definition, 1),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(18),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_size, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [676] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 2),
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
