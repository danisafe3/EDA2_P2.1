#include <stdio.h>
#include <string.h>
#include "word_info.h"
#include "file_utils.h"

void print_word_info(WordInfo wi) {
    printf("-> %s (%c): %s\n", "WORD", 'P', "DEFINITION");
}

// Returns the word to be used for hashing
char* get_word(WordInfo* wi) {
    return wi->word;
}

// Returns the word to be used for hashing
void create_word_info(WordInfo* wi, char* word, char* definition, char pos) {
    strncpy(wi->word, word, MAX_WORD_LENGTH);
    strncpy(wi->definition, definition, MAX_DEFINITION_LENGTH);
    wi->pos = pos;
}
