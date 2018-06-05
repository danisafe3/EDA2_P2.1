/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tree.h
 * Author: abravo
 *
 * Created on May 27, 2018, 10:48 AM
 */

#ifndef TREE_H
#define TREE_H

#include "word_info.h"


typedef struct {
  Node* root;     //INACABADO(?)
} Tree;

void init_tree(Tree* t);
void clear_tree(Tree* t);
int size_tree(Tree* t);
void insert_into_tree(Tree* t, WordInfo wi);
WordInfo* find_in_tree(Tree* t, char* word);
void print_tree(Tree* t);

#endif /* TREE_H */

