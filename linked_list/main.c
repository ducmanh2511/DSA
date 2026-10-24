#include "linked_list.h"
#include<stdio.h>
int main(){
    Node *head = NULL;
    head = create_node(10);
    insert_first(&head,20);
    insert_first(&head,30);
    insert_last(&head,70);
    delete_node(&head,1);
    print_list(head);
    free_list(&head);


}