#include <stdio.h>
int main() {
    int a;
    printf("Enter a number of six digit: ");
    scanf("%d", &a);
    int first_digit = a / 100000;
    int last_digit = a % 10;
    int sum = first_digit + last_digit;
    printf("Sum of first and last digit: %d\n", sum);
}