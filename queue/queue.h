#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>
#include <stdio.h>
#define MAX_SIZE 100
typedef struct Queue {
    int data[MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;
void Queue_init(Queue *queue);
bool Queue_is_empty(Queue *queue);
bool Queue_is_full(Queue *queue);
void Queue_enqueue(Queue *queue, int value);
int Queue_dequeue(Queue *queue);
int Queue_peek(Queue *queue);
void Queue_print(Queue *queue);


#endif