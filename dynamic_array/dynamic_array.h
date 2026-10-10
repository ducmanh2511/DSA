#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *data;
    int size;
    int capacity;
} Dynamic_array;
void Dynamic_array_init(Dynamic_array *array, int capacity);
void Dynamic_array_resize(Dynamic_array *array);
void Dynamic_array_push_back(Dynamic_array *array, int value);
void Dynamic_array_insert(Dynamic_array *array, int index, int value);
void Dynamic_array_remove(Dynamic_array *array, int index);
int Dynamic_array_get(Dynamic_array *array, int index);
void Dynamic_array_set(Dynamic_array *array, int index, int value);
void Dynamic_array_print(Dynamic_array *array);
void Dynamic_array_free(Dynamic_array *array);

#endif