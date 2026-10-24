#include "linked_list.h"
Node* create_node(int value){
    Node *node = (Node *)malloc(sizeof(Node));
    if(node==NULL){
        return NULL;
    }
    node->data = value;
    node->next = NULL;
    return node; // dia chi cua new node
}
void insert_last(Node **head, int value){
     Node *new_node = create_node(value);
     if(new_node == NULL){
        return;
     }
    if(*head == NULL){
    *head = new_node;
    return;
    }
     Node *current = *head;
     while(current->next != NULL){
        current = current->next;
     }
     current->next = new_node;
  
   
}
void insert_first(Node **head, int value){
    Node *new_node = create_node(value);
    if(new_node == NULL){
        return ;
    }
    new_node->next = *head; // *head: dia chi cua node head trong DSLK
    *head = new_node;
}
void insert(Node **head, int index, int value){
    if(index<0){
        return;
    }
    if(index == 0){
        insert_first(head, value);
        return;
    }
    Node *current =  *head;

    for(int i = 1;i<index;i++){
        if(current==NULL){
            return;
        }
        current = current->next;
    }
    if(current == NULL){
        return;
    }
    Node *new_node = create_node(value);
    if(new_node == NULL){
        return;
    }
    new_node->next = current->next;
    current->next = new_node;
}
void delete_node(Node **head, int index){

    if(*head == NULL|| index<0){
        return ;
    }
    if(index == 0){
        Node *temp = *head;
        *head = (*head)->next; 
        free(temp);
        return;
    }
     Node *prev = *head;
    for(int i=1;i<index;i++){
        if(prev==NULL){
            return;
        }
        prev = prev->next;

    }
   
    if(prev == NULL||prev->next == NULL){
        return;
    }
    Node *remove = prev->next;
    prev->next = remove->next;
    free(remove);
}
Node* get_node(Node *head, int index){
    if(head==NULL||index<0){
        return NULL;
    }
    Node *current = head;
    for(int i = 0; i<index&&current!=NULL; i++){
        current = current->next;
    }
    return current;
}
void print_list(Node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    
}
void free_list(Node **head){ // neu dung con tro cap 1 thi sau khi free, head van tro vao phan tu dau tien
    while(*head!=NULL){       // => dung con tro cap 2 de cap nhat lai head = NULL
        Node *remove = *head;
        *head = (*head)->next;
        free(remove);
    }
}
