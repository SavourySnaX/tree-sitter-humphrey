#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 426
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_SEMI = 1,
  anon_sym_if = 2,
  anon_sym_else = 3,
  anon_sym_while = 4,
  anon_sym_for = 5,
  anon_sym_DOT_DOT = 6,
  sym_return_keyword = 7,
  sym_bit_type = 8,
  anon_sym_AMP = 9,
  anon_sym_DOT = 10,
  anon_sym_as = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_SLASH = 14,
  anon_sym_PERCENT = 15,
  anon_sym_BANG = 16,
  anon_sym_PLUS_PLUS = 17,
  anon_sym_DASH_DASH = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_GT_EQ = 24,
  sym__comment = 25,
  sym_string = 26,
  aux_sym_number_token1 = 27,
  aux_sym_number_token2 = 28,
  aux_sym_number_token3 = 29,
  aux_sym_filepath_component_token1 = 30,
  sym_meta_item = 31,
  sym_underscore = 32,
  sym__comma = 33,
  sym__coloncolon = 34,
  sym__colon = 35,
  sym__equal = 36,
  sym__using = 37,
  sym__asterix = 38,
  sym__openSquare = 39,
  sym__closeSquare = 40,
  sym__openCurly = 41,
  sym__closeCurly = 42,
  sym__verticalBar = 43,
  sym__openParen = 44,
  sym__closeParen = 45,
  sym__block_comment = 46,
  sym_source_file = 47,
  sym__global_definition = 48,
  sym__definition_or_type = 49,
  sym_variable_definition = 50,
  sym_function_definition = 51,
  sym_block = 52,
  sym_statement = 53,
  sym_statement_expression = 54,
  sym_if_statement = 55,
  sym_else_statement = 56,
  sym_while_statement = 57,
  sym_for_statement = 58,
  sym_local_variable_definition = 59,
  sym_type_definition = 60,
  sym_meta_list = 61,
  sym_identifier_list = 62,
  sym_type = 63,
  sym_function_type = 64,
  sym_input_parameters = 65,
  sym_output_parameters = 66,
  sym_array_type = 67,
  sym_alias_type = 68,
  sym_enum_type = 69,
  sym_enum_member = 70,
  sym_struct_type = 71,
  sym_struct_member = 72,
  sym_pointer_type = 73,
  sym_array_size = 74,
  sym_using_statement = 75,
  sym_namespace = 76,
  sym__rest_of_namespace = 77,
  sym_expression = 78,
  sym__expression = 79,
  sym_bracketed = 80,
  sym_subscript = 81,
  sym_address_of = 82,
  sym_dereference = 83,
  sym_assignment = 84,
  sym_dot = 85,
  sym_function_call = 86,
  sym_function_call_args = 87,
  sym_as = 88,
  sym_sum = 89,
  sym_subtraction = 90,
  sym_division = 91,
  sym_modulus = 92,
  sym_product = 93,
  sym_cond_inver = 94,
  sym_negate = 95,
  sym_pre_inc = 96,
  sym_pre_dec = 97,
  sym_post_inc = 98,
  sym_post_dec = 99,
  sym_cond_equal = 100,
  sym_cond_not_equal = 101,
  sym_cond_less = 102,
  sym_cond_greater = 103,
  sym_cond_less_equal = 104,
  sym_cond_greater_equal = 105,
  sym_number = 106,
  sym_filepath_component = 107,
  sym_identifier = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_block_repeat1 = 110,
  aux_sym_meta_list_repeat1 = 111,
  aux_sym_identifier_list_repeat1 = 112,
  aux_sym_input_parameters_repeat1 = 113,
  aux_sym_alias_type_repeat1 = 114,
  aux_sym_enum_type_repeat1 = 115,
  aux_sym_struct_type_repeat1 = 116,
  aux_sym_namespace_repeat1 = 117,
  aux_sym_function_call_args_repeat1 = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_DOT_DOT] = "..",
  [sym_return_keyword] = "return_keyword",
  [sym_bit_type] = "bit_type",
  [anon_sym_AMP] = "&",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym__comment] = "_comment",
  [sym_string] = "string",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_filepath_component_token1] = "filepath_component_token1",
  [sym_meta_item] = "meta_item",
  [sym_underscore] = "underscore",
  [sym__comma] = "_comma",
  [sym__coloncolon] = "_coloncolon",
  [sym__colon] = "_colon",
  [sym__equal] = "_equal",
  [sym__using] = "_using",
  [sym__asterix] = "_asterix",
  [sym__openSquare] = "_openSquare",
  [sym__closeSquare] = "_closeSquare",
  [sym__openCurly] = "_openCurly",
  [sym__closeCurly] = "_closeCurly",
  [sym__verticalBar] = "_verticalBar",
  [sym__openParen] = "_openParen",
  [sym__closeParen] = "_closeParen",
  [sym__block_comment] = "_block_comment",
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
  [sym_for_statement] = "for_statement",
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
  [sym_cond_inver] = "cond_inver",
  [sym_negate] = "negate",
  [sym_pre_inc] = "pre_inc",
  [sym_pre_dec] = "pre_dec",
  [sym_post_inc] = "post_inc",
  [sym_post_dec] = "post_dec",
  [sym_cond_equal] = "cond_equal",
  [sym_cond_not_equal] = "cond_not_equal",
  [sym_cond_less] = "cond_less",
  [sym_cond_greater] = "cond_greater",
  [sym_cond_less_equal] = "cond_less_equal",
  [sym_cond_greater_equal] = "cond_greater_equal",
  [sym_number] = "number",
  [sym_filepath_component] = "filepath_component",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_meta_list_repeat1] = "meta_list_repeat1",
  [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
  [aux_sym_input_parameters_repeat1] = "input_parameters_repeat1",
  [aux_sym_alias_type_repeat1] = "alias_type_repeat1",
  [aux_sym_enum_type_repeat1] = "enum_type_repeat1",
  [aux_sym_struct_type_repeat1] = "struct_type_repeat1",
  [aux_sym_namespace_repeat1] = "namespace_repeat1",
  [aux_sym_function_call_args_repeat1] = "function_call_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_return_keyword] = sym_return_keyword,
  [sym_bit_type] = sym_bit_type,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym__comment] = sym__comment,
  [sym_string] = sym_string,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_filepath_component_token1] = aux_sym_filepath_component_token1,
  [sym_meta_item] = sym_meta_item,
  [sym_underscore] = sym_underscore,
  [sym__comma] = sym__comma,
  [sym__coloncolon] = sym__coloncolon,
  [sym__colon] = sym__colon,
  [sym__equal] = sym__equal,
  [sym__using] = sym__using,
  [sym__asterix] = sym__asterix,
  [sym__openSquare] = sym__openSquare,
  [sym__closeSquare] = sym__closeSquare,
  [sym__openCurly] = sym__openCurly,
  [sym__closeCurly] = sym__closeCurly,
  [sym__verticalBar] = sym__verticalBar,
  [sym__openParen] = sym__openParen,
  [sym__closeParen] = sym__closeParen,
  [sym__block_comment] = sym__block_comment,
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
  [sym_for_statement] = sym_for_statement,
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
  [sym_cond_inver] = sym_cond_inver,
  [sym_negate] = sym_negate,
  [sym_pre_inc] = sym_pre_inc,
  [sym_pre_dec] = sym_pre_dec,
  [sym_post_inc] = sym_post_inc,
  [sym_post_dec] = sym_post_dec,
  [sym_cond_equal] = sym_cond_equal,
  [sym_cond_not_equal] = sym_cond_not_equal,
  [sym_cond_less] = sym_cond_less,
  [sym_cond_greater] = sym_cond_greater,
  [sym_cond_less_equal] = sym_cond_less_equal,
  [sym_cond_greater_equal] = sym_cond_greater_equal,
  [sym_number] = sym_number,
  [sym_filepath_component] = sym_filepath_component,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_meta_list_repeat1] = aux_sym_meta_list_repeat1,
  [aux_sym_identifier_list_repeat1] = aux_sym_identifier_list_repeat1,
  [aux_sym_input_parameters_repeat1] = aux_sym_input_parameters_repeat1,
  [aux_sym_alias_type_repeat1] = aux_sym_alias_type_repeat1,
  [aux_sym_enum_type_repeat1] = aux_sym_enum_type_repeat1,
  [aux_sym_struct_type_repeat1] = aux_sym_struct_type_repeat1,
  [aux_sym_namespace_repeat1] = aux_sym_namespace_repeat1,
  [aux_sym_function_call_args_repeat1] = aux_sym_function_call_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_return_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_type] = {
    .visible = true,
    .named = true,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filepath_component_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_meta_item] = {
    .visible = true,
    .named = true,
  },
  [sym_underscore] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym__coloncolon] = {
    .visible = false,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__equal] = {
    .visible = false,
    .named = true,
  },
  [sym__using] = {
    .visible = false,
    .named = true,
  },
  [sym__asterix] = {
    .visible = false,
    .named = true,
  },
  [sym__openSquare] = {
    .visible = false,
    .named = true,
  },
  [sym__closeSquare] = {
    .visible = false,
    .named = true,
  },
  [sym__openCurly] = {
    .visible = false,
    .named = true,
  },
  [sym__closeCurly] = {
    .visible = false,
    .named = true,
  },
  [sym__verticalBar] = {
    .visible = false,
    .named = true,
  },
  [sym__openParen] = {
    .visible = false,
    .named = true,
  },
  [sym__closeParen] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
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
  [sym_for_statement] = {
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
  [sym_cond_inver] = {
    .visible = true,
    .named = true,
  },
  [sym_negate] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_inc] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_post_inc] = {
    .visible = true,
    .named = true,
  },
  [sym_post_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_not_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_less] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_greater] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_less_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_cond_greater_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [aux_sym_struct_type_repeat1] = {
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
  field_expr = 1,
  field_left = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expr] = "expr",
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expr, 1},
  [1] =
    {field_expr, 0},
  [2] =
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
  [5] = 2,
  [6] = 4,
  [7] = 4,
  [8] = 8,
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
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 31,
  [41] = 41,
  [42] = 42,
  [43] = 28,
  [44] = 26,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 42,
  [52] = 39,
  [53] = 38,
  [54] = 32,
  [55] = 33,
  [56] = 34,
  [57] = 29,
  [58] = 35,
  [59] = 41,
  [60] = 37,
  [61] = 45,
  [62] = 38,
  [63] = 46,
  [64] = 47,
  [65] = 48,
  [66] = 25,
  [67] = 49,
  [68] = 50,
  [69] = 37,
  [70] = 50,
  [71] = 42,
  [72] = 49,
  [73] = 25,
  [74] = 48,
  [75] = 47,
  [76] = 27,
  [77] = 39,
  [78] = 46,
  [79] = 45,
  [80] = 26,
  [81] = 41,
  [82] = 35,
  [83] = 34,
  [84] = 33,
  [85] = 32,
  [86] = 29,
  [87] = 31,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 93,
  [98] = 95,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 94,
  [108] = 91,
  [109] = 92,
  [110] = 88,
  [111] = 111,
  [112] = 112,
  [113] = 100,
  [114] = 114,
  [115] = 115,
  [116] = 99,
  [117] = 96,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 103,
  [124] = 124,
  [125] = 125,
  [126] = 104,
  [127] = 127,
  [128] = 102,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 105,
  [135] = 135,
  [136] = 136,
  [137] = 101,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 90,
  [146] = 146,
  [147] = 106,
  [148] = 148,
  [149] = 149,
  [150] = 115,
  [151] = 151,
  [152] = 91,
  [153] = 95,
  [154] = 94,
  [155] = 92,
  [156] = 93,
  [157] = 142,
  [158] = 121,
  [159] = 105,
  [160] = 106,
  [161] = 133,
  [162] = 104,
  [163] = 163,
  [164] = 132,
  [165] = 90,
  [166] = 166,
  [167] = 148,
  [168] = 130,
  [169] = 131,
  [170] = 135,
  [171] = 136,
  [172] = 103,
  [173] = 99,
  [174] = 100,
  [175] = 144,
  [176] = 149,
  [177] = 102,
  [178] = 101,
  [179] = 146,
  [180] = 96,
  [181] = 143,
  [182] = 112,
  [183] = 141,
  [184] = 114,
  [185] = 129,
  [186] = 140,
  [187] = 139,
  [188] = 127,
  [189] = 138,
  [190] = 166,
  [191] = 125,
  [192] = 124,
  [193] = 122,
  [194] = 194,
  [195] = 120,
  [196] = 119,
  [197] = 118,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 163,
  [204] = 194,
  [205] = 91,
  [206] = 206,
  [207] = 207,
  [208] = 131,
  [209] = 120,
  [210] = 148,
  [211] = 133,
  [212] = 132,
  [213] = 142,
  [214] = 149,
  [215] = 146,
  [216] = 143,
  [217] = 141,
  [218] = 140,
  [219] = 139,
  [220] = 127,
  [221] = 125,
  [222] = 124,
  [223] = 122,
  [224] = 121,
  [225] = 119,
  [226] = 118,
  [227] = 114,
  [228] = 129,
  [229] = 138,
  [230] = 136,
  [231] = 135,
  [232] = 130,
  [233] = 144,
  [234] = 112,
  [235] = 166,
  [236] = 115,
  [237] = 237,
  [238] = 237,
  [239] = 237,
  [240] = 240,
  [241] = 166,
  [242] = 240,
  [243] = 240,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 250,
  [254] = 250,
  [255] = 252,
  [256] = 256,
  [257] = 250,
  [258] = 258,
  [259] = 258,
  [260] = 260,
  [261] = 252,
  [262] = 252,
  [263] = 258,
  [264] = 252,
  [265] = 258,
  [266] = 258,
  [267] = 94,
  [268] = 88,
  [269] = 93,
  [270] = 95,
  [271] = 92,
  [272] = 272,
  [273] = 102,
  [274] = 99,
  [275] = 105,
  [276] = 272,
  [277] = 272,
  [278] = 103,
  [279] = 279,
  [280] = 96,
  [281] = 104,
  [282] = 100,
  [283] = 279,
  [284] = 272,
  [285] = 279,
  [286] = 272,
  [287] = 101,
  [288] = 279,
  [289] = 106,
  [290] = 279,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 298,
  [301] = 298,
  [302] = 297,
  [303] = 299,
  [304] = 298,
  [305] = 305,
  [306] = 299,
  [307] = 297,
  [308] = 299,
  [309] = 309,
  [310] = 297,
  [311] = 298,
  [312] = 297,
  [313] = 299,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 317,
  [319] = 319,
  [320] = 92,
  [321] = 93,
  [322] = 317,
  [323] = 323,
  [324] = 319,
  [325] = 325,
  [326] = 326,
  [327] = 317,
  [328] = 319,
  [329] = 317,
  [330] = 330,
  [331] = 319,
  [332] = 332,
  [333] = 319,
  [334] = 95,
  [335] = 94,
  [336] = 104,
  [337] = 194,
  [338] = 338,
  [339] = 88,
  [340] = 96,
  [341] = 101,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 102,
  [346] = 346,
  [347] = 103,
  [348] = 348,
  [349] = 163,
  [350] = 99,
  [351] = 351,
  [352] = 105,
  [353] = 100,
  [354] = 354,
  [355] = 106,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 357,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 357,
  [365] = 365,
  [366] = 366,
  [367] = 356,
  [368] = 368,
  [369] = 363,
  [370] = 356,
  [371] = 371,
  [372] = 366,
  [373] = 357,
  [374] = 374,
  [375] = 375,
  [376] = 356,
  [377] = 357,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 366,
  [382] = 356,
  [383] = 363,
  [384] = 384,
  [385] = 385,
  [386] = 385,
  [387] = 387,
  [388] = 385,
  [389] = 389,
  [390] = 390,
  [391] = 385,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 385,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 401,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 407,
  [414] = 401,
  [415] = 415,
  [416] = 416,
  [417] = 407,
  [418] = 418,
  [419] = 419,
  [420] = 407,
  [421] = 401,
  [422] = 407,
  [423] = 423,
  [424] = 401,
  [425] = 425,
};

