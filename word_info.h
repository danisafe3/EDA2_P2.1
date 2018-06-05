#ifndef WORDINFO_H
#define WORDINFO_H

#define MAX_WORD_LENGTH 30
#define MAX_DEFINITION_LENGTH 100

typedef struct {
    char word[MAX_WORD_LENGTH];
    char definition[MAX_DEFINITION_LENGTH];
    char pos;                              
} WordInfo;

struct nodes{
    WordInfo wi;
    struct nodes *father; //Se puede eliminar, no es necesario
    struct nodes *left_tree;
    struct nodes *right_tree;
};
typedef struct nodes Node;

void create_word_info(WordInfo* wi, char* word, char* definition, char pos);
char* get_word(WordInfo* wi);
void print_word_info(WordInfo wi);

#endif
