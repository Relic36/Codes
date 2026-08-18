#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
 };
struct Node* head = NULL;

void createnode(void){
      struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        } else {
            struct Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
}

int main(){
    int n, i;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        createnode();
    }
    struct Node* temp = head;
    printf("The linked list is: ");
      while(temp != NULL){
         printf("%d ", temp->data);
         temp = temp->next;
        }
     printf("NULL\n");
     return 0;
   }



