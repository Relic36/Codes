#include <stdio.h>
int main (){
    long int a = 1, i; 
    printf("Enter a number to find its factorial: ");
    scanf("%d", &i);
    printf("The factorial of number is: " );
    while( a <= i ){
        if( i % a == 0){
            printf("%d  ", a);
        } 
        a++;

    }
}