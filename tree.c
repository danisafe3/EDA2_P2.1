#include <stdlib.h>
#include <string.h>

#include "commons.h"
#include "tree.h"


#include <stdio.h>
// NODE

void clearPostOrder(Node* node) {

}

Node *createNode(WordInfo wi) {

    Node * node = (Node*) malloc(sizeof (Node));

    strncpy(node->wi.word,wi.word, MAX_WORD_LENGTH);
    strncpy(node->wi.definition,wi.definition, MAX_DEFINITION_LENGTH);
    node->wi.pos = wi.pos;
    return NULL;
}

void insertNode(Node* node, WordInfo wi) {


    if (strcmp(node->wi.word, wi.word) > 0) {
        if (node->left_tree == NULL) {
            node->left_tree = createNode(wi);
            

        } else {
            node = node->left_tree;
            insertNode(node, wi);
        }
    } else if (strcmp(node->wi.word, wi.word) < 0) {
        
       if (node->right_tree == NULL) {
            node->right_tree = createNode(wi);

        } else {
            node = node->right_tree;
            insertNode(node, wi);
        }
    }

}

Node* findNode(Node* node, char* word) {
    
    if (strcmp(node->wi.word,word) == 0)
        return(node);
    else if (strcmp(node->wi.word , word)  < 0 ){
        node = node->left_tree;
        findNode(node,word);
    }
    else if (strcmp(node->wi.word , word)  > 0 ){
        node = node->right_tree;
        findNode(node,word);
    }
    else
        return NULL;
}

void printInOrder(Node* node)
{ 
    if (node->left_tree != NULL)
        printInOrder(node->left_tree);
    printWordInfo(node->wi);
    if (node->right_tree != NULL)
        printInOrder(node->right_tree);
}

// TREE

void init_tree(Tree* t) {

    Node *first;

    first = (Node*) malloc(sizeof (Node));

    first->left_tree = NULL;
    first->right_tree = NULL;


    t->root = first;
    t->size = 0;

} //OK

void clear_tree(Tree* t) {



}

void insert_into_tree(Tree* t, WordInfo wi) {

    Node *aux;
    
    if (t->root == NULL){
        t->root = createNode(wi);
        t->size++; 
    }
    else if (find_in_tree(t,wi.word) == NULL){
        aux = t->root;
        insertNode(aux,wi);
        t->size++;
        
    }
        
    else 
        printf("XX This word (\"%s\")already exists!", wi.word);

}

WordInfo* find_in_tree(Tree* t, char* word) {
    if (t->root == NULL) {
        return NULL;
    } else {
        WordInfo* aux = &(t->root->wi);
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
int size_tree(Tree* t) {
    return (t->size);
}

void print_tree(Tree* t){
    printf("HOLA ESTE ES NUESTRO ARBOLO SALU2\n");
    printInOrder(t->root);
}

