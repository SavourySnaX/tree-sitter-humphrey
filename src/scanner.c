#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  BLOCK_COMMENT,
};

void *tree_sitter_humphrey_external_scanner_create() { return NULL; }
void tree_sitter_humphrey_external_scanner_destroy(void *p) {}
void tree_sitter_humphrey_external_scanner_reset(void *p) {}
unsigned tree_sitter_humphrey_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_humphrey_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

bool tree_sitter_humphrey_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {


  while (iswspace(lexer->lookahead) || lexer->lookahead==0xA0 || lexer->lookahead==0xFEFF || lexer->lookahead==0x3000) lexer->advance(lexer, true);


// Block Comments
  if (lexer->lookahead == '#') {
    advance(lexer);
    if (lexer->lookahead != '!') return false;
    advance(lexer);

    bool after_bang = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '!':
          advance(lexer);
          after_bang = true;
          break;
        case '#':
          if (after_bang) {
            advance(lexer);
            after_bang = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              lexer->result_symbol = BLOCK_COMMENT;
              return true;
            }
          } else {
            advance(lexer);
            after_bang = false;
            if (lexer->lookahead == '!') {
              nesting_depth++;
              advance(lexer);
            }
          }
          break;
        default:
          advance(lexer);
          after_bang = false;
          break;
      }
    }
  }

  return false;
}
