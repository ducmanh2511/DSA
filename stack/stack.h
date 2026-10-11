#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;

} Stack;

 void Stack_init(Stack * stack);
 void Stack_push(Stack * stack, int value);
int Stack_pop(Stack * stack);
bool Stack_isEmpty(Stack * stack);
bool Stack_isFull(Stack * stack);
int Stack_peek(Stack * stack);


#endif
