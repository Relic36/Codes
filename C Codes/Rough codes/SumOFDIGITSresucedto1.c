#include <stdio.h>
int main(){
int n, dig, sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
   do {
    for (sum = 0; n != 0; n = n / 10){
        dig = n % 10;
         sum = sum + dig;
        }
        printf("Sum of digits: %d\n", sum);
        n = sum;
    } while(n/10 != 0);
    printf("Final single digit: %d\n", n);
}