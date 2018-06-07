#include <stdio.h>
#include <string.h>
#include "word_info.h"
#include "file_utils.h"

void print_word_info(WordInfo wi) {
    printf("-> %s (%c): %s\n", wi.word, wi.pos, wi.definition);
}

// Returns the word to be used for hashing
char* get_word(WordInfo* wi) {
    
    if (wi->word == "\0"){
        printf("ERROR : This word does not exist! \n");
        return NULL;
    }
    else 
        return (wi->word);

}

// Returns the word to be used for hashing
void create_word_info(WordInfo* wi, char* word, char* definition, char pos) {
    
    strcpy(wi->word , word);
    strcpy(wi->definition , definition); 
    wi->pos = pos;
    

}
