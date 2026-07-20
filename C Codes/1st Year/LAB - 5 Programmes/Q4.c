#include <stdio.h>
int main() {
    int num, n, sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (int i = 0; num != 0; i++) {
        n = num % 10; 
        printf("%d\t", n);
        sum = sum + n;
        num = num / 10;
    }
    printf("\nSum of digits = %d", sum);
    if (sum % 9 == 0)
        printf("\nThe number is divisible by 9\n");
    else
        printf("\nThe number is not divisible by 9\n");
}