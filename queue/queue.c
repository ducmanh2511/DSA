#include "queue.h"
void Queue_init(Queue *queue){
    queue->front = 0;
    queue->rear = -1;
    queue->size = 0;
}
bool Queue_is_empty(Queue *queue){
    return queue->size == 0;
}
bool Queue_is_full(Queue *queue){
    return queue->size == MAX_SIZE;
}
void Queue_enqueue(Queue *queue, int value){
    if(Queue_is_full(queue)){
        printf("Queue is full\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->data[queue->rear] = value;
    queue->size++;
}
int Queue_dequeue(Queue *queue){
    if(Queue_is_empty(queue)){
        printf("Queue is empty\n");
        return -1;
    }
    int value = queue->data[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;
    queue->size--;
    return value;
}
int Queue_peek(Queue *queue){
    if(Queue_is_empty(queue)){
        printf("Queue is empty\n");
        return -1;
    }
    return queue->data[queue->front];
}
void Queue_print(Queue *queue){
    if(Queue_is_empty(queue)){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for(int i = 0; i < queue->size; i++){
        printf("%d ", queue->data[(queue->front + i) % MAX_SIZE]);
    }
    printf("\n");
}