#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if ( a > b ) {
        printf("The largest number is: %d\n", a);
    }
    else {
        printf("The largest number is: %d\n", b);
    }
}