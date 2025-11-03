#include <stdio.h>
int main(){
    int var = 10;
    int *ptr = &var;
    printf("Value of var using pointer dereferencing: %d\n", *ptr);
    return 0;
}