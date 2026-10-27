#include <stdio.h>

void insertSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j;
        for( j=i-1;j>=0;j--){
            if(arr[j]>key){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = key;

    }

}
void displayArr(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[8] = {7,5,0,9,4,3,5,2};
    insertSort(arr,8);
    displayArr(arr,8);
    return 0;
}