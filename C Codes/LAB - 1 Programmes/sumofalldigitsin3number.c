#include <stdio.h>
int main(){
    int a;
    printf("Enter an integer of three digit: ");
    scanf("%d", &a);
    int first_digit = a / 100;
    int second_digit = (a / 10) % 10;
    int third_digit = a % 10;
    int sum = first_digit + second_digit + third_digit;
    printf("Sum of all digits: %d\n", sum);
}