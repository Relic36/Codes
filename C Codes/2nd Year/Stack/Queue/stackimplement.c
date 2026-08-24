/*Stack Implementation using Array
Write a menu-driven program to implement a stack using an array. Implement:

* push()
* pop()
* isEmpty()
* isFull()
* display()
*/
#include <stdio.h>
void push(int arr[], int *top, int size, int value){
    if(*top == size - 1){
        printf("Stack is full\n");
    }
    else{
        (*top)++;
        arr[*top] = value;
        printf("%d pushed to stack\n", value);
    }
}

int pop(int arr[], int *top){
    int x;
    if(*top == -1){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        x = arr[*top];
        (*top)--;
    }
    return x;
}

void isEmpty(int top){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack is not empty\n");
    }
}

void isFull(int top, int size){
    if(top == size - 1){
        printf("Stack is full\n");
    }
    else{
        printf("Stack is not full\n");
    }
}

void display(int arr[], int top){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are: ");
        for(int i = top; i >= 0; i--){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main(){
    int arr[5], top = -1;
    push(arr, &top, 5, 10);
    push(arr, &top, 5, 20);
    push(arr, &top, 5, 30);
    push(arr, &top, 5, 40);
    push(arr, &top, 5, 50);
    isFull(top, 5);
    display(arr, top);
    printf("%d popped from stack\n", pop(arr, &top));
    display(arr, top);

}