#include <stdio.h>
int main(){
    int var = 42;
    int *ptr = &var;

    printf("Address of var: %p\n", &var);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Value of var using pointer: %d\n", *ptr);

    return 0;
}