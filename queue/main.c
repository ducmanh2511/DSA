#include <stdio.h>
#include "queue.h"
int main(){
    Queue q;
    Queue_init(&q);
    Queue_enqueue(&q, 10);
    Queue_enqueue(&q, 20);
    Queue_enqueue(&q, 30);
    Queue_print(&q);
    printf("Dequeued: %d\n", Queue_dequeue(&q));
    Queue_print(&q);
    printf("Peek: %d\n", Queue_peek(&q));
    return 0;
}