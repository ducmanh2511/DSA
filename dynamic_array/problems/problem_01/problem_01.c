#include "dynamic_array.h"
int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    Dynamic_array *arr;
    Dynamic_array result;
    Dynamic_array_init(&result, 1);
    arr = (Dynamic_array *)malloc(n*sizeof(Dynamic_array));
    
    int last_answer = 0;
    for(int i = 0; i<n;i++){
        Dynamic_array_init(&arr[i], 3);
        
    }
     for(int i=0;i<q;i++){
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);
        int idx = (x^last_answer)%n;
        if(type == 1 ){
            Dynamic_array_push_back(&arr[idx], y);
            
        }
        else if(type == 2){
            last_answer = arr[idx].data[y%arr[idx].size];
            Dynamic_array_push_back(&result, last_answer);   
        }
     }
     for(int i = 0; i<result.size;i++){
        printf("%d\n", result.data[i]);
     }
     Dynamic_array_free(&result);
     for(int i = 0; i<n;i++){
        Dynamic_array_free(&arr[i]);
     } 
    free(arr);
     return 0;   
}