static inline bool aux_sym_number_token1_character_set_1(int32_t c) {
  return (c < 6112
    ? (c < 3046
      ? (c < 2406
        ? (c < 1776
          ? (c < 1632
            ? (c >= '1' && c <= '9')
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

static inline bool aux_sym_number_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym_number_token1_character_set_3(int32_t c) {
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
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'c'
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

static inline bool aux_sym_filepath_component_token1_character_set_2(int32_t c) {
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
  return (c < 6470
    ? (c < 2990
      ? (c < 2406
        ? (c < 1568
          ? (c < 890
            ? (c < 248
              ? (c < 181
                ? (c < 'g'
                  ? (c >= 'G' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))))
              : (c <= 705 || (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1015
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))
              : (c <= 1153 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2042
            ? (c < 1791
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1788)))
              : (c <= 1791 || (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : c <= 2037)))))
            : (c <= 2042 || (c < 2160
              ? (c < 2088
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))
              : (c <= 2183 || (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2730
          ? (c < 2565
            ? (c < 2486
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2649
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2877
            ? (c < 2809
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2799)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2958
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3913
        ? (c < 3423
          ? (c < 3218
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3055 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3200
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3313
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3311)))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3716
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3439)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3904
                  ? (c >= 3872 && c <= 3881)
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4808
          ? (c < 4301
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || (c >= 4159 && c <= 4169)))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4240
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4249 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6160
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))
              : (c <= 6169 || (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43216
      ? (c < 8495
        ? (c < 8008
          ? (c < 7168
            ? (c < 6800
              ? (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6617 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))))
              : (c <= 6809 || (c < 6992
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7001 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7141)))))
            : (c <= 7203 || (c < 7406
              ? (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))
              : (c <= 7411 || (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8118
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))
              : (c <= 8124 || (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))))
            : (c <= 8180 || (c < 8458
              ? (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))
              : (c <= 8467 || (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))))))))
        : (c <= 8505 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8579
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8580 || (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : c <= 11502)))
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

static inline bool aux_sym_filepath_component_token1_character_set_6(int32_t c) {
  return (c < 6470
    ? (c < 2990
      ? (c < 2392
        ? (c < 1519
          ? (c < 886
            ? (c < 216
              ? (c < 170
                ? (c < 'A'
                  ? (c >= '2' && c <= '9')
                  : (c <= 'Z' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))))
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
              : (c <= 1013 || (c < 1369
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2036
            ? (c < 1774
              ? (c < 1649
                ? (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1984
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
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2565
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2649
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2877
            ? (c < 2809
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2799)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2958
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3913
        ? (c < 3423
          ? (c < 3218
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3055 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3200
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3313
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3311)))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3716
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3439)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3904
                  ? (c >= 3872 && c <= 3881)
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4808
          ? (c < 4301
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || (c >= 4159 && c <= 4169)))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4240
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4249 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6160
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))
              : (c <= 6169 || (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43216
      ? (c < 8495
        ? (c < 8008
          ? (c < 7168
            ? (c < 6800
              ? (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6617 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))))
              : (c <= 6809 || (c < 6992
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7001 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7141)))))
            : (c <= 7203 || (c < 7406
              ? (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))
              : (c <= 7411 || (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8118
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))
              : (c <= 8124 || (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))))
            : (c <= 8180 || (c < 8458
              ? (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))
              : (c <= 8467 || (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))))))))
        : (c <= 8505 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8579
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8580 || (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : c <= 11502)))
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (aux_sym_number_token1_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (aux_sym_number_token1_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (aux_sym_number_token1_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (aux_sym_number_token1_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(5)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      if (aux_sym_number_token1_character_set_1(lookahead)) ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(88);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 17:
      if (aux_sym_number_token1_character_set_2(lookahead)) ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(13);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(20)
      if (aux_sym_filepath_component_token1_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(21)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(22)
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_while);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_for);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_return_keyword);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_bit_type);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_as);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(45);
      if (aux_sym_number_token1_character_set_2(lookahead)) ADVANCE(57);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(64);
      if (aux_sym_number_token1_character_set_3(lookahead)) ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (aux_sym_number_token1_character_set_3(lookahead)) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (aux_sym_number_token1_character_set_3(lookahead)) ADVANCE(56);
      if (aux_sym_filepath_component_token1_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (aux_sym_number_token1_character_set_3(lookahead)) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (aux_sym_filepath_component_token1_character_set_5(lookahead)) ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      if (aux_sym_filepath_component_token1_character_set_6(lookahead)) ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == ';') ADVANCE(30);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      if (aux_sym_filepath_component_token1_character_set_6(lookahead)) ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (aux_sym_filepath_component_token1_character_set_5(lookahead)) ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(26);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(27);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'f') ADVANCE(25);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'g') ADVANCE(96);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'h') ADVANCE(73);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(84);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(76);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'i') ADVANCE(75);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(83);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'l') ADVANCE(66);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(69);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'n') ADVANCE(62);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'o') ADVANCE(79);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'r') ADVANCE(28);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'r') ADVANCE(77);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(36);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(72);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 's') ADVANCE(65);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(31);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 't') ADVANCE(86);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (lookahead == 'u') ADVANCE(80);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_filepath_component_token1);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_meta_item);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_underscore);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__coloncolon);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__colon);
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__equal);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__using);
      if (aux_sym_filepath_component_token1_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__asterix);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__openSquare);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__openSquare);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(13);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__closeSquare);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__openCurly);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__closeCurly);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__verticalBar);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__openParen);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__closeParen);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21, .external_lex_state = 1},
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
  [56] = {.lex_state = 1, .external_lex_state = 1},
  [57] = {.lex_state = 1, .external_lex_state = 1},
  [58] = {.lex_state = 1, .external_lex_state = 1},
  [59] = {.lex_state = 1, .external_lex_state = 1},
  [60] = {.lex_state = 1, .external_lex_state = 1},
  [61] = {.lex_state = 1, .external_lex_state = 1},
  [62] = {.lex_state = 1, .external_lex_state = 1},
  [63] = {.lex_state = 1, .external_lex_state = 1},
  [64] = {.lex_state = 1, .external_lex_state = 1},
  [65] = {.lex_state = 1, .external_lex_state = 1},
  [66] = {.lex_state = 1, .external_lex_state = 1},
  [67] = {.lex_state = 1, .external_lex_state = 1},
  [68] = {.lex_state = 1, .external_lex_state = 1},
  [69] = {.lex_state = 1, .external_lex_state = 1},
  [70] = {.lex_state = 1, .external_lex_state = 1},
  [71] = {.lex_state = 1, .external_lex_state = 1},
  [72] = {.lex_state = 1, .external_lex_state = 1},
  [73] = {.lex_state = 1, .external_lex_state = 1},
  [74] = {.lex_state = 1, .external_lex_state = 1},
  [75] = {.lex_state = 1, .external_lex_state = 1},
  [76] = {.lex_state = 1, .external_lex_state = 1},
  [77] = {.lex_state = 1, .external_lex_state = 1},
  [78] = {.lex_state = 1, .external_lex_state = 1},
  [79] = {.lex_state = 1, .external_lex_state = 1},
  [80] = {.lex_state = 1, .external_lex_state = 1},
  [81] = {.lex_state = 1, .external_lex_state = 1},
  [82] = {.lex_state = 1, .external_lex_state = 1},
  [83] = {.lex_state = 1, .external_lex_state = 1},
  [84] = {.lex_state = 1, .external_lex_state = 1},
  [85] = {.lex_state = 1, .external_lex_state = 1},
  [86] = {.lex_state = 1, .external_lex_state = 1},
  [87] = {.lex_state = 1, .external_lex_state = 1},
  [88] = {.lex_state = 4, .external_lex_state = 1},
  [89] = {.lex_state = 20, .external_lex_state = 1},
  [90] = {.lex_state = 4, .external_lex_state = 1},
  [91] = {.lex_state = 4, .external_lex_state = 1},
  [92] = {.lex_state = 4, .external_lex_state = 1},
  [93] = {.lex_state = 4, .external_lex_state = 1},
  [94] = {.lex_state = 4, .external_lex_state = 1},
  [95] = {.lex_state = 4, .external_lex_state = 1},
  [96] = {.lex_state = 4, .external_lex_state = 1},
  [97] = {.lex_state = 20, .external_lex_state = 1},
  [98] = {.lex_state = 20, .external_lex_state = 1},
  [99] = {.lex_state = 4, .external_lex_state = 1},
  [100] = {.lex_state = 4, .external_lex_state = 1},
  [101] = {.lex_state = 4, .external_lex_state = 1},
  [102] = {.lex_state = 4, .external_lex_state = 1},
  [103] = {.lex_state = 4, .external_lex_state = 1},
  [104] = {.lex_state = 4, .external_lex_state = 1},
  [105] = {.lex_state = 4, .external_lex_state = 1},
  [106] = {.lex_state = 4, .external_lex_state = 1},
  [107] = {.lex_state = 20, .external_lex_state = 1},
  [108] = {.lex_state = 20, .external_lex_state = 1},
  [109] = {.lex_state = 20, .external_lex_state = 1},
  [110] = {.lex_state = 5, .external_lex_state = 1},
  [111] = {.lex_state = 4, .external_lex_state = 1},
  [112] = {.lex_state = 4, .external_lex_state = 1},
  [113] = {.lex_state = 20, .external_lex_state = 1},
  [114] = {.lex_state = 4, .external_lex_state = 1},
  [115] = {.lex_state = 4, .external_lex_state = 1},
  [116] = {.lex_state = 20, .external_lex_state = 1},
  [117] = {.lex_state = 20, .external_lex_state = 1},
  [118] = {.lex_state = 4, .external_lex_state = 1},
  [119] = {.lex_state = 4, .external_lex_state = 1},
  [120] = {.lex_state = 4, .external_lex_state = 1},
  [121] = {.lex_state = 4, .external_lex_state = 1},
  [122] = {.lex_state = 4, .external_lex_state = 1},
  [123] = {.lex_state = 20, .external_lex_state = 1},
  [124] = {.lex_state = 4, .external_lex_state = 1},
  [125] = {.lex_state = 4, .external_lex_state = 1},
  [126] = {.lex_state = 20, .external_lex_state = 1},
  [127] = {.lex_state = 4, .external_lex_state = 1},
  [128] = {.lex_state = 20, .external_lex_state = 1},
  [129] = {.lex_state = 4, .external_lex_state = 1},
  [130] = {.lex_state = 4, .external_lex_state = 1},
  [131] = {.lex_state = 4, .external_lex_state = 1},
  [132] = {.lex_state = 4, .external_lex_state = 1},
  [133] = {.lex_state = 4, .external_lex_state = 1},
  [134] = {.lex_state = 20, .external_lex_state = 1},
  [135] = {.lex_state = 4, .external_lex_state = 1},
  [136] = {.lex_state = 4, .external_lex_state = 1},
  [137] = {.lex_state = 20, .external_lex_state = 1},
  [138] = {.lex_state = 4, .external_lex_state = 1},
  [139] = {.lex_state = 4, .external_lex_state = 1},
  [140] = {.lex_state = 4, .external_lex_state = 1},
  [141] = {.lex_state = 4, .external_lex_state = 1},
  [142] = {.lex_state = 4, .external_lex_state = 1},
  [143] = {.lex_state = 4, .external_lex_state = 1},
  [144] = {.lex_state = 4, .external_lex_state = 1},
  [145] = {.lex_state = 20, .external_lex_state = 1},
  [146] = {.lex_state = 4, .external_lex_state = 1},
  [147] = {.lex_state = 20, .external_lex_state = 1},
  [148] = {.lex_state = 4, .external_lex_state = 1},
  [149] = {.lex_state = 4, .external_lex_state = 1},
  [150] = {.lex_state = 20, .external_lex_state = 1},
  [151] = {.lex_state = 2, .external_lex_state = 1},
  [152] = {.lex_state = 5, .external_lex_state = 1},
  [153] = {.lex_state = 5, .external_lex_state = 1},
  [154] = {.lex_state = 5, .external_lex_state = 1},
  [155] = {.lex_state = 5, .external_lex_state = 1},
  [156] = {.lex_state = 5, .external_lex_state = 1},
  [157] = {.lex_state = 20, .external_lex_state = 1},
  [158] = {.lex_state = 20, .external_lex_state = 1},
  [159] = {.lex_state = 5, .external_lex_state = 1},
  [160] = {.lex_state = 5, .external_lex_state = 1},
  [161] = {.lex_state = 20, .external_lex_state = 1},
  [162] = {.lex_state = 5, .external_lex_state = 1},
  [163] = {.lex_state = 2, .external_lex_state = 1},
  [164] = {.lex_state = 20, .external_lex_state = 1},
  [165] = {.lex_state = 5, .external_lex_state = 1},
  [166] = {.lex_state = 20, .external_lex_state = 1},
  [167] = {.lex_state = 20, .external_lex_state = 1},
  [168] = {.lex_state = 20, .external_lex_state = 1},
  [169] = {.lex_state = 20, .external_lex_state = 1},
  [170] = {.lex_state = 20, .external_lex_state = 1},
  [171] = {.lex_state = 20, .external_lex_state = 1},
  [172] = {.lex_state = 5, .external_lex_state = 1},
  [173] = {.lex_state = 5, .external_lex_state = 1},
  [174] = {.lex_state = 5, .external_lex_state = 1},
  [175] = {.lex_state = 20, .external_lex_state = 1},
  [176] = {.lex_state = 20, .external_lex_state = 1},
  [177] = {.lex_state = 5, .external_lex_state = 1},
  [178] = {.lex_state = 5, .external_lex_state = 1},
  [179] = {.lex_state = 20, .external_lex_state = 1},
  [180] = {.lex_state = 5, .external_lex_state = 1},
  [181] = {.lex_state = 20, .external_lex_state = 1},
  [182] = {.lex_state = 20, .external_lex_state = 1},
  [183] = {.lex_state = 20, .external_lex_state = 1},
  [184] = {.lex_state = 20, .external_lex_state = 1},
  [185] = {.lex_state = 20, .external_lex_state = 1},
  [186] = {.lex_state = 20, .external_lex_state = 1},
  [187] = {.lex_state = 20, .external_lex_state = 1},
  [188] = {.lex_state = 20, .external_lex_state = 1},
  [189] = {.lex_state = 20, .external_lex_state = 1},
  [190] = {.lex_state = 4, .external_lex_state = 1},
  [191] = {.lex_state = 20, .external_lex_state = 1},
  [192] = {.lex_state = 20, .external_lex_state = 1},
  [193] = {.lex_state = 20, .external_lex_state = 1},
  [194] = {.lex_state = 2, .external_lex_state = 1},
  [195] = {.lex_state = 20, .external_lex_state = 1},
  [196] = {.lex_state = 20, .external_lex_state = 1},
  [197] = {.lex_state = 20, .external_lex_state = 1},
  [198] = {.lex_state = 3, .external_lex_state = 1},
  [199] = {.lex_state = 3, .external_lex_state = 1},
  [200] = {.lex_state = 3, .external_lex_state = 1},
  [201] = {.lex_state = 3, .external_lex_state = 1},
  [202] = {.lex_state = 3, .external_lex_state = 1},
  [203] = {.lex_state = 3, .external_lex_state = 1},
  [204] = {.lex_state = 3, .external_lex_state = 1},
  [205] = {.lex_state = 4, .external_lex_state = 1},
  [206] = {.lex_state = 3, .external_lex_state = 1},
  [207] = {.lex_state = 3, .external_lex_state = 1},
  [208] = {.lex_state = 5, .external_lex_state = 1},
  [209] = {.lex_state = 5, .external_lex_state = 1},
  [210] = {.lex_state = 5, .external_lex_state = 1},
  [211] = {.lex_state = 5, .external_lex_state = 1},
  [212] = {.lex_state = 5, .external_lex_state = 1},
  [213] = {.lex_state = 5, .external_lex_state = 1},
  [214] = {.lex_state = 5, .external_lex_state = 1},
  [215] = {.lex_state = 5, .external_lex_state = 1},
  [216] = {.lex_state = 5, .external_lex_state = 1},
  [217] = {.lex_state = 5, .external_lex_state = 1},
  [218] = {.lex_state = 5, .external_lex_state = 1},
  [219] = {.lex_state = 5, .external_lex_state = 1},
  [220] = {.lex_state = 5, .external_lex_state = 1},
  [221] = {.lex_state = 5, .external_lex_state = 1},
  [222] = {.lex_state = 5, .external_lex_state = 1},
  [223] = {.lex_state = 5, .external_lex_state = 1},
  [224] = {.lex_state = 5, .external_lex_state = 1},
  [225] = {.lex_state = 5, .external_lex_state = 1},
  [226] = {.lex_state = 5, .external_lex_state = 1},
  [227] = {.lex_state = 5, .external_lex_state = 1},
  [228] = {.lex_state = 5, .external_lex_state = 1},
  [229] = {.lex_state = 5, .external_lex_state = 1},
  [230] = {.lex_state = 5, .external_lex_state = 1},
  [231] = {.lex_state = 5, .external_lex_state = 1},
  [232] = {.lex_state = 5, .external_lex_state = 1},
  [233] = {.lex_state = 5, .external_lex_state = 1},
  [234] = {.lex_state = 5, .external_lex_state = 1},
  [235] = {.lex_state = 5, .external_lex_state = 1},
  [236] = {.lex_state = 5, .external_lex_state = 1},
  [237] = {.lex_state = 4, .external_lex_state = 1},
  [238] = {.lex_state = 4, .external_lex_state = 1},
  [239] = {.lex_state = 4, .external_lex_state = 1},
  [240] = {.lex_state = 4, .external_lex_state = 1},
  [241] = {.lex_state = 4, .external_lex_state = 1},
  [242] = {.lex_state = 4, .external_lex_state = 1},
  [243] = {.lex_state = 4, .external_lex_state = 1},
  [244] = {.lex_state = 21, .external_lex_state = 1},
  [245] = {.lex_state = 7, .external_lex_state = 1},
  [246] = {.lex_state = 21, .external_lex_state = 1},
  [247] = {.lex_state = 7, .external_lex_state = 1},
  [248] = {.lex_state = 7, .external_lex_state = 1},
  [249] = {.lex_state = 7, .external_lex_state = 1},
  [250] = {.lex_state = 7, .external_lex_state = 1},
  [251] = {.lex_state = 7, .external_lex_state = 1},
  [252] = {.lex_state = 7, .external_lex_state = 1},
  [253] = {.lex_state = 7, .external_lex_state = 1},
  [254] = {.lex_state = 7, .external_lex_state = 1},
  [255] = {.lex_state = 7, .external_lex_state = 1},
  [256] = {.lex_state = 7, .external_lex_state = 1},
  [257] = {.lex_state = 7, .external_lex_state = 1},
  [258] = {.lex_state = 7, .external_lex_state = 1},
  [259] = {.lex_state = 7, .external_lex_state = 1},
  [260] = {.lex_state = 7, .external_lex_state = 1},
  [261] = {.lex_state = 7, .external_lex_state = 1},
  [262] = {.lex_state = 7, .external_lex_state = 1},
  [263] = {.lex_state = 7, .external_lex_state = 1},
  [264] = {.lex_state = 7, .external_lex_state = 1},
  [265] = {.lex_state = 7, .external_lex_state = 1},
  [266] = {.lex_state = 7, .external_lex_state = 1},
  [267] = {.lex_state = 21, .external_lex_state = 1},
  [268] = {.lex_state = 21, .external_lex_state = 1},
  [269] = {.lex_state = 21, .external_lex_state = 1},
  [270] = {.lex_state = 21, .external_lex_state = 1},
  [271] = {.lex_state = 21, .external_lex_state = 1},
  [272] = {.lex_state = 8, .external_lex_state = 1},
  [273] = {.lex_state = 21, .external_lex_state = 1},
  [274] = {.lex_state = 21, .external_lex_state = 1},
  [275] = {.lex_state = 21, .external_lex_state = 1},
  [276] = {.lex_state = 8, .external_lex_state = 1},
  [277] = {.lex_state = 8, .external_lex_state = 1},
  [278] = {.lex_state = 21, .external_lex_state = 1},
  [279] = {.lex_state = 8, .external_lex_state = 1},
  [280] = {.lex_state = 21, .external_lex_state = 1},
  [281] = {.lex_state = 21, .external_lex_state = 1},
  [282] = {.lex_state = 21, .external_lex_state = 1},
  [283] = {.lex_state = 8, .external_lex_state = 1},
  [284] = {.lex_state = 8, .external_lex_state = 1},
  [285] = {.lex_state = 8, .external_lex_state = 1},
  [286] = {.lex_state = 8, .external_lex_state = 1},
  [287] = {.lex_state = 21, .external_lex_state = 1},
  [288] = {.lex_state = 8, .external_lex_state = 1},
  [289] = {.lex_state = 21, .external_lex_state = 1},
  [290] = {.lex_state = 8, .external_lex_state = 1},
  [291] = {.lex_state = 21, .external_lex_state = 1},
  [292] = {.lex_state = 21, .external_lex_state = 1},
  [293] = {.lex_state = 22, .external_lex_state = 1},
  [294] = {.lex_state = 22, .external_lex_state = 1},
  [295] = {.lex_state = 8, .external_lex_state = 1},
  [296] = {.lex_state = 22, .external_lex_state = 1},
  [297] = {.lex_state = 8, .external_lex_state = 1},
  [298] = {.lex_state = 8, .external_lex_state = 1},
  [299] = {.lex_state = 8, .external_lex_state = 1},
  [300] = {.lex_state = 8, .external_lex_state = 1},
  [301] = {.lex_state = 8, .external_lex_state = 1},
  [302] = {.lex_state = 8, .external_lex_state = 1},
  [303] = {.lex_state = 8, .external_lex_state = 1},
  [304] = {.lex_state = 8, .external_lex_state = 1},
  [305] = {.lex_state = 8, .external_lex_state = 1},
  [306] = {.lex_state = 8, .external_lex_state = 1},
  [307] = {.lex_state = 8, .external_lex_state = 1},
  [308] = {.lex_state = 8, .external_lex_state = 1},
  [309] = {.lex_state = 8, .external_lex_state = 1},
  [310] = {.lex_state = 8, .external_lex_state = 1},
  [311] = {.lex_state = 8, .external_lex_state = 1},
  [312] = {.lex_state = 8, .external_lex_state = 1},
  [313] = {.lex_state = 8, .external_lex_state = 1},
  [314] = {.lex_state = 22, .external_lex_state = 1},
  [315] = {.lex_state = 21, .external_lex_state = 1},
  [316] = {.lex_state = 21, .external_lex_state = 1},
  [317] = {.lex_state = 8, .external_lex_state = 1},
  [318] = {.lex_state = 8, .external_lex_state = 1},
  [319] = {.lex_state = 9, .external_lex_state = 1},
  [320] = {.lex_state = 8, .external_lex_state = 1},
  [321] = {.lex_state = 8, .external_lex_state = 1},
  [322] = {.lex_state = 8, .external_lex_state = 1},
  [323] = {.lex_state = 0, .external_lex_state = 1},
  [324] = {.lex_state = 9, .external_lex_state = 1},
  [325] = {.lex_state = 21, .external_lex_state = 1},
  [326] = {.lex_state = 0, .external_lex_state = 1},
  [327] = {.lex_state = 8, .external_lex_state = 1},
  [328] = {.lex_state = 9, .external_lex_state = 1},
  [329] = {.lex_state = 8, .external_lex_state = 1},
  [330] = {.lex_state = 22, .external_lex_state = 1},
  [331] = {.lex_state = 9, .external_lex_state = 1},
  [332] = {.lex_state = 8, .external_lex_state = 1},
  [333] = {.lex_state = 9, .external_lex_state = 1},
  [334] = {.lex_state = 8, .external_lex_state = 1},
  [335] = {.lex_state = 8, .external_lex_state = 1},
  [336] = {.lex_state = 8, .external_lex_state = 1},
  [337] = {.lex_state = 21, .external_lex_state = 1},
  [338] = {.lex_state = 21, .external_lex_state = 1},
  [339] = {.lex_state = 8, .external_lex_state = 1},
  [340] = {.lex_state = 8, .external_lex_state = 1},
  [341] = {.lex_state = 8, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 21, .external_lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 1},
  [345] = {.lex_state = 8, .external_lex_state = 1},
  [346] = {.lex_state = 21, .external_lex_state = 1},
  [347] = {.lex_state = 8, .external_lex_state = 1},
  [348] = {.lex_state = 21, .external_lex_state = 1},
  [349] = {.lex_state = 21, .external_lex_state = 1},
  [350] = {.lex_state = 8, .external_lex_state = 1},
  [351] = {.lex_state = 21, .external_lex_state = 1},
  [352] = {.lex_state = 8, .external_lex_state = 1},
  [353] = {.lex_state = 8, .external_lex_state = 1},
  [354] = {.lex_state = 21, .external_lex_state = 1},
  [355] = {.lex_state = 8, .external_lex_state = 1},
  [356] = {.lex_state = 0, .external_lex_state = 1},
  [357] = {.lex_state = 0, .external_lex_state = 1},
  [358] = {.lex_state = 21, .external_lex_state = 1},
  [359] = {.lex_state = 0, .external_lex_state = 1},
  [360] = {.lex_state = 8, .external_lex_state = 1},
  [361] = {.lex_state = 8, .external_lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 1},
  [363] = {.lex_state = 0, .external_lex_state = 1},
  [364] = {.lex_state = 0, .external_lex_state = 1},
  [365] = {.lex_state = 8, .external_lex_state = 1},
  [366] = {.lex_state = 0, .external_lex_state = 1},
  [367] = {.lex_state = 0, .external_lex_state = 1},
  [368] = {.lex_state = 0, .external_lex_state = 1},
  [369] = {.lex_state = 0, .external_lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 1},
  [371] = {.lex_state = 8, .external_lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 1},
  [373] = {.lex_state = 0, .external_lex_state = 1},
  [374] = {.lex_state = 8, .external_lex_state = 1},
  [375] = {.lex_state = 8, .external_lex_state = 1},
  [376] = {.lex_state = 0, .external_lex_state = 1},
  [377] = {.lex_state = 0, .external_lex_state = 1},
  [378] = {.lex_state = 8, .external_lex_state = 1},
  [379] = {.lex_state = 0, .external_lex_state = 1},
  [380] = {.lex_state = 0, .external_lex_state = 1},
  [381] = {.lex_state = 0, .external_lex_state = 1},
  [382] = {.lex_state = 0, .external_lex_state = 1},
  [383] = {.lex_state = 0, .external_lex_state = 1},
  [384] = {.lex_state = 0, .external_lex_state = 1},
  [385] = {.lex_state = 0, .external_lex_state = 1},
  [386] = {.lex_state = 0, .external_lex_state = 1},
  [387] = {.lex_state = 8, .external_lex_state = 1},
  [388] = {.lex_state = 0, .external_lex_state = 1},
  [389] = {.lex_state = 0, .external_lex_state = 1},
  [390] = {.lex_state = 8, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 0, .external_lex_state = 1},
  [393] = {.lex_state = 0, .external_lex_state = 1},
  [394] = {.lex_state = 8, .external_lex_state = 1},
  [395] = {.lex_state = 0, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 0, .external_lex_state = 1},
  [398] = {.lex_state = 0, .external_lex_state = 1},
  [399] = {.lex_state = 0, .external_lex_state = 1},
  [400] = {.lex_state = 21, .external_lex_state = 1},
  [401] = {.lex_state = 0, .external_lex_state = 1},
  [402] = {.lex_state = 0, .external_lex_state = 1},
  [403] = {.lex_state = 21, .external_lex_state = 1},
  [404] = {.lex_state = 0, .external_lex_state = 1},
  [405] = {.lex_state = 0, .external_lex_state = 1},
  [406] = {.lex_state = 21, .external_lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 1},
  [408] = {.lex_state = 21, .external_lex_state = 1},
  [409] = {.lex_state = 21, .external_lex_state = 1},
  [410] = {.lex_state = 21, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 21, .external_lex_state = 1},
  [417] = {.lex_state = 0, .external_lex_state = 1},
  [418] = {.lex_state = 0, .external_lex_state = 1},
  [419] = {.lex_state = 0, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 0, .external_lex_state = 1},
  [422] = {.lex_state = 0, .external_lex_state = 1},
  [423] = {.lex_state = 21, .external_lex_state = 1},
  [424] = {.lex_state = 0, .external_lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token__block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__block_comment] = sym__block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_return_keyword] = ACTIONS(1),
    [sym_bit_type] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_filepath_component_token1] = ACTIONS(1),
    [sym_meta_item] = ACTIONS(1),
    [sym_underscore] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym__coloncolon] = ACTIONS(1),
    [sym__colon] = ACTIONS(1),
    [sym__equal] = ACTIONS(1),
    [sym__using] = ACTIONS(1),
    [sym__asterix] = ACTIONS(1),
    [sym__openSquare] = ACTIONS(1),
    [sym__closeSquare] = ACTIONS(1),
    [sym__openCurly] = ACTIONS(1),
    [sym__closeCurly] = ACTIONS(1),
    [sym__verticalBar] = ACTIONS(1),
    [sym__openParen] = ACTIONS(1),
    [sym__closeParen] = ACTIONS(1),
    [sym__block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(412),
    [sym__global_definition] = STATE(244),
    [sym__definition_or_type] = STATE(244),
    [sym_variable_definition] = STATE(244),
    [sym_function_definition] = STATE(244),
    [sym_type_definition] = STATE(244),
    [sym_meta_list] = STATE(365),
    [sym_identifier_list] = STATE(406),
    [sym_using_statement] = STATE(244),
    [sym_identifier] = STATE(348),
    [aux_sym_source_file_repeat1] = STATE(244),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [aux_sym_filepath_component_token1] = ACTIONS(7),
    [sym_meta_item] = ACTIONS(9),
    [sym__using] = ACTIONS(11),
    [sym__block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_variable_definition] = STATE(419),
    [sym_statement] = STATE(6),
    [sym_statement_expression] = STATE(201),
    [sym_if_statement] = STATE(201),
    [sym_while_statement] = STATE(201),
    [sym_for_statement] = STATE(201),
    [sym_local_variable_definition] = STATE(201),
    [sym_meta_list] = STATE(360),
    [sym_identifier_list] = STATE(403),
    [sym_expression] = STATE(411),
    [sym__expression] = STATE(190),
    [sym_bracketed] = STATE(190),
    [sym_subscript] = STATE(190),
    [sym_address_of] = STATE(190),
    [sym_dereference] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_dot] = STATE(190),
    [sym_function_call] = STATE(190),
    [sym_as] = STATE(190),
    [sym_sum] = STATE(190),
    [sym_subtraction] = STATE(190),
    [sym_division] = STATE(190),
    [sym_modulus] = STATE(190),
    [sym_product] = STATE(190),
    [sym_cond_inver] = STATE(190),
    [sym_negate] = STATE(190),
    [sym_pre_inc] = STATE(190),
    [sym_pre_dec] = STATE(190),
    [sym_post_inc] = STATE(190),
    [sym_post_dec] = STATE(190),
    [sym_cond_equal] = STATE(190),
    [sym_cond_not_equal] = STATE(190),
    [sym_cond_less] = STATE(190),
    [sym_cond_greater] = STATE(190),
    [sym_cond_less_equal] = STATE(190),
    [sym_cond_greater_equal] = STATE(190),
    [sym_number] = STATE(190),
    [sym_identifier] = STATE(111),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [sym_return_keyword] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_filepath_component_token1] = ACTIONS(35),
    [sym_meta_item] = ACTIONS(9),
    [sym_underscore] = ACTIONS(37),
    [sym__asterix] = ACTIONS(39),
    [sym__closeCurly] = ACTIONS(41),
    [sym__openParen] = ACTIONS(43),
    [sym__block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_variable_definition] = STATE(419),
    [sym_statement] = STATE(7),
    [sym_statement_expression] = STATE(201),
    [sym_if_statement] = STATE(201),
    [sym_while_statement] = STATE(201),
    [sym_for_statement] = STATE(201),
    [sym_local_variable_definition] = STATE(201),
    [sym_meta_list] = STATE(360),
    [sym_identifier_list] = STATE(403),
    [sym_expression] = STATE(411),
    [sym__expression] = STATE(190),
    [sym_bracketed] = STATE(190),
    [sym_subscript] = STATE(190),
    [sym_address_of] = STATE(190),
    [sym_dereference] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_dot] = STATE(190),
    [sym_function_call] = STATE(190),
    [sym_as] = STATE(190),
    [sym_sum] = STATE(190),
    [sym_subtraction] = STATE(190),
    [sym_division] = STATE(190),
    [sym_modulus] = STATE(190),
    [sym_product] = STATE(190),
    [sym_cond_inver] = STATE(190),
    [sym_negate] = STATE(190),
    [sym_pre_inc] = STATE(190),
    [sym_pre_dec] = STATE(190),
    [sym_post_inc] = STATE(190),
    [sym_post_dec] = STATE(190),
    [sym_cond_equal] = STATE(190),
    [sym_cond_not_equal] = STATE(190),
    [sym_cond_less] = STATE(190),
    [sym_cond_greater] = STATE(190),
    [sym_cond_less_equal] = STATE(190),
    [sym_cond_greater_equal] = STATE(190),
    [sym_number] = STATE(190),
    [sym_identifier] = STATE(111),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [sym_return_keyword] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_filepath_component_token1] = ACTIONS(35),
    [sym_meta_item] = ACTIONS(9),
    [sym_underscore] = ACTIONS(37),
    [sym__asterix] = ACTIONS(39),
    [sym__closeCurly] = ACTIONS(45),
    [sym__openParen] = ACTIONS(43),
    [sym__block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_variable_definition] = STATE(419),
    [sym_statement] = STATE(8),
    [sym_statement_expression] = STATE(201),
    [sym_if_statement] = STATE(201),
    [sym_while_statement] = STATE(201),
    [sym_for_statement] = STATE(201),
    [sym_local_variable_definition] = STATE(201),
    [sym_meta_list] = STATE(360),
    [sym_identifier_list] = STATE(403),
    [sym_expression] = STATE(411),
    [sym__expression] = STATE(190),
    [sym_bracketed] = STATE(190),
    [sym_subscript] = STATE(190),
    [sym_address_of] = STATE(190),
    [sym_dereference] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_dot] = STATE(190),
    [sym_function_call] = STATE(190),
    [sym_as] = STATE(190),
    [sym_sum] = STATE(190),
    [sym_subtraction] = STATE(190),
    [sym_division] = STATE(190),
    [sym_modulus] = STATE(190),
    [sym_product] = STATE(190),
    [sym_cond_inver] = STATE(190),
    [sym_negate] = STATE(190),
    [sym_pre_inc] = STATE(190),
    [sym_pre_dec] = STATE(190),
    [sym_post_inc] = STATE(190),
    [sym_post_dec] = STATE(190),
    [sym_cond_equal] = STATE(190),
    [sym_cond_not_equal] = STATE(190),
    [sym_cond_less] = STATE(190),
    [sym_cond_greater] = STATE(190),
    [sym_cond_less_equal] = STATE(190),
    [sym_cond_greater_equal] = STATE(190),
    [sym_number] = STATE(190),
    [sym_identifier] = STATE(111),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [sym_return_keyword] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_filepath_component_token1] = ACTIONS(35),
    [sym_meta_item] = ACTIONS(9),
    [sym_underscore] = ACTIONS(37),
    [sym__asterix] = ACTIONS(39),
    [sym__closeCurly] = ACTIONS(47),
    [sym__openParen] = ACTIONS(43),
    [sym__block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_variable_definition] = STATE(419),
    [sym_statement] = STATE(4),
    [sym_statement_expression] = STATE(201),
    [sym_if_statement] = STATE(201),
    [sym_while_statement] = STATE(201),
    [sym_for_statement] = STATE(201),
    [sym_local_variable_definition] = STATE(201),
    [sym_meta_list] = STATE(360),
    [sym_identifier_list] = STATE(403),
    [sym_expression] = STATE(411),
    [sym__expression] = STATE(190),
    [sym_bracketed] = STATE(190),
    [sym_subscript] = STATE(190),
    [sym_address_of] = STATE(190),
    [sym_dereference] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_dot] = STATE(190),
    [sym_function_call] = STATE(190),
    [sym_as] = STATE(190),
    [sym_sum] = STATE(190),
    [sym_subtraction] = STATE(190),
    [sym_division] = STATE(190),
    [sym_modulus] = STATE(190),
    [sym_product] = STATE(190),
    [sym_cond_inver] = STATE(190),
    [sym_negate] = STATE(190),
    [sym_pre_inc] = STATE(190),
    [sym_pre_dec] = STATE(190),
    [sym_post_inc] = STATE(190),
    [sym_post_dec] = STATE(190),
    [sym_cond_equal] = STATE(190),
    [sym_cond_not_equal] = STATE(190),
    [sym_cond_less] = STATE(190),
    [sym_cond_greater] = STATE(190),
    [sym_cond_less_equal] = STATE(190),
    [sym_cond_greater_equal] = STATE(190),
    [sym_number] = STATE(190),
    [sym_identifier] = STATE(111),
    [aux_sym_block_repeat1] = STATE(4),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [sym_return_keyword] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_filepath_component_token1] = ACTIONS(35),
    [sym_meta_item] = ACTIONS(9),
    [sym_underscore] = ACTIONS(37),
    [sym__asterix] = ACTIONS(39),
    [sym__closeCurly] = ACTIONS(49),
    [sym__openParen] = ACTIONS(43),
    [sym__block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_variable_definition] = STATE(419),
    [sym_statement] = STATE(8),
    [sym_statement_expression] = STATE(201),
    [sym_if_statement] = STATE(201),
    [sym_while_statement] = STATE(201),
    [sym_for_statement] = STATE(201),
    [sym_local_variable_definition] = STATE(201),
    [sym_meta_list] = STATE(360),
    [sym_identifier_list] = STATE(403),
    [sym_expression] = STATE(411),
    [sym__expression] = STATE(190),
    [sym_bracketed] = STATE(190),
    [sym_subscript] = STATE(190),
    [sym_address_of] = STATE(190),
    [sym_dereference] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_dot] = STATE(190),
    [sym_function_call] = STATE(190),
    [sym_as] = STATE(190),
    [sym_sum] = STATE(190),
    [sym_subtraction] = STATE(190),
    [sym_division] = STATE(190),
    [sym_modulus] = STATE(190),
    [sym_product] = STATE(190),
    [sym_cond_inver] = STATE(190),
    [sym_negate] = STATE(190),
    [sym_pre_inc] = STATE(190),
    [sym_pre_dec] = STATE(190),
    [sym_post_inc] = STATE(190),
    [sym_post_dec] = STATE(190),
    [sym_cond_equal] = STATE(190),
    [sym_cond_not_equal] = STATE(190),
    [sym_cond_less] = STATE(190),
    [sym_cond_greater] = STATE(190),
    [sym_cond_less_equal] = STATE(190),
    [sym_cond_greater_equal] = STATE(190),
    [sym_number] = STATE(190),
    [sym_identifier] = STATE(111),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [sym_return_keyword] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_filepath_component_token1] = ACTIONS(35),
    [sym_meta_item] = ACTIONS(9),
    [sym_underscore] = ACTIONS(37),
    [sym__asterix] = ACTIONS(39),
    [sym__closeCurly] = ACTIONS(51),
    [sym__openParen] = ACTIONS(43),
    [sym__block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_variable_definition] = STATE(419),
    [sym_statement] = STATE(8),
    [sym_statement_expression] = STATE(201),
    [sym_if_statement] = STATE(201),
    [sym_while_statement] = STATE(201),
    [sym_for_statement] = STATE(201),
    [sym_local_variable_definition] = STATE(201),
    [sym_meta_list] = STATE(360),
    [sym_identifier_list] = STATE(403),
    [sym_expression] = STATE(411),
    [sym__expression] = STATE(190),
    [sym_bracketed] = STATE(190),
    [sym_subscript] = STATE(190),
    [sym_address_of] = STATE(190),
    [sym_dereference] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_dot] = STATE(190),
    [sym_function_call] = STATE(190),
    [sym_as] = STATE(190),
    [sym_sum] = STATE(190),
    [sym_subtraction] = STATE(190),
    [sym_division] = STATE(190),
    [sym_modulus] = STATE(190),
    [sym_product] = STATE(190),
    [sym_cond_inver] = STATE(190),
    [sym_negate] = STATE(190),
    [sym_pre_inc] = STATE(190),
    [sym_pre_dec] = STATE(190),
    [sym_post_inc] = STATE(190),
    [sym_post_dec] = STATE(190),
    [sym_cond_equal] = STATE(190),
    [sym_cond_not_equal] = STATE(190),
    [sym_cond_less] = STATE(190),
    [sym_cond_greater] = STATE(190),
    [sym_cond_less_equal] = STATE(190),
    [sym_cond_greater_equal] = STATE(190),
    [sym_number] = STATE(190),
    [sym_identifier] = STATE(111),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [sym_return_keyword] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(33),
    [aux_sym_number_token3] = ACTIONS(33),
    [aux_sym_filepath_component_token1] = ACTIONS(35),
    [sym_meta_item] = ACTIONS(9),
    [sym_underscore] = ACTIONS(37),
    [sym__asterix] = ACTIONS(39),
    [sym__closeCurly] = ACTIONS(53),
    [sym__openParen] = ACTIONS(43),
    [sym__block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_variable_definition] = STATE(419),
    [sym_statement] = STATE(8),
    [sym_statement_expression] = STATE(201),
    [sym_if_statement] = STATE(201),
    [sym_while_statement] = STATE(201),
    [sym_for_statement] = STATE(201),
    [sym_local_variable_definition] = STATE(201),
    [sym_meta_list] = STATE(360),
    [sym_identifier_list] = STATE(403),
    [sym_expression] = STATE(411),
    [sym__expression] = STATE(190),
    [sym_bracketed] = STATE(190),
    [sym_subscript] = STATE(190),
    [sym_address_of] = STATE(190),
    [sym_dereference] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_dot] = STATE(190),
    [sym_function_call] = STATE(190),
    [sym_as] = STATE(190),
    [sym_sum] = STATE(190),
    [sym_subtraction] = STATE(190),
    [sym_division] = STATE(190),
    [sym_modulus] = STATE(190),
    [sym_product] = STATE(190),
    [sym_cond_inver] = STATE(190),
    [sym_negate] = STATE(190),
    [sym_pre_inc] = STATE(190),
    [sym_pre_dec] = STATE(190),
    [sym_post_inc] = STATE(190),
    [sym_post_dec] = STATE(190),
    [sym_cond_equal] = STATE(190),
    [sym_cond_not_equal] = STATE(190),
    [sym_cond_less] = STATE(190),
    [sym_cond_greater] = STATE(190),
    [sym_cond_less_equal] = STATE(190),
    [sym_cond_greater_equal] = STATE(190),
    [sym_number] = STATE(190),
    [sym_identifier] = STATE(111),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_meta_list_repeat1] = STATE(378),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_while] = ACTIONS(58),
    [anon_sym_for] = ACTIONS(61),
    [sym_return_keyword] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(73),
    [anon_sym_PLUS_PLUS] = ACTIONS(76),
    [anon_sym_DASH_DASH] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [sym_string] = ACTIONS(82),
    [aux_sym_number_token1] = ACTIONS(85),
    [aux_sym_number_token2] = ACTIONS(85),
    [aux_sym_number_token3] = ACTIONS(85),
    [aux_sym_filepath_component_token1] = ACTIONS(88),
    [sym_meta_item] = ACTIONS(91),
    [sym_underscore] = ACTIONS(94),
    [sym__asterix] = ACTIONS(97),
    [sym__closeCurly] = ACTIONS(100),
    [sym__openParen] = ACTIONS(102),
    [sym__block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(105), 1,
      sym__closeParen,
    STATE(90), 1,
      sym_identifier,
    STATE(213), 1,
      sym_function_call_args,
    STATE(383), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [81] = 17,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(123), 1,
      sym_underscore,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(127), 1,
      sym__openCurly,
    ACTIONS(129), 1,
      sym__openParen,
    STATE(145), 1,
      sym_identifier,
    STATE(316), 1,
      sym_expression,
    STATE(343), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(166), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [162] = 17,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(123), 1,
      sym_underscore,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(127), 1,
      sym__openCurly,
    ACTIONS(129), 1,
      sym__openParen,
    STATE(145), 1,
      sym_identifier,
    STATE(325), 1,
      sym_expression,
    STATE(338), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(166), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [243] = 17,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(131), 1,
      sym__closeParen,
    STATE(90), 1,
      sym_identifier,
    STATE(157), 1,
      sym_function_call_args,
    STATE(369), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [324] = 17,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(133), 1,
      sym__closeParen,
    STATE(90), 1,
      sym_identifier,
    STATE(142), 1,
      sym_function_call_args,
    STATE(363), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [405] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(135), 1,
      sym_string,
    ACTIONS(137), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    STATE(393), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(241), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [480] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(135), 1,
      sym_string,
    ACTIONS(137), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    STATE(395), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(241), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [555] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(135), 1,
      sym_string,
    ACTIONS(137), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    STATE(389), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(241), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [630] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    STATE(90), 1,
      sym_identifier,
    STATE(325), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [705] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    STATE(90), 1,
      sym_identifier,
    STATE(402), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [780] = 15,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(149), 1,
      sym_string,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(155), 1,
      sym_underscore,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    STATE(165), 1,
      sym_identifier,
    STATE(394), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(235), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [855] = 15,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(123), 1,
      sym_underscore,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    STATE(145), 1,
      sym_identifier,
    STATE(316), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(166), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [930] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    STATE(90), 1,
      sym_identifier,
    STATE(384), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1005] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    STATE(90), 1,
      sym_identifier,
    STATE(316), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1080] = 15,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      sym_string,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(123), 1,
      sym_underscore,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    STATE(145), 1,
      sym_identifier,
    STATE(315), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(166), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1155] = 15,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(37), 1,
      sym_underscore,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    STATE(90), 1,
      sym_identifier,
    STATE(315), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(190), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1230] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(161), 1,
      sym_string,
    ACTIONS(163), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(209), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1302] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(165), 1,
      sym_string,
    ACTIONS(167), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(127), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1374] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(169), 1,
      sym_string,
    ACTIONS(171), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(112), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1446] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(173), 1,
      sym_string,
    ACTIONS(175), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(239), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1518] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(177), 1,
      sym_string,
    ACTIONS(179), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(243), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1590] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(181), 1,
      sym_string,
    ACTIONS(183), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(238), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1662] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(185), 1,
      sym_string,
    ACTIONS(187), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(231), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1734] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(189), 1,
      sym_string,
    ACTIONS(191), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(215), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1806] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(193), 1,
      sym_string,
    ACTIONS(195), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(216), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1878] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(197), 1,
      sym_string,
    ACTIONS(199), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(217), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [1950] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(201), 1,
      sym_string,
    ACTIONS(203), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(218), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2022] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(205), 1,
      sym_string,
    ACTIONS(207), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(182), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2094] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(209), 1,
      sym_string,
    ACTIONS(211), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(175), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2166] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(213), 1,
      sym_string,
    ACTIONS(215), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(168), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2238] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(217), 1,
      sym_string,
    ACTIONS(219), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(169), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2310] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(221), 1,
      sym_string,
    ACTIONS(223), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(170), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2382] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(225), 1,
      sym_string,
    ACTIONS(227), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(219), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2454] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(229), 1,
      sym_string,
    ACTIONS(231), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(171), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2526] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(233), 1,
      sym_string,
    ACTIONS(235), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(237), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2598] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(237), 1,
      sym_string,
    ACTIONS(239), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(220), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2670] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(241), 1,
      sym_string,
    ACTIONS(243), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(221), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2742] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(245), 1,
      sym_string,
    ACTIONS(247), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(222), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2814] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(249), 1,
      sym_string,
    ACTIONS(251), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(223), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2886] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(253), 1,
      sym_string,
    ACTIONS(255), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(224), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [2958] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(257), 1,
      sym_string,
    ACTIONS(259), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(225), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3030] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(263), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(226), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3102] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(265), 1,
      sym_string,
    ACTIONS(267), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(230), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3174] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(269), 1,
      sym_string,
    ACTIONS(271), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(208), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3246] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(232), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3318] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(277), 1,
      sym_string,
    ACTIONS(279), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(146), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3390] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(281), 1,
      sym_string,
    ACTIONS(283), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(143), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3462] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(285), 1,
      sym_string,
    ACTIONS(287), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(141), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3534] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(289), 1,
      sym_string,
    ACTIONS(291), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(242), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3606] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(293), 1,
      sym_string,
    ACTIONS(295), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(140), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3678] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(297), 1,
      sym_string,
    ACTIONS(299), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(139), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3750] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(301), 1,
      sym_string,
    ACTIONS(303), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(144), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3822] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(305), 1,
      sym_string,
    ACTIONS(307), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(125), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3894] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(309), 1,
      sym_string,
    ACTIONS(311), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(130), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [3966] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(313), 1,
      sym_string,
    ACTIONS(315), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(124), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4038] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(317), 1,
      sym_string,
    ACTIONS(319), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(122), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4110] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(321), 1,
      sym_string,
    ACTIONS(323), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(121), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4182] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(325), 1,
      sym_string,
    ACTIONS(327), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(120), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4254] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(329), 1,
      sym_string,
    ACTIONS(331), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(119), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4326] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(333), 1,
      sym_string,
    ACTIONS(335), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(118), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4398] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(337), 1,
      sym_string,
    ACTIONS(339), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(233), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4470] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(341), 1,
      sym_string,
    ACTIONS(343), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(197), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4542] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(345), 1,
      sym_string,
    ACTIONS(347), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(136), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4614] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(349), 1,
      sym_string,
    ACTIONS(351), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(196), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4686] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(353), 1,
      sym_string,
    ACTIONS(355), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(195), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4758] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(357), 1,
      sym_string,
    ACTIONS(359), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(158), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4830] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(361), 1,
      sym_string,
    ACTIONS(363), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(193), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4902] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(157), 1,
      sym__asterix,
    ACTIONS(159), 1,
      sym__openParen,
    ACTIONS(365), 1,
      sym_string,
    ACTIONS(367), 1,
      sym_underscore,
    STATE(165), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(151), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(234), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [4974] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(369), 1,
      sym_string,
    ACTIONS(371), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(131), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5046] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(373), 1,
      sym_string,
    ACTIONS(375), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(192), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5118] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(377), 1,
      sym_string,
    ACTIONS(379), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(191), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5190] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(381), 1,
      sym_string,
    ACTIONS(383), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(188), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5262] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(385), 1,
      sym_string,
    ACTIONS(387), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(187), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5334] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(389), 1,
      sym_string,
    ACTIONS(391), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(186), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5406] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(393), 1,
      sym_string,
    ACTIONS(395), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(183), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5478] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(397), 1,
      sym_string,
    ACTIONS(399), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(181), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5550] = 14,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(125), 1,
      sym__asterix,
    ACTIONS(129), 1,
      sym__openParen,
    ACTIONS(401), 1,
      sym_string,
    ACTIONS(403), 1,
      sym_underscore,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(119), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(179), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5622] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(405), 1,
      sym_string,
    ACTIONS(407), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(240), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5694] = 14,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(39), 1,
      sym__asterix,
    ACTIONS(43), 1,
      sym__openParen,
    ACTIONS(409), 1,
      sym_string,
    ACTIONS(411), 1,
      sym_underscore,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(33), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(135), 27,
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
      sym_cond_inver,
      sym_negate,
      sym_pre_inc,
      sym_pre_dec,
      sym_post_inc,
      sym_post_dec,
      sym_cond_equal,
      sym_cond_not_equal,
      sym_cond_less,
      sym_cond_greater,
      sym_cond_less_equal,
      sym_cond_greater_equal,
      sym_number,
  [5766] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(415), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(413), 20,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__colon,
      sym__asterix,
      sym__openSquare,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__openParen,
      sym__closeParen,
  [5801] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(415), 9,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
      sym__openSquare,
    ACTIONS(413), 15,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
      sym__openParen,
  [5834] = 5,
    ACTIONS(421), 1,
      sym__openSquare,
    ACTIONS(423), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(419), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(417), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [5871] = 6,
    ACTIONS(429), 1,
      sym__openCurly,
    ACTIONS(431), 1,
      sym__verticalBar,
    STATE(93), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(427), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(425), 15,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__closeParen,
  [5910] = 4,
    STATE(93), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(435), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(433), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [5945] = 4,
    STATE(94), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(439), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(437), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [5980] = 5,
    ACTIONS(445), 1,
      sym__verticalBar,
    STATE(94), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(441), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6017] = 4,
    STATE(93), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(450), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(448), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6052] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(441), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6084] = 4,
    STATE(107), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(439), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(437), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [6118] = 4,
    STATE(97), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(450), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(448), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [6152] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(454), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(452), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6184] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(458), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(456), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6216] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(462), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(460), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6248] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(466), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(464), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6280] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(470), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(468), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6312] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(474), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(472), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6344] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(478), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(476), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6376] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(482), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(480), 17,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [6408] = 5,
    ACTIONS(484), 1,
      sym__verticalBar,
    STATE(107), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(441), 13,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
  [6444] = 6,
    ACTIONS(487), 1,
      sym__openCurly,
    ACTIONS(489), 1,
      sym__verticalBar,
    STATE(97), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(427), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(425), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [6482] = 4,
    STATE(97), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(435), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(433), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [6516] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(415), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(413), 15,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openSquare,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
      sym__openParen,
  [6547] = 8,
    ACTIONS(421), 1,
      sym__openSquare,
    ACTIONS(423), 1,
      sym__openParen,
    ACTIONS(491), 1,
      sym__comma,
    ACTIONS(493), 1,
      sym__colon,
    STATE(354), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(419), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(417), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
  [6588] = 7,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(499), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6627] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(458), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(456), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [6658] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(509), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(507), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6689] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(513), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(511), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6720] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(454), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(452), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [6751] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(441), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [6782] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(517), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(515), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6813] = 8,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(521), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(519), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6854] = 8,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(531), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(529), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6895] = 5,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(535), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(533), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6930] = 5,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(539), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(537), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [6965] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(470), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(468), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [6996] = 10,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(543), 4,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(541), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7041] = 10,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(551), 4,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(549), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7086] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(474), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(472), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [7117] = 10,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(555), 4,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(553), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7162] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(466), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(464), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [7193] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(559), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(557), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7224] = 7,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(563), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(561), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7263] = 7,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(567), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(565), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7302] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(571), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(569), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7333] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(575), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(573), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7364] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(478), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(476), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [7395] = 7,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(579), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(577), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7434] = 7,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(583), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(581), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7473] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(462), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(460), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [7504] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(587), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(585), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7535] = 10,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(591), 4,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(589), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7580] = 10,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(595), 4,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(593), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7625] = 10,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(599), 4,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(597), 11,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7670] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(603), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(601), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7701] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(607), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(605), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7732] = 7,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(611), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(609), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7771] = 5,
    ACTIONS(613), 1,
      sym__openSquare,
    ACTIONS(615), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(419), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(417), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [7806] = 5,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(619), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(617), 14,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7841] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(482), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(480), 14,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__openCurly,
      sym__verticalBar,
  [7872] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(623), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(621), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7903] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(627), 6,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(625), 16,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__comma,
      sym__asterix,
      sym__closeSquare,
      sym__openCurly,
      sym__closeParen,
  [7934] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(513), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(511), 13,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
      sym__closeSquare,
  [7964] = 5,
    ACTIONS(631), 1,
      anon_sym_else,
    STATE(200), 1,
      sym_else_statement,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(629), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(633), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [7998] = 6,
    ACTIONS(635), 1,
      sym__openCurly,
    ACTIONS(637), 1,
      sym__verticalBar,
    STATE(156), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(427), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(425), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [8034] = 4,
    STATE(156), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(450), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(448), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8066] = 5,
    ACTIONS(639), 1,
      sym__verticalBar,
    STATE(154), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(441), 12,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
  [8100] = 4,
    STATE(156), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(435), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(433), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8132] = 4,
    STATE(154), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(439), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(437), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8164] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(603), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(601), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8193] = 5,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(535), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(533), 10,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8226] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(478), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(476), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8255] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(482), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(480), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8284] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(575), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(573), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8313] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(474), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(472), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8342] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(646), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(648), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [8371] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(571), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(569), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8400] = 5,
    ACTIONS(650), 1,
      sym__openSquare,
    ACTIONS(652), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(419), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(417), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [8433] = 19,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(658), 1,
      anon_sym_as,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      anon_sym_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(668), 1,
      anon_sym_EQ_EQ,
    ACTIONS(670), 1,
      anon_sym_BANG_EQ,
    ACTIONS(672), 1,
      anon_sym_LT,
    ACTIONS(674), 1,
      anon_sym_GT,
    ACTIONS(676), 1,
      anon_sym_LT_EQ,
    ACTIONS(678), 1,
      anon_sym_GT_EQ,
    ACTIONS(682), 1,
      sym__equal,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(654), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(680), 2,
      aux_sym_filepath_component_token1,
      sym__using,
  [8494] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(623), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(621), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8523] = 7,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(563), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(561), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8560] = 7,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(567), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(565), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8597] = 7,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(579), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(577), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8634] = 7,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(583), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(581), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8671] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(470), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(468), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8700] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(454), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(452), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8729] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(458), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(456), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8758] = 7,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(611), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(609), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8795] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(627), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(625), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8824] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(466), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(464), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8853] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(462), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(460), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8882] = 5,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(619), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(617), 10,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8915] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(441), 13,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [8944] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(607), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(605), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [8973] = 7,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(656), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(499), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(495), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [9010] = 10,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      anon_sym_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(599), 6,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(597), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
  [9053] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(509), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(507), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [9082] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(559), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(557), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [9111] = 10,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      anon_sym_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(595), 6,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(593), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
  [9154] = 10,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      anon_sym_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(591), 6,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(589), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
  [9197] = 10,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      anon_sym_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(555), 6,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(553), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
  [9240] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(587), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(585), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [9269] = 18,
    ACTIONS(497), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(654), 4,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      sym__comma,
      sym__closeParen,
  [9328] = 10,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      anon_sym_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(551), 6,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(549), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
  [9371] = 10,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      anon_sym_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(543), 6,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(541), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
  [9414] = 5,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(539), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(537), 10,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [9447] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(700), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(702), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9476] = 8,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(529), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
    ACTIONS(531), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
  [9515] = 8,
    ACTIONS(642), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    ACTIONS(664), 1,
      anon_sym_SLASH,
    ACTIONS(666), 1,
      anon_sym_PERCENT,
    ACTIONS(684), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(519), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
    ACTIONS(521), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
  [9554] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(517), 8,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
      sym__using,
    ACTIONS(515), 12,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_meta_item,
      sym__asterix,
  [9583] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(704), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(706), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9611] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(708), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(710), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9639] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(712), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(714), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9667] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(716), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(718), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9695] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(720), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(722), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9723] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(646), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(648), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9751] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(700), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(702), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9779] = 5,
    ACTIONS(431), 1,
      sym__verticalBar,
    STATE(93), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(427), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      sym__equal,
    ACTIONS(425), 12,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__openCurly,
  [9811] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(724), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(726), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9839] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(728), 9,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_DASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_filepath_component_token1,
      sym_underscore,
    ACTIONS(730), 10,
      sym_return_keyword,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_string,
      sym_meta_item,
      sym__asterix,
      sym__closeCurly,
      sym__openParen,
  [9867] = 7,
    ACTIONS(732), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(738), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(567), 6,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
    ACTIONS(565), 8,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [9902] = 8,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(529), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
    ACTIONS(531), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
  [9939] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(623), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(621), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [9966] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(575), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(573), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [9993] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(571), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(569), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10020] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(603), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(601), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10047] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(627), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(625), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10074] = 5,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(619), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(617), 9,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10105] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(607), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(605), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10132] = 10,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(746), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(599), 5,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(597), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
  [10173] = 10,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(746), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(595), 5,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(593), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
  [10214] = 10,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(746), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(591), 5,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(589), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
  [10255] = 10,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(746), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(555), 5,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(553), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
  [10296] = 10,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(746), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(551), 5,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(549), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
  [10337] = 10,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(746), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(543), 5,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(541), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
  [10378] = 5,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(539), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(537), 9,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10409] = 5,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(535), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(533), 9,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10440] = 8,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(519), 6,
      anon_sym_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__closeCurly,
    ACTIONS(521), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
  [10477] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(517), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(515), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10504] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(509), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(507), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10531] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(559), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(557), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10558] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(587), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(585), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10585] = 7,
    ACTIONS(732), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(738), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(583), 6,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
    ACTIONS(581), 8,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10620] = 7,
    ACTIONS(732), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(738), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(579), 6,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
    ACTIONS(577), 8,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10655] = 7,
    ACTIONS(732), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(738), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(563), 6,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
    ACTIONS(561), 8,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10690] = 7,
    ACTIONS(732), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(738), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(611), 6,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
    ACTIONS(609), 8,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10725] = 7,
    ACTIONS(732), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(738), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(499), 6,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
    ACTIONS(495), 8,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10760] = 19,
    ACTIONS(654), 1,
      sym__closeCurly,
    ACTIONS(680), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(732), 1,
      anon_sym_DOT,
    ACTIONS(734), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH,
    ACTIONS(738), 1,
      sym__equal,
    ACTIONS(740), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_PERCENT,
    ACTIONS(744), 1,
      sym__asterix,
    ACTIONS(746), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(750), 1,
      anon_sym_as,
    ACTIONS(752), 1,
      anon_sym_EQ_EQ,
    ACTIONS(754), 1,
      anon_sym_BANG_EQ,
    ACTIONS(756), 1,
      anon_sym_LT,
    ACTIONS(758), 1,
      anon_sym_GT,
    ACTIONS(760), 1,
      anon_sym_LT_EQ,
    ACTIONS(762), 1,
      anon_sym_GT_EQ,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [10819] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(513), 7,
      anon_sym_as,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_filepath_component_token1,
      sym__equal,
    ACTIONS(511), 11,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym__asterix,
      sym__closeCurly,
  [10846] = 18,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(766), 1,
      sym__closeParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [10902] = 18,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(768), 1,
      sym__closeParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [10958] = 18,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(770), 1,
      sym__closeParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [11014] = 18,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(772), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [11070] = 18,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(654), 1,
      sym__openCurly,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(774), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [11126] = 18,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(776), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [11182] = 18,
    ACTIONS(501), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(503), 1,
      anon_sym_DASH_DASH,
    ACTIONS(505), 1,
      sym__equal,
    ACTIONS(523), 1,
      anon_sym_SLASH,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(527), 1,
      sym__asterix,
    ACTIONS(545), 1,
      anon_sym_PLUS,
    ACTIONS(547), 1,
      anon_sym_DASH,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_EQ_EQ,
    ACTIONS(690), 1,
      anon_sym_BANG_EQ,
    ACTIONS(692), 1,
      anon_sym_LT,
    ACTIONS(694), 1,
      anon_sym_GT,
    ACTIONS(696), 1,
      anon_sym_LT_EQ,
    ACTIONS(698), 1,
      anon_sym_GT_EQ,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(778), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [11238] = 10,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(11), 1,
      sym__using,
    ACTIONS(780), 1,
      ts_builtin_sym_end,
    STATE(348), 1,
      sym_identifier,
    STATE(365), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(406), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(246), 7,
      sym__global_definition,
      sym__definition_or_type,
      sym_variable_definition,
      sym_function_definition,
      sym_type_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [11276] = 10,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(784), 1,
      sym__equal,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    STATE(344), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11314] = 10,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
    ACTIONS(796), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(799), 1,
      sym_meta_item,
    ACTIONS(802), 1,
      sym__using,
    STATE(348), 1,
      sym_identifier,
    STATE(365), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(406), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(246), 7,
      sym__global_definition,
      sym__definition_or_type,
      sym_variable_definition,
      sym_function_definition,
      sym_type_definition,
      sym_using_statement,
      aux_sym_source_file_repeat1,
  [11352] = 10,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    ACTIONS(805), 1,
      sym__equal,
    STATE(292), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11390] = 10,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    ACTIONS(807), 1,
      sym__equal,
    STATE(291), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11428] = 10,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    ACTIONS(809), 1,
      sym__equal,
    STATE(342), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11466] = 9,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(811), 1,
      sym_bit_type,
    ACTIONS(813), 1,
      sym__asterix,
    ACTIONS(815), 1,
      sym__openSquare,
    ACTIONS(817), 1,
      sym__openCurly,
    ACTIONS(819), 1,
      sym__openParen,
    STATE(108), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(116), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11501] = 9,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    STATE(326), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11536] = 9,
    ACTIONS(821), 1,
      sym_bit_type,
    ACTIONS(823), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(825), 1,
      sym__asterix,
    ACTIONS(827), 1,
      sym__openSquare,
    ACTIONS(829), 1,
      sym__openCurly,
    ACTIONS(831), 1,
      sym__openParen,
    STATE(320), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(350), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11571] = 9,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(833), 1,
      sym_bit_type,
    ACTIONS(835), 1,
      sym__asterix,
    ACTIONS(837), 1,
      sym__openSquare,
    ACTIONS(839), 1,
      sym__openCurly,
    ACTIONS(841), 1,
      sym__openParen,
    STATE(152), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(173), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11606] = 9,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(843), 1,
      sym_bit_type,
    ACTIONS(845), 1,
      sym__asterix,
    ACTIONS(847), 1,
      sym__openSquare,
    ACTIONS(849), 1,
      sym__openCurly,
    ACTIONS(851), 1,
      sym__openParen,
    STATE(205), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(99), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11641] = 9,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(843), 1,
      sym_bit_type,
    ACTIONS(845), 1,
      sym__asterix,
    ACTIONS(847), 1,
      sym__openSquare,
    ACTIONS(849), 1,
      sym__openCurly,
    ACTIONS(851), 1,
      sym__openParen,
    STATE(92), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(99), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11676] = 9,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    STATE(323), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11711] = 9,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(843), 1,
      sym_bit_type,
    ACTIONS(845), 1,
      sym__asterix,
    ACTIONS(847), 1,
      sym__openSquare,
    ACTIONS(849), 1,
      sym__openCurly,
    ACTIONS(851), 1,
      sym__openParen,
    STATE(91), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(99), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11746] = 9,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    STATE(270), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11781] = 9,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(811), 1,
      sym_bit_type,
    ACTIONS(813), 1,
      sym__asterix,
    ACTIONS(815), 1,
      sym__openSquare,
    ACTIONS(817), 1,
      sym__openCurly,
    ACTIONS(819), 1,
      sym__openParen,
    STATE(98), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(116), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11816] = 9,
    ACTIONS(821), 1,
      sym_bit_type,
    ACTIONS(823), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(825), 1,
      sym__asterix,
    ACTIONS(827), 1,
      sym__openSquare,
    ACTIONS(829), 1,
      sym__openCurly,
    ACTIONS(831), 1,
      sym__openParen,
    STATE(332), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(350), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11851] = 9,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(833), 1,
      sym_bit_type,
    ACTIONS(835), 1,
      sym__asterix,
    ACTIONS(837), 1,
      sym__openSquare,
    ACTIONS(839), 1,
      sym__openCurly,
    ACTIONS(841), 1,
      sym__openParen,
    STATE(155), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(173), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11886] = 9,
    ACTIONS(7), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(782), 1,
      sym_bit_type,
    ACTIONS(786), 1,
      sym__asterix,
    ACTIONS(788), 1,
      sym__openSquare,
    ACTIONS(790), 1,
      sym__openCurly,
    ACTIONS(792), 1,
      sym__openParen,
    STATE(271), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(274), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11921] = 9,
    ACTIONS(153), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(833), 1,
      sym_bit_type,
    ACTIONS(835), 1,
      sym__asterix,
    ACTIONS(837), 1,
      sym__openSquare,
    ACTIONS(839), 1,
      sym__openCurly,
    ACTIONS(841), 1,
      sym__openParen,
    STATE(153), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(173), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11956] = 9,
    ACTIONS(121), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(811), 1,
      sym_bit_type,
    ACTIONS(813), 1,
      sym__asterix,
    ACTIONS(815), 1,
      sym__openSquare,
    ACTIONS(817), 1,
      sym__openCurly,
    ACTIONS(819), 1,
      sym__openParen,
    STATE(109), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(116), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [11991] = 9,
    ACTIONS(35), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(843), 1,
      sym_bit_type,
    ACTIONS(845), 1,
      sym__asterix,
    ACTIONS(847), 1,
      sym__openSquare,
    ACTIONS(849), 1,
      sym__openCurly,
    ACTIONS(851), 1,
      sym__openParen,
    STATE(95), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(99), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [12026] = 9,
    ACTIONS(821), 1,
      sym_bit_type,
    ACTIONS(823), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(825), 1,
      sym__asterix,
    ACTIONS(827), 1,
      sym__openSquare,
    ACTIONS(829), 1,
      sym__openCurly,
    ACTIONS(831), 1,
      sym__openParen,
    STATE(334), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(350), 7,
      sym_function_type,
      sym_array_type,
      sym_alias_type,
      sym_enum_type,
      sym_struct_type,
      sym_pointer_type,
      sym_identifier,
  [12061] = 5,
    ACTIONS(853), 1,
      sym__verticalBar,
    STATE(267), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(441), 6,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__closeParen,
  [12084] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(415), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(413), 8,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__colon,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12103] = 4,
    STATE(267), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(439), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(437), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12124] = 4,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(450), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(448), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12145] = 4,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(435), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12166] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(858), 1,
      sym__closeParen,
    STATE(348), 1,
      sym_identifier,
    STATE(368), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(407), 1,
      sym_input_parameters,
    STATE(410), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12198] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(466), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(464), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12216] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(454), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(452), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12234] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(478), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(476), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12252] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(858), 1,
      sym__closeParen,
    STATE(348), 1,
      sym_identifier,
    STATE(368), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    STATE(422), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12284] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(858), 1,
      sym__closeParen,
    STATE(348), 1,
      sym_identifier,
    STATE(368), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    STATE(420), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12316] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(470), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(468), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12334] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(860), 1,
      sym__closeParen,
    STATE(347), 1,
      sym_output_parameters,
    STATE(348), 1,
      sym_identifier,
    STATE(357), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12366] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(443), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(441), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12384] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(474), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(472), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12402] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(458), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(456), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12420] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(862), 1,
      sym__closeParen,
    STATE(103), 1,
      sym_output_parameters,
    STATE(348), 1,
      sym_identifier,
    STATE(375), 1,
      sym_meta_list,
    STATE(377), 1,
      sym_type_definition,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12452] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(858), 1,
      sym__closeParen,
    STATE(348), 1,
      sym_identifier,
    STATE(368), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    STATE(417), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12484] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(864), 1,
      sym__closeParen,
    STATE(123), 1,
      sym_output_parameters,
    STATE(348), 1,
      sym_identifier,
    STATE(364), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12516] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(858), 1,
      sym__closeParen,
    STATE(348), 1,
      sym_identifier,
    STATE(368), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    STATE(413), 1,
      sym_input_parameters,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12548] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(462), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(460), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12566] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(866), 1,
      sym__closeParen,
    STATE(278), 1,
      sym_output_parameters,
    STATE(348), 1,
      sym_identifier,
    STATE(359), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12598] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(482), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__comma,
      sym__equal,
      sym__openCurly,
      sym__verticalBar,
      sym__closeParen,
  [12616] = 10,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(868), 1,
      sym__closeParen,
    STATE(172), 1,
      sym_output_parameters,
    STATE(348), 1,
      sym_identifier,
    STATE(373), 1,
      sym_type_definition,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(410), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12648] = 7,
    ACTIONS(874), 1,
      sym__equal,
    ACTIONS(876), 1,
      sym__openCurly,
    ACTIONS(878), 1,
      sym__verticalBar,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(870), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(872), 2,
      aux_sym_filepath_component_token1,
      sym__using,
  [12673] = 7,
    ACTIONS(876), 1,
      sym__openCurly,
    ACTIONS(878), 1,
      sym__verticalBar,
    ACTIONS(884), 1,
      sym__equal,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(880), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(882), 2,
      aux_sym_filepath_component_token1,
      sym__using,
  [12698] = 5,
    ACTIONS(890), 1,
      sym__coloncolon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(886), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(888), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    STATE(294), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [12718] = 5,
    ACTIONS(896), 1,
      sym__coloncolon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(892), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(894), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    STATE(294), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [12738] = 8,
    ACTIONS(9), 1,
      sym_meta_item,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(375), 1,
      sym_meta_list,
    STATE(378), 1,
      aux_sym_meta_list_repeat1,
    STATE(392), 1,
      sym_type_definition,
    STATE(410), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [12764] = 5,
    ACTIONS(890), 1,
      sym__coloncolon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(899), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(901), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    STATE(293), 2,
      sym__rest_of_namespace,
      aux_sym_namespace_repeat1,
  [12784] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(903), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(308), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [12805] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(905), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(305), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [12826] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(907), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(309), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [12847] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(909), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(305), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [12868] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(911), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(305), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [12889] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(913), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(313), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [12910] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(915), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(309), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [12931] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(917), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(305), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [12952] = 6,
    ACTIONS(919), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(922), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(305), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [12973] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(924), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(309), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [12994] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(926), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(306), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [13015] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(928), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(309), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [13036] = 6,
    ACTIONS(930), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(933), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(309), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [13057] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(935), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(303), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [13078] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(937), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(305), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [13099] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(939), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(299), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [13120] = 6,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(941), 1,
      sym__closeCurly,
    STATE(348), 1,
      sym_identifier,
    STATE(416), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(309), 2,
      sym_struct_member,
      aux_sym_struct_type_repeat1,
  [13141] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(945), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(943), 3,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__coloncolon,
  [13155] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(949), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(947), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_meta_item,
  [13169] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(953), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(951), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_meta_item,
  [13183] = 5,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(304), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [13201] = 5,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(311), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [13219] = 5,
    ACTIONS(119), 1,
      aux_sym_number_token1,
    STATE(401), 1,
      sym_array_size,
    STATE(418), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(955), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
  [13237] = 3,
    STATE(321), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(433), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13251] = 3,
    STATE(335), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(437), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13265] = 5,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(298), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [13283] = 5,
    ACTIONS(876), 1,
      sym__openCurly,
    ACTIONS(878), 1,
      sym__verticalBar,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(880), 2,
      sym__comma,
      sym__closeParen,
  [13301] = 5,
    ACTIONS(119), 1,
      aux_sym_number_token1,
    STATE(418), 1,
      sym_number,
    STATE(424), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(955), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
  [13319] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(959), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(957), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_meta_item,
  [13333] = 5,
    ACTIONS(876), 1,
      sym__openCurly,
    ACTIONS(878), 1,
      sym__verticalBar,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(870), 2,
      sym__comma,
      sym__closeParen,
  [13351] = 5,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(301), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [13369] = 5,
    ACTIONS(119), 1,
      aux_sym_number_token1,
    STATE(404), 1,
      sym_array_size,
    STATE(418), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(955), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
  [13387] = 5,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(400), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    STATE(300), 2,
      sym_enum_member,
      aux_sym_enum_type_repeat1,
  [13405] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(963), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(961), 3,
      ts_builtin_sym_end,
      sym_meta_item,
      sym__coloncolon,
  [13419] = 5,
    ACTIONS(119), 1,
      aux_sym_number_token1,
    STATE(418), 1,
      sym_number,
    STATE(421), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(955), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
  [13437] = 5,
    ACTIONS(967), 1,
      sym__openCurly,
    ACTIONS(969), 1,
      sym__verticalBar,
    STATE(321), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(965), 2,
      aux_sym_filepath_component_token1,
      sym__closeCurly,
  [13455] = 5,
    ACTIONS(119), 1,
      aux_sym_number_token1,
    STATE(414), 1,
      sym_array_size,
    STATE(418), 1,
      sym_number,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(955), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
  [13473] = 3,
    STATE(321), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(448), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13487] = 4,
    ACTIONS(971), 1,
      sym__verticalBar,
    STATE(335), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(441), 3,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
  [13503] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(472), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13514] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(700), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(702), 2,
      ts_builtin_sym_end,
      sym_meta_item,
  [13527] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(974), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(976), 2,
      aux_sym_filepath_component_token1,
      sym__using,
  [13540] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(413), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13551] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(441), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13562] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(460), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13573] = 5,
    ACTIONS(784), 1,
      sym__equal,
    ACTIONS(876), 1,
      sym__openCurly,
    ACTIONS(878), 1,
      sym__verticalBar,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13590] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(978), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(980), 2,
      aux_sym_filepath_component_token1,
      sym__using,
  [13603] = 5,
    ACTIONS(876), 1,
      sym__openCurly,
    ACTIONS(878), 1,
      sym__verticalBar,
    ACTIONS(982), 1,
      sym__equal,
    STATE(269), 1,
      aux_sym_alias_type_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13620] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(464), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13631] = 4,
    ACTIONS(984), 1,
      sym__comma,
    STATE(346), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(987), 2,
      sym__colon,
      sym__equal,
  [13646] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(468), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13657] = 4,
    ACTIONS(491), 1,
      sym__comma,
    STATE(354), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(493), 2,
      sym__colon,
      sym__equal,
  [13672] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(646), 2,
      aux_sym_filepath_component_token1,
      sym__using,
    ACTIONS(648), 2,
      ts_builtin_sym_end,
      sym_meta_item,
  [13685] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(452), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13696] = 3,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(989), 2,
      ts_builtin_sym_end,
      sym_meta_item,
    ACTIONS(991), 2,
      aux_sym_filepath_component_token1,
      sym__using,
  [13709] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(476), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13720] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(456), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13731] = 4,
    ACTIONS(491), 1,
      sym__comma,
    STATE(346), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(993), 2,
      sym__colon,
      sym__equal,
  [13746] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(480), 4,
      aux_sym_filepath_component_token1,
      sym__openCurly,
      sym__closeCurly,
      sym__verticalBar,
  [13757] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(997), 1,
      sym__closeParen,
    STATE(362), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13771] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(999), 1,
      sym__closeParen,
    STATE(382), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13785] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(987), 3,
      sym__comma,
      sym__colon,
      sym__equal,
  [13795] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1001), 1,
      sym__closeParen,
    STATE(376), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13809] = 4,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(408), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13823] = 4,
    ACTIONS(1003), 1,
      aux_sym_filepath_component_token1,
    STATE(296), 1,
      sym_filepath_component,
    STATE(351), 1,
      sym_namespace,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13837] = 4,
    ACTIONS(1005), 1,
      sym__comma,
    ACTIONS(1008), 1,
      sym__closeParen,
    STATE(362), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13851] = 4,
    ACTIONS(1010), 1,
      sym__comma,
    ACTIONS(1012), 1,
      sym__closeParen,
    STATE(366), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13865] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1014), 1,
      sym__closeParen,
    STATE(367), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13879] = 4,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(409), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13893] = 4,
    ACTIONS(1010), 1,
      sym__comma,
    ACTIONS(1016), 1,
      sym__closeParen,
    STATE(379), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13907] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1018), 1,
      sym__closeParen,
    STATE(362), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13921] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1020), 1,
      sym__closeParen,
    STATE(380), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13935] = 4,
    ACTIONS(1010), 1,
      sym__comma,
    ACTIONS(1022), 1,
      sym__closeParen,
    STATE(372), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13949] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1024), 1,
      sym__closeParen,
    STATE(362), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13963] = 4,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(405), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13977] = 4,
    ACTIONS(1010), 1,
      sym__comma,
    ACTIONS(1026), 1,
      sym__closeParen,
    STATE(379), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [13991] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1028), 1,
      sym__closeParen,
    STATE(370), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14005] = 4,
    ACTIONS(1030), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(1032), 1,
      sym_meta_item,
    STATE(374), 1,
      aux_sym_meta_list_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14019] = 4,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(348), 1,
      sym_identifier,
    STATE(423), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14033] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1035), 1,
      sym__closeParen,
    STATE(362), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14047] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1037), 1,
      sym__closeParen,
    STATE(356), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14061] = 4,
    ACTIONS(1039), 1,
      aux_sym_filepath_component_token1,
    ACTIONS(1041), 1,
      sym_meta_item,
    STATE(374), 1,
      aux_sym_meta_list_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14075] = 4,
    ACTIONS(1043), 1,
      sym__comma,
    ACTIONS(1046), 1,
      sym__closeParen,
    STATE(379), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14089] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1048), 1,
      sym__closeParen,
    STATE(362), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14103] = 4,
    ACTIONS(1010), 1,
      sym__comma,
    ACTIONS(1050), 1,
      sym__closeParen,
    STATE(379), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14117] = 4,
    ACTIONS(995), 1,
      sym__comma,
    ACTIONS(1052), 1,
      sym__closeParen,
    STATE(362), 1,
      aux_sym_input_parameters_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14131] = 4,
    ACTIONS(1010), 1,
      sym__comma,
    ACTIONS(1054), 1,
      sym__closeParen,
    STATE(381), 1,
      aux_sym_function_call_args_repeat1,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14145] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(1046), 2,
      sym__comma,
      sym__closeParen,
  [14154] = 3,
    ACTIONS(829), 1,
      sym__openCurly,
    STATE(340), 1,
      sym_struct_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14165] = 3,
    ACTIONS(817), 1,
      sym__openCurly,
    STATE(117), 1,
      sym_struct_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14176] = 3,
    ACTIONS(1003), 1,
      aux_sym_filepath_component_token1,
    STATE(330), 1,
      sym_filepath_component,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14187] = 3,
    ACTIONS(790), 1,
      sym__openCurly,
    STATE(280), 1,
      sym_struct_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14198] = 3,
    ACTIONS(1056), 1,
      sym__openCurly,
    STATE(198), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14209] = 3,
    ACTIONS(856), 1,
      aux_sym_filepath_component_token1,
    STATE(358), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14220] = 3,
    ACTIONS(849), 1,
      sym__openCurly,
    STATE(96), 1,
      sym_struct_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14231] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(1008), 2,
      sym__comma,
      sym__closeParen,
  [14240] = 3,
    ACTIONS(1058), 1,
      sym__openCurly,
    STATE(151), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14251] = 2,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
    ACTIONS(1060), 2,
      aux_sym_filepath_component_token1,
      sym__closeCurly,
  [14260] = 3,
    ACTIONS(1056), 1,
      sym__openCurly,
    STATE(202), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14271] = 3,
    ACTIONS(839), 1,
      sym__openCurly,
    STATE(180), 1,
      sym_struct_type,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14282] = 3,
    ACTIONS(1056), 1,
      sym__openCurly,
    STATE(199), 1,
      sym_block,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14293] = 2,
    ACTIONS(1062), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14301] = 2,
    ACTIONS(1064), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14309] = 2,
    ACTIONS(1066), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14317] = 2,
    ACTIONS(1068), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14325] = 2,
    ACTIONS(1070), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14333] = 2,
    ACTIONS(1072), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14341] = 2,
    ACTIONS(1074), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14349] = 2,
    ACTIONS(1076), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14357] = 2,
    ACTIONS(1078), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14365] = 2,
    ACTIONS(1080), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14373] = 2,
    ACTIONS(1082), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14381] = 2,
    ACTIONS(1084), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14389] = 2,
    ACTIONS(1086), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14397] = 2,
    ACTIONS(1088), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14405] = 2,
    ACTIONS(1090), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14413] = 2,
    ACTIONS(1092), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14421] = 2,
    ACTIONS(1094), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14429] = 2,
    ACTIONS(1096), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14437] = 2,
    ACTIONS(1098), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14445] = 2,
    ACTIONS(1100), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14453] = 2,
    ACTIONS(1102), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14461] = 2,
    ACTIONS(1104), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14469] = 2,
    ACTIONS(1106), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14477] = 2,
    ACTIONS(1108), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14485] = 2,
    ACTIONS(1110), 1,
      sym__openParen,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14493] = 2,
    ACTIONS(1112), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14501] = 2,
    ACTIONS(1114), 1,
      sym__closeSquare,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
  [14509] = 2,
    ACTIONS(1116), 1,
      sym__equal,
    ACTIONS(3), 2,
      sym__block_comment,
      sym__comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 81,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 324,
  [SMALL_STATE(14)] = 405,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 555,
  [SMALL_STATE(17)] = 630,
  [SMALL_STATE(18)] = 705,
  [SMALL_STATE(19)] = 780,
  [SMALL_STATE(20)] = 855,
  [SMALL_STATE(21)] = 930,
  [SMALL_STATE(22)] = 1005,
  [SMALL_STATE(23)] = 1080,
  [SMALL_STATE(24)] = 1155,
  [SMALL_STATE(25)] = 1230,
  [SMALL_STATE(26)] = 1302,
  [SMALL_STATE(27)] = 1374,
  [SMALL_STATE(28)] = 1446,
  [SMALL_STATE(29)] = 1518,
  [SMALL_STATE(30)] = 1590,
  [SMALL_STATE(31)] = 1662,
  [SMALL_STATE(32)] = 1734,
  [SMALL_STATE(33)] = 1806,
  [SMALL_STATE(34)] = 1878,
  [SMALL_STATE(35)] = 1950,
  [SMALL_STATE(36)] = 2022,
  [SMALL_STATE(37)] = 2094,
  [SMALL_STATE(38)] = 2166,
  [SMALL_STATE(39)] = 2238,
  [SMALL_STATE(40)] = 2310,
  [SMALL_STATE(41)] = 2382,
  [SMALL_STATE(42)] = 2454,
  [SMALL_STATE(43)] = 2526,
  [SMALL_STATE(44)] = 2598,
  [SMALL_STATE(45)] = 2670,
  [SMALL_STATE(46)] = 2742,
  [SMALL_STATE(47)] = 2814,
  [SMALL_STATE(48)] = 2886,
  [SMALL_STATE(49)] = 2958,
  [SMALL_STATE(50)] = 3030,
  [SMALL_STATE(51)] = 3102,
  [SMALL_STATE(52)] = 3174,
  [SMALL_STATE(53)] = 3246,
  [SMALL_STATE(54)] = 3318,
  [SMALL_STATE(55)] = 3390,
  [SMALL_STATE(56)] = 3462,
  [SMALL_STATE(57)] = 3534,
  [SMALL_STATE(58)] = 3606,
  [SMALL_STATE(59)] = 3678,
  [SMALL_STATE(60)] = 3750,
  [SMALL_STATE(61)] = 3822,
  [SMALL_STATE(62)] = 3894,
  [SMALL_STATE(63)] = 3966,
  [SMALL_STATE(64)] = 4038,
  [SMALL_STATE(65)] = 4110,
  [SMALL_STATE(66)] = 4182,
  [SMALL_STATE(67)] = 4254,
  [SMALL_STATE(68)] = 4326,
  [SMALL_STATE(69)] = 4398,
  [SMALL_STATE(70)] = 4470,
  [SMALL_STATE(71)] = 4542,
  [SMALL_STATE(72)] = 4614,
  [SMALL_STATE(73)] = 4686,
  [SMALL_STATE(74)] = 4758,
  [SMALL_STATE(75)] = 4830,
  [SMALL_STATE(76)] = 4902,
  [SMALL_STATE(77)] = 4974,
  [SMALL_STATE(78)] = 5046,
  [SMALL_STATE(79)] = 5118,
  [SMALL_STATE(80)] = 5190,
  [SMALL_STATE(81)] = 5262,
  [SMALL_STATE(82)] = 5334,
  [SMALL_STATE(83)] = 5406,
  [SMALL_STATE(84)] = 5478,
  [SMALL_STATE(85)] = 5550,
  [SMALL_STATE(86)] = 5622,
  [SMALL_STATE(87)] = 5694,
  [SMALL_STATE(88)] = 5766,
  [SMALL_STATE(89)] = 5801,
  [SMALL_STATE(90)] = 5834,
  [SMALL_STATE(91)] = 5871,
  [SMALL_STATE(92)] = 5910,
  [SMALL_STATE(93)] = 5945,
  [SMALL_STATE(94)] = 5980,
  [SMALL_STATE(95)] = 6017,
  [SMALL_STATE(96)] = 6052,
  [SMALL_STATE(97)] = 6084,
  [SMALL_STATE(98)] = 6118,
  [SMALL_STATE(99)] = 6152,
  [SMALL_STATE(100)] = 6184,
  [SMALL_STATE(101)] = 6216,
  [SMALL_STATE(102)] = 6248,
  [SMALL_STATE(103)] = 6280,
  [SMALL_STATE(104)] = 6312,
  [SMALL_STATE(105)] = 6344,
  [SMALL_STATE(106)] = 6376,
  [SMALL_STATE(107)] = 6408,
  [SMALL_STATE(108)] = 6444,
  [SMALL_STATE(109)] = 6482,
  [SMALL_STATE(110)] = 6516,
  [SMALL_STATE(111)] = 6547,
  [SMALL_STATE(112)] = 6588,
  [SMALL_STATE(113)] = 6627,
  [SMALL_STATE(114)] = 6658,
  [SMALL_STATE(115)] = 6689,
  [SMALL_STATE(116)] = 6720,
  [SMALL_STATE(117)] = 6751,
  [SMALL_STATE(118)] = 6782,
  [SMALL_STATE(119)] = 6813,
  [SMALL_STATE(120)] = 6854,
  [SMALL_STATE(121)] = 6895,
  [SMALL_STATE(122)] = 6930,
  [SMALL_STATE(123)] = 6965,
  [SMALL_STATE(124)] = 6996,
  [SMALL_STATE(125)] = 7041,
  [SMALL_STATE(126)] = 7086,
  [SMALL_STATE(127)] = 7117,
  [SMALL_STATE(128)] = 7162,
  [SMALL_STATE(129)] = 7193,
  [SMALL_STATE(130)] = 7224,
  [SMALL_STATE(131)] = 7263,
  [SMALL_STATE(132)] = 7302,
  [SMALL_STATE(133)] = 7333,
  [SMALL_STATE(134)] = 7364,
  [SMALL_STATE(135)] = 7395,
  [SMALL_STATE(136)] = 7434,
  [SMALL_STATE(137)] = 7473,
  [SMALL_STATE(138)] = 7504,
  [SMALL_STATE(139)] = 7535,
  [SMALL_STATE(140)] = 7580,
  [SMALL_STATE(141)] = 7625,
  [SMALL_STATE(142)] = 7670,
  [SMALL_STATE(143)] = 7701,
  [SMALL_STATE(144)] = 7732,
  [SMALL_STATE(145)] = 7771,
  [SMALL_STATE(146)] = 7806,
  [SMALL_STATE(147)] = 7841,
  [SMALL_STATE(148)] = 7872,
  [SMALL_STATE(149)] = 7903,
  [SMALL_STATE(150)] = 7934,
  [SMALL_STATE(151)] = 7964,
  [SMALL_STATE(152)] = 7998,
  [SMALL_STATE(153)] = 8034,
  [SMALL_STATE(154)] = 8066,
  [SMALL_STATE(155)] = 8100,
  [SMALL_STATE(156)] = 8132,
  [SMALL_STATE(157)] = 8164,
  [SMALL_STATE(158)] = 8193,
  [SMALL_STATE(159)] = 8226,
  [SMALL_STATE(160)] = 8255,
  [SMALL_STATE(161)] = 8284,
  [SMALL_STATE(162)] = 8313,
  [SMALL_STATE(163)] = 8342,
  [SMALL_STATE(164)] = 8371,
  [SMALL_STATE(165)] = 8400,
  [SMALL_STATE(166)] = 8433,
  [SMALL_STATE(167)] = 8494,
  [SMALL_STATE(168)] = 8523,
  [SMALL_STATE(169)] = 8560,
  [SMALL_STATE(170)] = 8597,
  [SMALL_STATE(171)] = 8634,
  [SMALL_STATE(172)] = 8671,
  [SMALL_STATE(173)] = 8700,
  [SMALL_STATE(174)] = 8729,
  [SMALL_STATE(175)] = 8758,
  [SMALL_STATE(176)] = 8795,
  [SMALL_STATE(177)] = 8824,
  [SMALL_STATE(178)] = 8853,
  [SMALL_STATE(179)] = 8882,
  [SMALL_STATE(180)] = 8915,
  [SMALL_STATE(181)] = 8944,
  [SMALL_STATE(182)] = 8973,
  [SMALL_STATE(183)] = 9010,
  [SMALL_STATE(184)] = 9053,
  [SMALL_STATE(185)] = 9082,
  [SMALL_STATE(186)] = 9111,
  [SMALL_STATE(187)] = 9154,
  [SMALL_STATE(188)] = 9197,
  [SMALL_STATE(189)] = 9240,
  [SMALL_STATE(190)] = 9269,
  [SMALL_STATE(191)] = 9328,
  [SMALL_STATE(192)] = 9371,
  [SMALL_STATE(193)] = 9414,
  [SMALL_STATE(194)] = 9447,
  [SMALL_STATE(195)] = 9476,
  [SMALL_STATE(196)] = 9515,
  [SMALL_STATE(197)] = 9554,
  [SMALL_STATE(198)] = 9583,
  [SMALL_STATE(199)] = 9611,
  [SMALL_STATE(200)] = 9639,
  [SMALL_STATE(201)] = 9667,
  [SMALL_STATE(202)] = 9695,
  [SMALL_STATE(203)] = 9723,
  [SMALL_STATE(204)] = 9751,
  [SMALL_STATE(205)] = 9779,
  [SMALL_STATE(206)] = 9811,
  [SMALL_STATE(207)] = 9839,
  [SMALL_STATE(208)] = 9867,
  [SMALL_STATE(209)] = 9902,
  [SMALL_STATE(210)] = 9939,
  [SMALL_STATE(211)] = 9966,
  [SMALL_STATE(212)] = 9993,
  [SMALL_STATE(213)] = 10020,
  [SMALL_STATE(214)] = 10047,
  [SMALL_STATE(215)] = 10074,
  [SMALL_STATE(216)] = 10105,
  [SMALL_STATE(217)] = 10132,
  [SMALL_STATE(218)] = 10173,
  [SMALL_STATE(219)] = 10214,
  [SMALL_STATE(220)] = 10255,
  [SMALL_STATE(221)] = 10296,
  [SMALL_STATE(222)] = 10337,
  [SMALL_STATE(223)] = 10378,
  [SMALL_STATE(224)] = 10409,
  [SMALL_STATE(225)] = 10440,
  [SMALL_STATE(226)] = 10477,
  [SMALL_STATE(227)] = 10504,
  [SMALL_STATE(228)] = 10531,
  [SMALL_STATE(229)] = 10558,
  [SMALL_STATE(230)] = 10585,
  [SMALL_STATE(231)] = 10620,
  [SMALL_STATE(232)] = 10655,
  [SMALL_STATE(233)] = 10690,
  [SMALL_STATE(234)] = 10725,
  [SMALL_STATE(235)] = 10760,
  [SMALL_STATE(236)] = 10819,
  [SMALL_STATE(237)] = 10846,
  [SMALL_STATE(238)] = 10902,
  [SMALL_STATE(239)] = 10958,
  [SMALL_STATE(240)] = 11014,
  [SMALL_STATE(241)] = 11070,
  [SMALL_STATE(242)] = 11126,
  [SMALL_STATE(243)] = 11182,
  [SMALL_STATE(244)] = 11238,
  [SMALL_STATE(245)] = 11276,
  [SMALL_STATE(246)] = 11314,
  [SMALL_STATE(247)] = 11352,
  [SMALL_STATE(248)] = 11390,
  [SMALL_STATE(249)] = 11428,
  [SMALL_STATE(250)] = 11466,
  [SMALL_STATE(251)] = 11501,
  [SMALL_STATE(252)] = 11536,
  [SMALL_STATE(253)] = 11571,
  [SMALL_STATE(254)] = 11606,
  [SMALL_STATE(255)] = 11641,
  [SMALL_STATE(256)] = 11676,
  [SMALL_STATE(257)] = 11711,
  [SMALL_STATE(258)] = 11746,
  [SMALL_STATE(259)] = 11781,
  [SMALL_STATE(260)] = 11816,
  [SMALL_STATE(261)] = 11851,
  [SMALL_STATE(262)] = 11886,
  [SMALL_STATE(263)] = 11921,
  [SMALL_STATE(264)] = 11956,
  [SMALL_STATE(265)] = 11991,
  [SMALL_STATE(266)] = 12026,
  [SMALL_STATE(267)] = 12061,
  [SMALL_STATE(268)] = 12084,
  [SMALL_STATE(269)] = 12103,
  [SMALL_STATE(270)] = 12124,
  [SMALL_STATE(271)] = 12145,
  [SMALL_STATE(272)] = 12166,
  [SMALL_STATE(273)] = 12198,
  [SMALL_STATE(274)] = 12216,
  [SMALL_STATE(275)] = 12234,
  [SMALL_STATE(276)] = 12252,
  [SMALL_STATE(277)] = 12284,
  [SMALL_STATE(278)] = 12316,
  [SMALL_STATE(279)] = 12334,
  [SMALL_STATE(280)] = 12366,
  [SMALL_STATE(281)] = 12384,
  [SMALL_STATE(282)] = 12402,
  [SMALL_STATE(283)] = 12420,
  [SMALL_STATE(284)] = 12452,
  [SMALL_STATE(285)] = 12484,
  [SMALL_STATE(286)] = 12516,
  [SMALL_STATE(287)] = 12548,
  [SMALL_STATE(288)] = 12566,
  [SMALL_STATE(289)] = 12598,
  [SMALL_STATE(290)] = 12616,
  [SMALL_STATE(291)] = 12648,
  [SMALL_STATE(292)] = 12673,
  [SMALL_STATE(293)] = 12698,
  [SMALL_STATE(294)] = 12718,
  [SMALL_STATE(295)] = 12738,
  [SMALL_STATE(296)] = 12764,
  [SMALL_STATE(297)] = 12784,
  [SMALL_STATE(298)] = 12805,
  [SMALL_STATE(299)] = 12826,
  [SMALL_STATE(300)] = 12847,
  [SMALL_STATE(301)] = 12868,
  [SMALL_STATE(302)] = 12889,
  [SMALL_STATE(303)] = 12910,
  [SMALL_STATE(304)] = 12931,
  [SMALL_STATE(305)] = 12952,
  [SMALL_STATE(306)] = 12973,
  [SMALL_STATE(307)] = 12994,
  [SMALL_STATE(308)] = 13015,
  [SMALL_STATE(309)] = 13036,
  [SMALL_STATE(310)] = 13057,
  [SMALL_STATE(311)] = 13078,
  [SMALL_STATE(312)] = 13099,
  [SMALL_STATE(313)] = 13120,
  [SMALL_STATE(314)] = 13141,
  [SMALL_STATE(315)] = 13155,
  [SMALL_STATE(316)] = 13169,
  [SMALL_STATE(317)] = 13183,
  [SMALL_STATE(318)] = 13201,
  [SMALL_STATE(319)] = 13219,
  [SMALL_STATE(320)] = 13237,
  [SMALL_STATE(321)] = 13251,
  [SMALL_STATE(322)] = 13265,
  [SMALL_STATE(323)] = 13283,
  [SMALL_STATE(324)] = 13301,
  [SMALL_STATE(325)] = 13319,
  [SMALL_STATE(326)] = 13333,
  [SMALL_STATE(327)] = 13351,
  [SMALL_STATE(328)] = 13369,
  [SMALL_STATE(329)] = 13387,
  [SMALL_STATE(330)] = 13405,
  [SMALL_STATE(331)] = 13419,
  [SMALL_STATE(332)] = 13437,
  [SMALL_STATE(333)] = 13455,
  [SMALL_STATE(334)] = 13473,
  [SMALL_STATE(335)] = 13487,
  [SMALL_STATE(336)] = 13503,
  [SMALL_STATE(337)] = 13514,
  [SMALL_STATE(338)] = 13527,
  [SMALL_STATE(339)] = 13540,
  [SMALL_STATE(340)] = 13551,
  [SMALL_STATE(341)] = 13562,
  [SMALL_STATE(342)] = 13573,
  [SMALL_STATE(343)] = 13590,
  [SMALL_STATE(344)] = 13603,
  [SMALL_STATE(345)] = 13620,
  [SMALL_STATE(346)] = 13631,
  [SMALL_STATE(347)] = 13646,
  [SMALL_STATE(348)] = 13657,
  [SMALL_STATE(349)] = 13672,
  [SMALL_STATE(350)] = 13685,
  [SMALL_STATE(351)] = 13696,
  [SMALL_STATE(352)] = 13709,
  [SMALL_STATE(353)] = 13720,
  [SMALL_STATE(354)] = 13731,
  [SMALL_STATE(355)] = 13746,
  [SMALL_STATE(356)] = 13757,
  [SMALL_STATE(357)] = 13771,
  [SMALL_STATE(358)] = 13785,
  [SMALL_STATE(359)] = 13795,
  [SMALL_STATE(360)] = 13809,
  [SMALL_STATE(361)] = 13823,
  [SMALL_STATE(362)] = 13837,
  [SMALL_STATE(363)] = 13851,
  [SMALL_STATE(364)] = 13865,
  [SMALL_STATE(365)] = 13879,
  [SMALL_STATE(366)] = 13893,
  [SMALL_STATE(367)] = 13907,
  [SMALL_STATE(368)] = 13921,
  [SMALL_STATE(369)] = 13935,
  [SMALL_STATE(370)] = 13949,
  [SMALL_STATE(371)] = 13963,
  [SMALL_STATE(372)] = 13977,
  [SMALL_STATE(373)] = 13991,
  [SMALL_STATE(374)] = 14005,
  [SMALL_STATE(375)] = 14019,
  [SMALL_STATE(376)] = 14033,
  [SMALL_STATE(377)] = 14047,
  [SMALL_STATE(378)] = 14061,
  [SMALL_STATE(379)] = 14075,
  [SMALL_STATE(380)] = 14089,
  [SMALL_STATE(381)] = 14103,
  [SMALL_STATE(382)] = 14117,
  [SMALL_STATE(383)] = 14131,
  [SMALL_STATE(384)] = 14145,
  [SMALL_STATE(385)] = 14154,
  [SMALL_STATE(386)] = 14165,
  [SMALL_STATE(387)] = 14176,
  [SMALL_STATE(388)] = 14187,
  [SMALL_STATE(389)] = 14198,
  [SMALL_STATE(390)] = 14209,
  [SMALL_STATE(391)] = 14220,
  [SMALL_STATE(392)] = 14231,
  [SMALL_STATE(393)] = 14240,
  [SMALL_STATE(394)] = 14251,
  [SMALL_STATE(395)] = 14260,
  [SMALL_STATE(396)] = 14271,
  [SMALL_STATE(397)] = 14282,
  [SMALL_STATE(398)] = 14293,
  [SMALL_STATE(399)] = 14301,
  [SMALL_STATE(400)] = 14309,
  [SMALL_STATE(401)] = 14317,
  [SMALL_STATE(402)] = 14325,
  [SMALL_STATE(403)] = 14333,
  [SMALL_STATE(404)] = 14341,
  [SMALL_STATE(405)] = 14349,
  [SMALL_STATE(406)] = 14357,
  [SMALL_STATE(407)] = 14365,
  [SMALL_STATE(408)] = 14373,
  [SMALL_STATE(409)] = 14381,
  [SMALL_STATE(410)] = 14389,
  [SMALL_STATE(411)] = 14397,
  [SMALL_STATE(412)] = 14405,
  [SMALL_STATE(413)] = 14413,
  [SMALL_STATE(414)] = 14421,
  [SMALL_STATE(415)] = 14429,
  [SMALL_STATE(416)] = 14437,
  [SMALL_STATE(417)] = 14445,
  [SMALL_STATE(418)] = 14453,
  [SMALL_STATE(419)] = 14461,
  [SMALL_STATE(420)] = 14469,
  [SMALL_STATE(421)] = 14477,
  [SMALL_STATE(422)] = 14485,
  [SMALL_STATE(423)] = 14493,
  [SMALL_STATE(424)] = 14501,
  [SMALL_STATE(425)] = 14509,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(371),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(201),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(190),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(115),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(378),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(190),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 3, .production_id = 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 3, .production_id = 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_type, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_type, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alias_type_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(391),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_type, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_parameters, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_parameters, 3),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(386),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_of, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_of, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum, 3, .production_id = 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum, 3, .production_id = 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, .production_id = 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction, 3, .production_id = 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division, 3, .production_id = 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division, 3, .production_id = 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulus, 3, .production_id = 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulus, 3, .production_id = 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_equal, 3, .production_id = 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_equal, 3, .production_id = 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_not_equal, 3, .production_id = 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_not_equal, 3, .production_id = 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_less, 3, .production_id = 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_less, 3, .production_id = 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_dec, 2, .production_id = 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_dec, 2, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_inver, 2, .production_id = 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_inver, 2, .production_id = 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_inc, 2, .production_id = 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_inc, 2, .production_id = 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_dec, 2, .production_id = 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_dec, 2, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dereference, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dereference, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_inc, 2, .production_id = 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_inc, 2, .production_id = 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_greater, 3, .production_id = 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_greater, 3, .production_id = 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_less_equal, 3, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_less_equal, 3, .production_id = 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond_greater_equal, 3, .production_id = 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cond_greater_equal, 3, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate, 2, .production_id = 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate, 2, .production_id = 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3, .production_id = 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_product, 3, .production_id = 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_args, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_args, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(396),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 2),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_definition, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_definition, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(378),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(361),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(388),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 3),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namespace_repeat1, 2),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namespace_repeat1, 2), SHIFT_REPEAT(387),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2), SHIFT_REPEAT(268),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_type_repeat1, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_type_repeat1, 2), SHIFT_REPEAT(268),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_type_repeat1, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath_component, 1),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath_component, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_of_namespace, 2),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_of_namespace, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alias_type_repeat1, 2), SHIFT_REPEAT(385),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(390),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_statement, 2),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_statement, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2), SHIFT_REPEAT(295),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_parameters_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_list_repeat1, 2),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_list_repeat1, 2), SHIFT_REPEAT(374),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_list, 1),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2), SHIFT_REPEAT(21),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_args_repeat1, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 4),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 3),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1090] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_parameters, 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_size, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
