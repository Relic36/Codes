#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
void insert_new_node(struct node* head){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    } else {
        struct node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
int main(){
   struct node* first,* second, * third;
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    insert_new_node(first);
    struct node* temp = first;
    printf("The linked list is: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}
