#include "dynamic_array.h"
void Dynamic_array_init(Dynamic_array *array, int capacity){
    array->data = (int *)malloc(capacity * sizeof(int));
    array->size = 0;
    array->capacity = capacity;
}
void Dynamic_array_resize(Dynamic_array *array){
    array->capacity *= 2;
    array->data = (int *)realloc(array->data, array->capacity * sizeof(int));
}
void Dynamic_array_push_back(Dynamic_array *array, int value){
    if(array->size >= array->capacity){
        Dynamic_array_resize(array);
    }
    array->data[array->size++] = value;
}
void Dynamic_array_insert(Dynamic_array *array, int index, int value){
    if(index < 0 || index > array->size){
        printf("Index out of bounds\n");
        return;
    }
    if(array->size >= array->capacity){
        Dynamic_array_resize(array);
    }
    for(int i = array->size; i > index; i--){
        array->data[i] = array->data[i - 1];
    }
    array->data[index] = value;
    array->size++;
}
void Dynamic_array_remove(Dynamic_array *array, int index){
    if(index < 0 || index >= array->size){
        printf("Index out of bounds\n");
        return;
    }
    for(int i = index; i < array->size - 1; i++){
        array->data[i] = array->data[i + 1];
    }
    array->size--;
}
int Dynamic_array_get(Dynamic_array *array, int index){
    if(index < 0 || index >= array->size){
        printf("Index out of bounds\n");
        return -1;
    }
    return array->data[index];
}
void Dynamic_array_print(Dynamic_array *array){
    for(int i = 0; i < array->size; i++){
        printf("%d ", array->data[i]);
    }
    printf("\n");
}
void Dynamic_array_free(Dynamic_array *array){
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
}