#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        int check = false;
        for(int j = 0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                check = true;
            }
            
        }
            if(check == false){
                break;
            }

    }
}
int main(){
    int arr[10] = {1,4,5,8,3,2,10,9,7,6};
    bubbleSort(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}