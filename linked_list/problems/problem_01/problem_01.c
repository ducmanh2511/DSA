#include <stdio.h>
#include "linked_list.h"
int main(){
	Node* head = NULL;
	int n;
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		int x;
		scanf("%d",&x);
		insert_last(&head,x);
	}
	Node *current = head;
	int arr[n];
	while(current != NULL){
		if(current->data%2!=0){
        current = current->next;
		}
		else{
			Node* start = current;
			int count = 0;
			while(current!=NULL&&current->data%2==0){
				arr[count++]= current->data;
				current = current->next;
				
			}
			
			for(int i= count-1;i>=0;i--){
				start->data = arr[i];
				start = start->next;
			}
		}
	}
	print_list(head);
	
}
