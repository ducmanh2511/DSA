#include <stdio.h>
void swap(int *a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int min_idx = i;
        for(int j=i+1; j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
                
            }
        }
        swap(&arr[min_idx],&arr[i]);
    }
}
int main(){
    int arr[7] = {1,4,5,8,9,4,2};
    selectionSort(arr,7);
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}