#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 176
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 33

enum ts_symbol_identifiers {
  sym_ident = 1,
  anon_sym_extern = 2,
  anon_sym_fn = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  anon_sym_SEMI = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_abi_token1 = 9,
  anon_sym_COMMA = 10,
  anon_sym_DOT_DOT_DOT = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_let = 14,
  anon_sym_EQ = 15,
  anon_sym_return = 16,
  anon_sym_if = 17,
  anon_sym_else = 18,
  aux_sym_integer_literal_token1 = 19,
  anon_sym_c_DQUOTE = 20,
  aux_sym__string_inner_token1 = 21,
  sym_escape_sequence = 22,
  anon_sym_PERCENT = 23,
  anon_sym_DASH = 24,
  anon_sym_PLUS = 25,
  anon_sym_SPACE = 26,
  anon_sym_POUND = 27,
  anon_sym_0 = 28,
  anon_sym_STAR = 29,
  anon_sym_DOT_STAR = 30,
  aux_sym__c_fmt_precision_token1 = 31,
  anon_sym_hh = 32,
  anon_sym_h = 33,
  anon_sym_l = 34,
  anon_sym_ll = 35,
  anon_sym_j = 36,
  anon_sym_z = 37,
  anon_sym_t = 38,
  anon_sym_L = 39,
  anon_sym_d = 40,
  anon_sym_i = 41,
  anon_sym_u = 42,
  anon_sym_o = 43,
  anon_sym_x = 44,
  anon_sym_X = 45,
  anon_sym_f = 46,
  anon_sym_F = 47,
  anon_sym_e = 48,
  anon_sym_E = 49,
  anon_sym_g = 50,
  anon_sym_G = 51,
  anon_sym_a = 52,
  anon_sym_A = 53,
  anon_sym_c = 54,
  anon_sym_s = 55,
  anon_sym_p = 56,
  anon_sym_n = 57,
  anon_sym_SLASH = 58,
  anon_sym_LT_LT = 59,
  anon_sym_GT_GT = 60,
  anon_sym_AMP = 61,
  anon_sym_PIPE = 62,
  anon_sym_CARET = 63,
  anon_sym_EQ_EQ = 64,
  anon_sym_BANG_EQ = 65,
  anon_sym_LT = 66,
  anon_sym_LT_EQ = 67,
  anon_sym_GT = 68,
  anon_sym_GT_EQ = 69,
  anon_sym_AMP_AMP = 70,
  anon_sym_PIPE_PIPE = 71,
  anon_sym_and = 72,
  anon_sym_or = 73,
  anon_sym_const = 74,
  anon_sym_u8 = 75,
  anon_sym_u16 = 76,
  anon_sym_u32 = 77,
  anon_sym_u64 = 78,
  anon_sym_u128 = 79,
  anon_sym_usize = 80,
  anon_sym_i8 = 81,
  anon_sym_i16 = 82,
  anon_sym_i32 = 83,
  anon_sym_i64 = 84,
  anon_sym_i128 = 85,
  anon_sym_isize = 86,
  anon_sym_f32 = 87,
  anon_sym_f64 = 88,
  anon_sym_char = 89,
  anon_sym_bool = 90,
  anon_sym_SLASH_SLASH = 91,
  aux_sym_line_comment_token1 = 92,
  anon_sym_LF = 93,
  sym_source_file = 94,
  sym__top_level_expr = 95,
  sym_external_function = 96,
  sym_abi = 97,
  sym_function = 98,
  sym_function_args = 99,
  sym_function_arg = 100,
  sym_block = 101,
  sym__statement = 102,
  sym__expression_statement = 103,
  sym_variable_declaration = 104,
  sym_return_statement = 105,
  sym_if_statement = 106,
  sym__expression = 107,
  sym__literal = 108,
  sym_integer_literal = 109,
  sym_string_literal = 110,
  sym_c_string_literal = 111,
  sym__string_inner = 112,
  sym__c_string_inner = 113,
  sym_c_escape_sequence = 114,
  sym__c_fmt = 115,
  sym__c_fmt_flags = 116,
  sym__c_fmt_width = 117,
  sym__c_fmt_precision = 118,
  sym__c_fmt_length = 119,
  sym__c_fmt_specifier = 120,
  sym_function_call = 121,
  sym_binary_operation = 122,
  sym_type = 123,
  sym_line_comment = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_function_args_repeat1 = 126,
  aux_sym_block_repeat1 = 127,
  aux_sym_string_literal_repeat1 = 128,
  aux_sym_c_string_literal_repeat1 = 129,
  aux_sym_function_call_repeat1 = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_extern] = "extern",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_abi_token1] = "abi_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [anon_sym_c_DQUOTE] = "c\"",
  [aux_sym__string_inner_token1] = "_string_inner_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_SPACE] = " ",
  [anon_sym_POUND] = "#",
  [anon_sym_0] = "0",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT_STAR] = ".*",
  [aux_sym__c_fmt_precision_token1] = "_c_fmt_precision_token1",
  [anon_sym_hh] = "hh",
  [anon_sym_h] = "h",
  [anon_sym_l] = "l",
  [anon_sym_ll] = "ll",
  [anon_sym_j] = "j",
  [anon_sym_z] = "z",
  [anon_sym_t] = "t",
  [anon_sym_L] = "L",
  [anon_sym_d] = "d",
  [anon_sym_i] = "i",
  [anon_sym_u] = "u",
  [anon_sym_o] = "o",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [anon_sym_f] = "f",
  [anon_sym_F] = "F",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_g] = "g",
  [anon_sym_G] = "G",
  [anon_sym_a] = "a",
  [anon_sym_A] = "A",
  [anon_sym_c] = "c",
  [anon_sym_s] = "s",
  [anon_sym_p] = "p",
  [anon_sym_n] = "n",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_const] = "const",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u128] = "u128",
  [anon_sym_usize] = "usize",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i128] = "i128",
  [anon_sym_isize] = "isize",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_char] = "char",
  [anon_sym_bool] = "bool",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LF] = "\n",
  [sym_source_file] = "source_file",
  [sym__top_level_expr] = "_top_level_expr",
  [sym_external_function] = "external_function",
  [sym_abi] = "abi",
  [sym_function] = "function",
  [sym_function_args] = "function_args",
  [sym_function_arg] = "function_arg",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_string_literal] = "string_literal",
  [sym_c_string_literal] = "c_string_literal",
  [sym__string_inner] = "_string_inner",
  [sym__c_string_inner] = "_c_string_inner",
  [sym_c_escape_sequence] = "c_escape_sequence",
  [sym__c_fmt] = "_c_fmt",
  [sym__c_fmt_flags] = "_c_fmt_flags",
  [sym__c_fmt_width] = "_c_fmt_width",
  [sym__c_fmt_precision] = "_c_fmt_precision",
  [sym__c_fmt_length] = "_c_fmt_length",
  [sym__c_fmt_specifier] = "_c_fmt_specifier",
  [sym_function_call] = "function_call",
  [sym_binary_operation] = "binary_operation",
  [sym_type] = "type",
  [sym_line_comment] = "line_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_c_string_literal_repeat1] = "c_string_literal_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_abi_token1] = aux_sym_abi_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [anon_sym_c_DQUOTE] = anon_sym_c_DQUOTE,
  [aux_sym__string_inner_token1] = aux_sym__string_inner_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [aux_sym__c_fmt_precision_token1] = aux_sym__c_fmt_precision_token1,
  [anon_sym_hh] = anon_sym_hh,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_ll] = anon_sym_ll,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i128] = anon_sym_i128,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_source_file] = sym_source_file,
  [sym__top_level_expr] = sym__top_level_expr,
  [sym_external_function] = sym_external_function,
  [sym_abi] = sym_abi,
  [sym_function] = sym_function,
  [sym_function_args] = sym_function_args,
  [sym_function_arg] = sym_function_arg,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_c_string_literal] = sym_c_string_literal,
  [sym__string_inner] = sym__string_inner,
  [sym__c_string_inner] = sym__c_string_inner,
  [sym_c_escape_sequence] = sym_c_escape_sequence,
  [sym__c_fmt] = sym__c_fmt,
  [sym__c_fmt_flags] = sym__c_fmt_flags,
  [sym__c_fmt_width] = sym__c_fmt_width,
  [sym__c_fmt_precision] = sym__c_fmt_precision,
  [sym__c_fmt_length] = sym__c_fmt_length,
  [sym__c_fmt_specifier] = sym__c_fmt_specifier,
  [sym_function_call] = sym_function_call,
  [sym_binary_operation] = sym_binary_operation,
  [sym_type] = sym_type,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_c_string_literal_repeat1] = aux_sym_c_string_literal_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_abi_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [aux_sym_integer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_c_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_inner_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__c_fmt_precision_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_external_function] = {
    .visible = true,
    .named = true,
  },
  [sym_abi] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_args] = {
    .visible = true,
    .named = true,
  },
  [sym_function_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_c_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__c_string_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_c_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__c_fmt] = {
    .visible = false,
    .named = true,
  },
  [sym__c_fmt_flags] = {
    .visible = false,
    .named = true,
  },
  [sym__c_fmt_width] = {
    .visible = false,
    .named = true,
  },
  [sym__c_fmt_precision] = {
    .visible = false,
    .named = true,
  },
  [sym__c_fmt_length] = {
    .visible = false,
    .named = true,
  },
  [sym__c_fmt_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_abi = 1,
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_else = 5,
  field_flags = 6,
  field_length = 7,
  field_lhs = 8,
  field_name = 9,
  field_op = 10,
  field_precision = 11,
  field_return_type = 12,
  field_rhs = 13,
  field_specifier = 14,
  field_then = 15,
  field_type = 16,
  field_width = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abi] = "abi",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_else] = "else",
  [field_flags] = "flags",
  [field_length] = "length",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_precision] = "precision",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_specifier] = "specifier",
  [field_then] = "then",
  [field_type] = "type",
  [field_width] = "width",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 4},
  [5] = {.index = 11, .length = 3},
  [6] = {.index = 14, .length = 3},
  [7] = {.index = 17, .length = 5},
  [8] = {.index = 22, .length = 4},
  [9] = {.index = 26, .length = 2},
  [10] = {.index = 28, .length = 1},
  [11] = {.index = 29, .length = 2},
  [12] = {.index = 31, .length = 3},
  [13] = {.index = 34, .length = 2},
  [14] = {.index = 36, .length = 2},
  [15] = {.index = 38, .length = 2},
  [16] = {.index = 40, .length = 2},
  [17] = {.index = 42, .length = 2},
  [18] = {.index = 44, .length = 1},
  [19] = {.index = 45, .length = 3},
  [20] = {.index = 48, .length = 3},
  [21] = {.index = 51, .length = 3},
  [22] = {.index = 54, .length = 3},
  [23] = {.index = 57, .length = 3},
  [24] = {.index = 60, .length = 3},
  [25] = {.index = 63, .length = 3},
  [26] = {.index = 66, .length = 3},
  [27] = {.index = 69, .length = 4},
  [28] = {.index = 73, .length = 4},
  [29] = {.index = 77, .length = 4},
  [30] = {.index = 81, .length = 4},
  [31] = {.index = 85, .length = 3},
  [32] = {.index = 88, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_type, 2},
  [2] =
    {field_body, 6},
    {field_name, 1},
    {field_return_type, 5},
  [5] =
    {field_name, 2},
    {field_return_type, 6},
  [7] =
    {field_arguments, 3},
    {field_body, 7},
    {field_name, 1},
    {field_return_type, 6},
  [11] =
    {field_arguments, 4},
    {field_name, 2},
    {field_return_type, 7},
  [14] =
    {field_abi, 1},
    {field_name, 3},
    {field_return_type, 7},
  [17] =
    {field_flags, 0, .inherited = true},
    {field_length, 0, .inherited = true},
    {field_precision, 0, .inherited = true},
    {field_specifier, 0, .inherited = true},
    {field_width, 0, .inherited = true},
  [22] =
    {field_abi, 1},
    {field_arguments, 5},
    {field_name, 3},
    {field_return_type, 8},
  [26] =
    {field_condition, 1},
    {field_then, 2},
  [28] =
    {field_specifier, 1},
  [29] =
    {field_lhs, 0},
    {field_rhs, 2},
  [31] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [34] =
    {field_flags, 1},
    {field_specifier, 2},
  [36] =
    {field_specifier, 2},
    {field_width, 1},
  [38] =
    {field_precision, 1},
    {field_specifier, 2},
  [40] =
    {field_length, 1},
    {field_specifier, 2},
  [42] =
    {field_arguments, 2},
    {field_name, 0},
  [44] =
    {field_name, 1},
  [45] =
    {field_condition, 1},
    {field_else, 4},
    {field_then, 2},
  [48] =
    {field_flags, 1},
    {field_specifier, 3},
    {field_width, 2},
  [51] =
    {field_flags, 1},
    {field_precision, 2},
    {field_specifier, 3},
  [54] =
    {field_flags, 1},
    {field_length, 2},
    {field_specifier, 3},
  [57] =
    {field_precision, 2},
    {field_specifier, 3},
    {field_width, 1},
  [60] =
    {field_length, 2},
    {field_specifier, 3},
    {field_width, 1},
  [63] =
    {field_length, 2},
    {field_precision, 1},
    {field_specifier, 3},
  [66] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [69] =
    {field_flags, 1},
    {field_precision, 3},
    {field_specifier, 4},
    {field_width, 2},
  [73] =
    {field_flags, 1},
    {field_length, 3},
    {field_specifier, 4},
    {field_width, 2},
  [77] =
    {field_flags, 1},
    {field_length, 3},
    {field_precision, 2},
    {field_specifier, 4},
  [81] =
    {field_length, 3},
    {field_precision, 2},
    {field_specifier, 4},
    {field_width, 1},
  [85] =
    {field_name, 1},
    {field_type, 2},
    {field_type, 3},
  [88] =
    {field_flags, 1},
    {field_length, 4},
    {field_precision, 3},
    {field_specifier, 5},
    {field_width, 2},
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
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
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 78,
  [136] = 136,
  [137] = 137,
  [138] = 80,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
};

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_ident_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '&') ADVANCE(46);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '&') ADVANCE(46);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_abi_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_c_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__string_inner_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__string_inner_token1);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__string_inner_token1);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__string_inner_token1);
      if (lookahead == '/') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__c_fmt_precision_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '"') ADVANCE(28);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ident);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'G') ADVANCE(4);
      if (lookahead == 'L') ADVANCE(5);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'j') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == 'z') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '6') ADVANCE(39);
      if (lookahead == '8') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_j);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == '8') ADVANCE(50);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == '4') ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_hh);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == '4') ADVANCE(63);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ll);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '6') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 60:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 64:
      if (lookahead == 'z') ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == '8') ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 71:
      if (lookahead == 'z') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 61},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [aux_sym__c_fmt_precision_token1] = ACTIONS(1),
    [anon_sym_hh] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_ll] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(151),
    [sym__top_level_expr] = STATE(130),
    [sym_external_function] = STATE(139),
    [sym_function] = STATE(139),
    [sym_line_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      anon_sym_SPACE,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(2), 1,
      sym_line_comment,
    STATE(3), 1,
      sym__c_fmt_flags,
    STATE(5), 1,
      sym__c_fmt_width,
    STATE(7), 1,
      sym__c_fmt_precision,
    STATE(58), 1,
      sym__c_fmt_length,
    STATE(101), 1,
      sym__c_fmt_specifier,
    ACTIONS(11), 2,
      aux_sym_integer_literal_token1,
      anon_sym_STAR,
    ACTIONS(17), 2,
      anon_sym_DOT_STAR,
      aux_sym__c_fmt_precision_token1,
    ACTIONS(13), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_POUND,
      anon_sym_0,
    ACTIONS(19), 8,
      anon_sym_hh,
      anon_sym_h,
      anon_sym_l,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(21), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [69] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(3), 1,
      sym_line_comment,
    STATE(4), 1,
      sym__c_fmt_width,
    STATE(10), 1,
      sym__c_fmt_precision,
    STATE(57), 1,
      sym__c_fmt_length,
    STATE(100), 1,
      sym__c_fmt_specifier,
    ACTIONS(19), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(25), 2,
      aux_sym_integer_literal_token1,
      anon_sym_STAR,
    ACTIONS(27), 2,
      anon_sym_DOT_STAR,
      aux_sym__c_fmt_precision_token1,
    ACTIONS(29), 6,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [128] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(4), 1,
      sym_line_comment,
    STATE(8), 1,
      sym__c_fmt_precision,
    STATE(52), 1,
      sym__c_fmt_length,
    STATE(115), 1,
      sym__c_fmt_specifier,
    ACTIONS(19), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(27), 2,
      anon_sym_DOT_STAR,
      aux_sym__c_fmt_precision_token1,
    ACTIONS(29), 6,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [180] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(5), 1,
      sym_line_comment,
    STATE(9), 1,
      sym__c_fmt_precision,
    STATE(60), 1,
      sym__c_fmt_length,
    STATE(119), 1,
      sym__c_fmt_specifier,
    ACTIONS(19), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(27), 2,
      anon_sym_DOT_STAR,
      aux_sym__c_fmt_precision_token1,
    ACTIONS(29), 6,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [232] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(35), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(33), 28,
      aux_sym_integer_literal_token1,
      anon_sym_STAR,
      anon_sym_DOT_STAR,
      aux_sym__c_fmt_precision_token1,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [273] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_line_comment,
    STATE(59), 1,
      sym__c_fmt_length,
    STATE(118), 1,
      sym__c_fmt_specifier,
    ACTIONS(19), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(29), 6,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [318] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_line_comment,
    STATE(46), 1,
      sym__c_fmt_length,
    STATE(108), 1,
      sym__c_fmt_specifier,
    ACTIONS(19), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(29), 6,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [363] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_line_comment,
    STATE(49), 1,
      sym__c_fmt_length,
    STATE(112), 1,
      sym__c_fmt_specifier,
    ACTIONS(19), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(29), 6,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [408] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_line_comment,
    STATE(51), 1,
      sym__c_fmt_length,
    STATE(114), 1,
      sym__c_fmt_specifier,
    ACTIONS(19), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(29), 6,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(39), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(37), 26,
      anon_sym_DOT_STAR,
      aux_sym__c_fmt_precision_token1,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(43), 6,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [529] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(49), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(53), 6,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [605] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_h,
      anon_sym_l,
    ACTIONS(55), 24,
      anon_sym_hh,
      anon_sym_ll,
      anon_sym_j,
      anon_sym_z,
      anon_sym_t,
      anon_sym_L,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [642] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 12,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(79), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [728] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 13,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(83), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [810] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(75), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 19,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [848] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 17,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [890] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 15,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [934] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(87), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(91), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(95), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1042] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(99), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(103), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(107), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1150] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 8,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1202] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(49), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(115), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1274] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(119), 5,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 20,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_PERCENT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1310] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      sym_line_comment,
    STATE(134), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1367] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1419] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_line_comment,
    STATE(79), 1,
      sym_block,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1473] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1524] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1575] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1626] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(147), 1,
      anon_sym_return,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(38), 1,
      sym__expression,
    STATE(39), 1,
      sym_line_comment,
    STATE(44), 1,
      aux_sym_block_repeat1,
    STATE(81), 1,
      sym__statement,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
    STATE(88), 4,
      sym__expression_statement,
      sym_variable_declaration,
      sym_return_statement,
      sym_if_statement,
  [1685] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(147), 1,
      anon_sym_return,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym__expression,
    STATE(40), 1,
      sym_line_comment,
    STATE(44), 1,
      aux_sym_block_repeat1,
    STATE(81), 1,
      sym__statement,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
    STATE(88), 4,
      sym__expression_statement,
      sym_variable_declaration,
      sym_return_statement,
      sym_if_statement,
  [1744] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(147), 1,
      anon_sym_return,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym__expression,
    STATE(40), 1,
      aux_sym_block_repeat1,
    STATE(41), 1,
      sym_line_comment,
    STATE(81), 1,
      sym__statement,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
    STATE(88), 4,
      sym__expression_statement,
      sym_variable_declaration,
      sym_return_statement,
      sym_if_statement,
  [1803] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(147), 1,
      anon_sym_return,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym__expression,
    STATE(39), 1,
      aux_sym_block_repeat1,
    STATE(42), 1,
      sym_line_comment,
    STATE(81), 1,
      sym__statement,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
    STATE(88), 4,
      sym__expression_statement,
      sym_variable_declaration,
      sym_return_statement,
      sym_if_statement,
  [1862] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [1913] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      sym_ident,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      anon_sym_return,
    ACTIONS(180), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(186), 1,
      anon_sym_c_DQUOTE,
    STATE(38), 1,
      sym__expression,
    STATE(81), 1,
      sym__statement,
    STATE(44), 2,
      sym_line_comment,
      aux_sym_block_repeat1,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
    STATE(88), 4,
      sym__expression_statement,
      sym_variable_declaration,
      sym_return_statement,
      sym_if_statement,
  [1970] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_SLASH,
    ACTIONS(73), 1,
      anon_sym_CARET,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_PERCENT,
      anon_sym_STAR,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(71), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(125), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_or,
  [2021] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 1,
      sym_line_comment,
    STATE(104), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2051] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_type,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2083] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_line_comment,
    STATE(162), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2115] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(49), 1,
      sym_line_comment,
    STATE(105), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2145] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(50), 1,
      sym_line_comment,
    STATE(144), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(51), 1,
      sym_line_comment,
    STATE(106), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 1,
      sym_line_comment,
    STATE(107), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_line_comment,
    STATE(152), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2269] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_line_comment,
    STATE(161), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_line_comment,
    STATE(154), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2333] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_type,
    STATE(56), 1,
      sym_line_comment,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2365] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_line_comment,
    STATE(113), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_line_comment,
    STATE(117), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2425] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_line_comment,
    STATE(110), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_line_comment,
    STATE(111), 1,
      sym__c_fmt_specifier,
    ACTIONS(31), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2485] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_line_comment,
    STATE(141), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2517] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(62), 1,
      sym_line_comment,
    STATE(149), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2549] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_line_comment,
    STATE(140), 1,
      sym_type,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_const,
    ACTIONS(193), 16,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_usize,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_char,
      anon_sym_bool,
  [2581] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(64), 1,
      sym_line_comment,
    ACTIONS(195), 18,
      anon_sym_d,
      anon_sym_i,
      anon_sym_u,
      anon_sym_o,
      anon_sym_x,
      anon_sym_X,
      anon_sym_f,
      anon_sym_F,
      anon_sym_e,
      anon_sym_E,
      anon_sym_g,
      anon_sym_G,
      anon_sym_a,
      anon_sym_A,
      anon_sym_c,
      anon_sym_s,
      anon_sym_p,
      anon_sym_n,
  [2608] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym__expression,
    STATE(65), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2646] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(36), 1,
      sym__expression,
    STATE(66), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2681] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(45), 1,
      sym__expression,
    STATE(67), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2716] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(16), 1,
      sym__expression,
    STATE(68), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2751] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(35), 1,
      sym__expression,
    STATE(69), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2786] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(21), 1,
      sym__expression,
    STATE(70), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2821] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(33), 1,
      sym__expression,
    STATE(71), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2856] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(34), 1,
      sym__expression,
    STATE(72), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2891] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(22), 1,
      sym__expression,
    STATE(73), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2926] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(37), 1,
      sym__expression,
    STATE(74), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2961] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(20), 1,
      sym__expression,
    STATE(75), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [2996] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(29), 1,
      sym__expression,
    STATE(76), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [3031] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(153), 1,
      anon_sym_c_DQUOTE,
    STATE(18), 1,
      sym__expression,
    STATE(77), 1,
      sym_line_comment,
    STATE(30), 3,
      sym__literal,
      sym_function_call,
      sym_binary_operation,
    STATE(32), 3,
      sym_integer_literal,
      sym_string_literal,
      sym_c_string_literal,
  [3066] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(78), 1,
      sym_line_comment,
    ACTIONS(199), 5,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      sym_ident,
    ACTIONS(201), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3087] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      anon_sym_else,
    STATE(79), 1,
      sym_line_comment,
    ACTIONS(203), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(205), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(209), 5,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      sym_ident,
    ACTIONS(211), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(213), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(215), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3151] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(217), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(219), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3171] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(221), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(223), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3191] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(225), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(227), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(85), 1,
      sym_line_comment,
    ACTIONS(229), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(231), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(233), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(235), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3251] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(237), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(239), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3271] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(241), 4,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      sym_ident,
    ACTIONS(243), 5,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      aux_sym_integer_literal_token1,
      anon_sym_c_DQUOTE,
  [3291] = 8,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_PERCENT,
    STATE(102), 1,
      sym__c_string_inner,
    STATE(103), 1,
      sym__c_fmt,
    STATE(109), 1,
      sym_c_escape_sequence,
    ACTIONS(247), 2,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
    STATE(89), 2,
      sym_line_comment,
      aux_sym_c_string_literal_repeat1,
  [3318] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_PERCENT,
    STATE(90), 1,
      sym_line_comment,
    STATE(91), 1,
      aux_sym_c_string_literal_repeat1,
    STATE(102), 1,
      sym__c_string_inner,
    STATE(103), 1,
      sym__c_fmt,
    STATE(109), 1,
      sym_c_escape_sequence,
    ACTIONS(255), 2,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
  [3347] = 9,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_PERCENT,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_c_string_literal_repeat1,
    STATE(91), 1,
      sym_line_comment,
    STATE(102), 1,
      sym__c_string_inner,
    STATE(103), 1,
      sym__c_fmt,
    STATE(109), 1,
      sym_c_escape_sequence,
    ACTIONS(255), 2,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
  [3376] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_extern,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      sym_line_comment,
    STATE(93), 1,
      aux_sym_source_file_repeat1,
    STATE(130), 1,
      sym__top_level_expr,
    STATE(139), 2,
      sym_external_function,
      sym_function,
  [3402] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 1,
      anon_sym_extern,
    ACTIONS(268), 1,
      anon_sym_fn,
    STATE(130), 1,
      sym__top_level_expr,
    STATE(93), 2,
      sym_line_comment,
      aux_sym_source_file_repeat1,
    STATE(139), 2,
      sym_external_function,
      sym_function,
  [3426] = 6,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_line_comment,
    STATE(95), 1,
      aux_sym_string_literal_repeat1,
    STATE(133), 1,
      sym__string_inner,
    ACTIONS(273), 2,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
  [3446] = 5,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym__string_inner,
    ACTIONS(277), 2,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
    STATE(95), 2,
      sym_line_comment,
      aux_sym_string_literal_repeat1,
  [3464] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(280), 1,
      sym_ident,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(96), 1,
      sym_line_comment,
    STATE(127), 1,
      sym_function_arg,
    STATE(168), 1,
      sym_function_args,
  [3486] = 6,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_string_literal_repeat1,
    STATE(97), 1,
      sym_line_comment,
    STATE(133), 1,
      sym__string_inner,
    ACTIONS(273), 2,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
  [3506] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(280), 1,
      sym_ident,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_line_comment,
    STATE(127), 1,
      sym_function_arg,
    STATE(166), 1,
      sym_function_args,
  [3528] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(280), 1,
      sym_ident,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_line_comment,
    STATE(127), 1,
      sym_function_arg,
    STATE(170), 1,
      sym_function_args,
  [3550] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(100), 1,
      sym_line_comment,
    ACTIONS(292), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3563] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(101), 1,
      sym_line_comment,
    ACTIONS(294), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3576] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(102), 1,
      sym_line_comment,
    ACTIONS(296), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3589] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3602] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(104), 1,
      sym_line_comment,
    ACTIONS(300), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3615] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_line_comment,
    ACTIONS(302), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3628] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(106), 1,
      sym_line_comment,
    ACTIONS(304), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3641] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(107), 1,
      sym_line_comment,
    ACTIONS(306), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3654] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3667] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(109), 1,
      sym_line_comment,
    ACTIONS(310), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3680] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3693] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(111), 1,
      sym_line_comment,
    ACTIONS(314), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3706] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_line_comment,
    ACTIONS(316), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3719] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(113), 1,
      sym_line_comment,
    ACTIONS(318), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3732] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(114), 1,
      sym_line_comment,
    ACTIONS(320), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3745] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(115), 1,
      sym_line_comment,
    ACTIONS(322), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3758] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(116), 1,
      sym_line_comment,
    ACTIONS(324), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3771] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 1,
      sym_line_comment,
    ACTIONS(326), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3784] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 1,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3797] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 1,
      sym_line_comment,
    ACTIONS(330), 4,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
      anon_sym_PERCENT,
  [3810] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_if,
    STATE(120), 1,
      sym_line_comment,
    STATE(86), 2,
      sym_block,
      sym_if_statement,
  [3827] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 1,
      sym_line_comment,
    ACTIONS(334), 3,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
  [3839] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(122), 1,
      sym_line_comment,
    ACTIONS(336), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [3851] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(280), 1,
      sym_ident,
    ACTIONS(284), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(123), 1,
      sym_line_comment,
    STATE(143), 1,
      sym_function_arg,
  [3867] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(124), 1,
      sym_line_comment,
    ACTIONS(338), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [3879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      sym_line_comment,
    STATE(137), 1,
      aux_sym_function_args_repeat1,
  [3895] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym_line_comment,
    ACTIONS(344), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [3907] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_function_args_repeat1,
    STATE(127), 1,
      sym_line_comment,
  [3923] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(128), 1,
      sym_line_comment,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [3935] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(129), 1,
      sym_line_comment,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [3947] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym_line_comment,
    ACTIONS(352), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [3959] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    STATE(131), 2,
      sym_line_comment,
      aux_sym_function_call_repeat1,
  [3973] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(357), 1,
      anon_sym_fn,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_line_comment,
    STATE(164), 1,
      sym_abi,
  [3989] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    STATE(133), 1,
      sym_line_comment,
    ACTIONS(361), 3,
      anon_sym_DQUOTE,
      aux_sym__string_inner_token1,
      sym_escape_sequence,
  [4001] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_function_call_repeat1,
    STATE(134), 1,
      sym_line_comment,
  [4017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(135), 1,
      sym_line_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [4029] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(136), 1,
      sym_line_comment,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [4041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(137), 2,
      sym_line_comment,
      aux_sym_function_args_repeat1,
  [4055] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(138), 1,
      sym_line_comment,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [4067] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(139), 1,
      sym_line_comment,
    ACTIONS(372), 3,
      ts_builtin_sym_end,
      anon_sym_extern,
      anon_sym_fn,
  [4079] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_block,
    STATE(140), 1,
      sym_line_comment,
  [4092] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(141), 1,
      sym_line_comment,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(380), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym_line_comment,
  [4116] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym_line_comment,
    ACTIONS(367), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(374), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    STATE(144), 1,
      sym_line_comment,
  [4140] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(145), 1,
      sym_line_comment,
    ACTIONS(382), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4151] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(384), 1,
      sym_ident,
    STATE(146), 1,
      sym_line_comment,
  [4161] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(386), 1,
      sym_ident,
    STATE(147), 1,
      sym_line_comment,
  [4171] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(388), 1,
      anon_sym_fn,
    STATE(148), 1,
      sym_line_comment,
  [4181] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_line_comment,
  [4191] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(392), 1,
      anon_sym_COLON,
    STATE(150), 1,
      sym_line_comment,
  [4201] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_line_comment,
  [4211] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_line_comment,
  [4221] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_line_comment,
  [4231] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      sym_line_comment,
  [4241] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(402), 1,
      sym_ident,
    STATE(155), 1,
      sym_line_comment,
  [4251] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(404), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_line_comment,
  [4261] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_LF,
    STATE(157), 1,
      sym_line_comment,
  [4271] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(408), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_line_comment,
  [4281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(410), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_line_comment,
  [4291] = 3,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(412), 1,
      aux_sym_line_comment_token1,
    STATE(160), 1,
      sym_line_comment,
  [4301] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_line_comment,
  [4311] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(416), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_line_comment,
  [4321] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(418), 1,
      aux_sym_abi_token1,
    STATE(163), 1,
      sym_line_comment,
  [4331] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(420), 1,
      anon_sym_fn,
    STATE(164), 1,
      sym_line_comment,
  [4341] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_line_comment,
  [4351] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_line_comment,
  [4361] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_line_comment,
  [4371] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_line_comment,
  [4381] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(430), 1,
      sym_ident,
    STATE(169), 1,
      sym_line_comment,
  [4391] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      sym_line_comment,
  [4401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_line_comment,
  [4411] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(436), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_line_comment,
  [4421] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_line_comment,
  [4431] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_line_comment,
  [4441] = 1,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 363,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 453,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 529,
  [SMALL_STATE(14)] = 568,
  [SMALL_STATE(15)] = 605,
  [SMALL_STATE(16)] = 642,
  [SMALL_STATE(17)] = 692,
  [SMALL_STATE(18)] = 728,
  [SMALL_STATE(19)] = 774,
  [SMALL_STATE(20)] = 810,
  [SMALL_STATE(21)] = 848,
  [SMALL_STATE(22)] = 890,
  [SMALL_STATE(23)] = 934,
  [SMALL_STATE(24)] = 970,
  [SMALL_STATE(25)] = 1006,
  [SMALL_STATE(26)] = 1042,
  [SMALL_STATE(27)] = 1078,
  [SMALL_STATE(28)] = 1114,
  [SMALL_STATE(29)] = 1150,
  [SMALL_STATE(30)] = 1202,
  [SMALL_STATE(31)] = 1238,
  [SMALL_STATE(32)] = 1274,
  [SMALL_STATE(33)] = 1310,
  [SMALL_STATE(34)] = 1367,
  [SMALL_STATE(35)] = 1419,
  [SMALL_STATE(36)] = 1473,
  [SMALL_STATE(37)] = 1524,
  [SMALL_STATE(38)] = 1575,
  [SMALL_STATE(39)] = 1626,
  [SMALL_STATE(40)] = 1685,
  [SMALL_STATE(41)] = 1744,
  [SMALL_STATE(42)] = 1803,
  [SMALL_STATE(43)] = 1862,
  [SMALL_STATE(44)] = 1913,
  [SMALL_STATE(45)] = 1970,
  [SMALL_STATE(46)] = 2021,
  [SMALL_STATE(47)] = 2051,
  [SMALL_STATE(48)] = 2083,
  [SMALL_STATE(49)] = 2115,
  [SMALL_STATE(50)] = 2145,
  [SMALL_STATE(51)] = 2177,
  [SMALL_STATE(52)] = 2207,
  [SMALL_STATE(53)] = 2237,
  [SMALL_STATE(54)] = 2269,
  [SMALL_STATE(55)] = 2301,
  [SMALL_STATE(56)] = 2333,
  [SMALL_STATE(57)] = 2365,
  [SMALL_STATE(58)] = 2395,
  [SMALL_STATE(59)] = 2425,
  [SMALL_STATE(60)] = 2455,
  [SMALL_STATE(61)] = 2485,
  [SMALL_STATE(62)] = 2517,
  [SMALL_STATE(63)] = 2549,
  [SMALL_STATE(64)] = 2581,
  [SMALL_STATE(65)] = 2608,
  [SMALL_STATE(66)] = 2646,
  [SMALL_STATE(67)] = 2681,
  [SMALL_STATE(68)] = 2716,
  [SMALL_STATE(69)] = 2751,
  [SMALL_STATE(70)] = 2786,
  [SMALL_STATE(71)] = 2821,
  [SMALL_STATE(72)] = 2856,
  [SMALL_STATE(73)] = 2891,
  [SMALL_STATE(74)] = 2926,
  [SMALL_STATE(75)] = 2961,
  [SMALL_STATE(76)] = 2996,
  [SMALL_STATE(77)] = 3031,
  [SMALL_STATE(78)] = 3066,
  [SMALL_STATE(79)] = 3087,
  [SMALL_STATE(80)] = 3110,
  [SMALL_STATE(81)] = 3131,
  [SMALL_STATE(82)] = 3151,
  [SMALL_STATE(83)] = 3171,
  [SMALL_STATE(84)] = 3191,
  [SMALL_STATE(85)] = 3211,
  [SMALL_STATE(86)] = 3231,
  [SMALL_STATE(87)] = 3251,
  [SMALL_STATE(88)] = 3271,
  [SMALL_STATE(89)] = 3291,
  [SMALL_STATE(90)] = 3318,
  [SMALL_STATE(91)] = 3347,
  [SMALL_STATE(92)] = 3376,
  [SMALL_STATE(93)] = 3402,
  [SMALL_STATE(94)] = 3426,
  [SMALL_STATE(95)] = 3446,
  [SMALL_STATE(96)] = 3464,
  [SMALL_STATE(97)] = 3486,
  [SMALL_STATE(98)] = 3506,
  [SMALL_STATE(99)] = 3528,
  [SMALL_STATE(100)] = 3550,
  [SMALL_STATE(101)] = 3563,
  [SMALL_STATE(102)] = 3576,
  [SMALL_STATE(103)] = 3589,
  [SMALL_STATE(104)] = 3602,
  [SMALL_STATE(105)] = 3615,
  [SMALL_STATE(106)] = 3628,
  [SMALL_STATE(107)] = 3641,
  [SMALL_STATE(108)] = 3654,
  [SMALL_STATE(109)] = 3667,
  [SMALL_STATE(110)] = 3680,
  [SMALL_STATE(111)] = 3693,
  [SMALL_STATE(112)] = 3706,
  [SMALL_STATE(113)] = 3719,
  [SMALL_STATE(114)] = 3732,
  [SMALL_STATE(115)] = 3745,
  [SMALL_STATE(116)] = 3758,
  [SMALL_STATE(117)] = 3771,
  [SMALL_STATE(118)] = 3784,
  [SMALL_STATE(119)] = 3797,
  [SMALL_STATE(120)] = 3810,
  [SMALL_STATE(121)] = 3827,
  [SMALL_STATE(122)] = 3839,
  [SMALL_STATE(123)] = 3851,
  [SMALL_STATE(124)] = 3867,
  [SMALL_STATE(125)] = 3879,
  [SMALL_STATE(126)] = 3895,
  [SMALL_STATE(127)] = 3907,
  [SMALL_STATE(128)] = 3923,
  [SMALL_STATE(129)] = 3935,
  [SMALL_STATE(130)] = 3947,
  [SMALL_STATE(131)] = 3959,
  [SMALL_STATE(132)] = 3973,
  [SMALL_STATE(133)] = 3989,
  [SMALL_STATE(134)] = 4001,
  [SMALL_STATE(135)] = 4017,
  [SMALL_STATE(136)] = 4029,
  [SMALL_STATE(137)] = 4041,
  [SMALL_STATE(138)] = 4055,
  [SMALL_STATE(139)] = 4067,
  [SMALL_STATE(140)] = 4079,
  [SMALL_STATE(141)] = 4092,
  [SMALL_STATE(142)] = 4103,
  [SMALL_STATE(143)] = 4116,
  [SMALL_STATE(144)] = 4127,
  [SMALL_STATE(145)] = 4140,
  [SMALL_STATE(146)] = 4151,
  [SMALL_STATE(147)] = 4161,
  [SMALL_STATE(148)] = 4171,
  [SMALL_STATE(149)] = 4181,
  [SMALL_STATE(150)] = 4191,
  [SMALL_STATE(151)] = 4201,
  [SMALL_STATE(152)] = 4211,
  [SMALL_STATE(153)] = 4221,
  [SMALL_STATE(154)] = 4231,
  [SMALL_STATE(155)] = 4241,
  [SMALL_STATE(156)] = 4251,
  [SMALL_STATE(157)] = 4261,
  [SMALL_STATE(158)] = 4271,
  [SMALL_STATE(159)] = 4281,
  [SMALL_STATE(160)] = 4291,
  [SMALL_STATE(161)] = 4301,
  [SMALL_STATE(162)] = 4311,
  [SMALL_STATE(163)] = 4321,
  [SMALL_STATE(164)] = 4331,
  [SMALL_STATE(165)] = 4341,
  [SMALL_STATE(166)] = 4351,
  [SMALL_STATE(167)] = 4361,
  [SMALL_STATE(168)] = 4371,
  [SMALL_STATE(169)] = 4381,
  [SMALL_STATE(170)] = 4391,
  [SMALL_STATE(171)] = 4401,
  [SMALL_STATE(172)] = 4411,
  [SMALL_STATE(173)] = 4421,
  [SMALL_STATE(174)] = 4431,
  [SMALL_STATE(175)] = 4441,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_fmt_flags, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt_flags, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_fmt_width, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt_width, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_fmt_precision, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt_precision, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 12),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, .production_id = 11),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 17),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_string_literal, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_string_literal, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_string_literal, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_string_literal, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 26),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 26),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(155),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__c_fmt_length, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 18),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 18),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 19),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 19),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, .production_id = 31),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, .production_id = 31),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_c_string_literal_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_c_string_literal_repeat1, 2), SHIFT_REPEAT(109),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_c_string_literal_repeat1, 2), SHIFT_REPEAT(2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(121),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 3, .production_id = 13),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 2, .production_id = 10),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_c_string_literal_repeat1, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_escape_sequence, 1, .production_id = 7),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 6, .production_id = 32),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 5, .production_id = 30),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 5, .production_id = 29),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 5, .production_id = 28),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 5, .production_id = 27),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_string_inner, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 4, .production_id = 25),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 4, .production_id = 24),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 4, .production_id = 23),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 4, .production_id = 22),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 4, .production_id = 21),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 4, .production_id = 20),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt_specifier, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 3, .production_id = 16),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 3, .production_id = 15),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__c_fmt, 3, .production_id = 14),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_inner, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_function, 9, .production_id = 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_function, 10, .production_id = 8),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_function, 8, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_function, 9, .production_id = 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(72),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8, .production_id = 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(123),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_expr, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arg, 3, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arg, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abi, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zoid(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
