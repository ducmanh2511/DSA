#include "stack.h"
void Stack_init(Stack * stack){
    stack->top = -1;
}
 void Stack_push(Stack * stack, int value){
    if(!Stack_isFull(stack)){
        stack->data[++stack->top] = value;
 }
 else{
        printf("Stack is full ! \n");
    }
}
int Stack_pop(Stack * stack){
    if(!Stack_isEmpty(stack)){
        return stack->data[stack->top--];
    }
    else{
        printf("Stack is empty !\n" );
        return -1;
    }
}
bool Stack_isEmpty(Stack * stack){
    return stack->top == -1;
}
bool Stack_isFull(Stack * stack){
    return stack->top == MAX_SIZE - 1;
}
int Stack_peek(Stack * stack){
    if(!Stack_isEmpty(stack)){
        return stack->data[stack->top];
    }
    else{
        printf("Stack is empty !\n");
        return -1;
    }
}