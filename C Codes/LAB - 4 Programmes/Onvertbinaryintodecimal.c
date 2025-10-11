#include <stdio.h>
int main(){
    int binary, dec = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    for (binary ; binary !=0 ; base = base * 2){
        rem = binary % 10;
        dec = dec + rem * base;
        binary = binary / 10;
        
    }
    printf("The decimal equivalent is: %d\n", dec);
}