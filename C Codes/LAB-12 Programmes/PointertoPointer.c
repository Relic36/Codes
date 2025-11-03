#include <stdio.h>
int main(){
    int var = 10;
    int *ptr = &var;
    int **ptr2ptr = &ptr;
    printf("Address of var: %p\n", &var);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Address of ptr: %p\n", &ptr);
    printf("Address stored in ptr2ptr: %p\n", ptr2ptr);
    printf("Value of var using pointer dereferencing: %d\n", *ptr);
    printf("Value of var using pointer to pointer dereferencing: %d\n", **ptr2ptr);
}