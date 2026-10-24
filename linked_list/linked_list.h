#ifndef LINK_LIST_H
#define LINK_LIST_H
#include <stdlib.h>
#include <stdio.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* create_node(int value);
void insert_last(Node **head, int value);
void insert_first(Node **head, int value);
void insert(Node **head, int index, int value); 
void delete_node(Node **head, int index);
Node* get_node(Node *head, int index);
void print_list(Node *head);
void free_list(Node **head);





#endif