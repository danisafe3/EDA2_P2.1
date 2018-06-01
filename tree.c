#include <stdlib.h>
#include <string.h>

#include "commons.h"
#include "tree.h"



// NODE
/*
void clearPostOrder(Node* node)
{ 
    
}

Node *createNode(WordInfo wi)
{
    return NULL;
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

}*/

// TREE

void init_tree(Tree* t){
   t->root = NULL;
   t->size = NULL;
}

void clear_tree(Tree* t){
    
}

void insert_into_tree(Tree* t, WordInfo wi){
    
}

WordInfo* find_in_tree(Tree* t, char* word){
    WordInfo* aux = t->root->wi;
    int x = strcmp(get_word(aux), word);
    if (x == 0){
        return aux;
    }else if(x > 0){
        
    }
    return NULL;
} //INACABADO

int size_tree(Tree* t){
    return t->size;
}

void print_tree(Tree* t){
    
}

