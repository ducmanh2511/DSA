#include "dynamic_array.h"
int main(){
    // Use dynamic array 
    Dynamic_array arr;
    Dynamic_array_init(&arr,5);
    Dynamic_array_push_back(&arr,1);
    Dynamic_array_push_back(&arr,2);
    Dynamic_array_push_back(&arr,3);
    Dynamic_array_print(&arr);
    Dynamic_array_insert(&arr,1,4);
    Dynamic_array_print(&arr);
    Dynamic_array_free(&arr);

}