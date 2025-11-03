#include <stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; 
    printf("Array elements and adresses using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++){
        printf("Element %d: %d\n", i, *(ptr + i));
        printf("Address %d: %p\n", i, (ptr + i));
    }
}