#include <stdio.h>
#include <string.h>
#include "word_info.h"
#include "file_utils.h"

void print_word_info(WordInfo wi) {
    printf("-> %s (%c): %s\n", "WORD", 'P', "DEFINITION");
}

// Returns the word to be used for hashing
char* get_word(WordInfo* wi) {
    return NULL;
}

// Returns the word to be used for hashing
void create_word_info(WordInfo* wi, char* word, char* definition, char pos) {

}