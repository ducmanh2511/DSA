#include "stack.h"
int main(){
    Stack stack;
    Stack_init(&stack);
    Stack_push(&stack, 10);
    Stack_push(&stack, 20);
    Stack_push(&stack, 30);
    Stack_push(&stack, 40);
    Stack_pop(&stack);  
    printf("Top element is %d\n", Stack_peek(&stack));
}