#include <stdio.h>
int main(){
    long int n , i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        n = n / 10;
        i++;
    } while (n != 0);
    printf("Number of digits: %d", i);
}