#include <stdlib.h>
#include <string.h>

#include "commons.h"
#include "tree.h"



// NODE

void clearPostOrder(Node* node)
{ 
    
}

Node *createNode(WordInfo wi)
{
    Node *node  = (Node*)malloc(sizeof(Node)); 
    strncpy(node->wi.word,wi.word,MAX_WORD_LENGTH);
    strncpy(node->wi.definition,wi.definition,MAX_DEFINITION_LENGTH);
    strcpy(node->wi.pos,wi.pos);
    return node;
}

Node* insertNode(Node* node, WordInfo wi){
    
    return NULL;
}

Node* findNode(Node* node, char* word)
{
    return NULL;
}

void printInOrder(Node* node)
{ 

}

// TREE

void init_tree(Tree* t){
   t->root = NULL;
   t->size = NULL;
}

void clear_tree(Tree* t){
    
}

void insert_into_tree(Tree* t, WordInfo wi){
    
}

WordInfo* find_in_tree(Tree* t, char* word) {
    if (t->root == NULL) {
        return NULL;
    } else {
        WordInfo* aux = t->root->wi;
        int x = strcmp(get_word(aux), word);
        if (x == 0) {
            return aux;
        } else {
            Tree* aux_t;
            init_tree(aux_t);
            if (x < 0) {
                aux_t->root = t->root->left_tree;
            } else if (x > 0) {
                aux_t->root = t->root->right_tree;
            }
            return (find_in_tree(aux_t, word));
        }
    }
}

int size_tree(Tree* t){
    return t->size;
}

void print_tree(Tree* t){
    
}

