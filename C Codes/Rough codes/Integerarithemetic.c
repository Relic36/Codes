#include <stdio.h>
int main(){
    float a,b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Sum: %f\n", a + b);
    printf("Difference: %f\n", a - b);
    printf("Product: %f\n", a * b); 
    printf("Quotient: %f\n", a / b);
    printf("Remainder: %f\n", (int)a %(int)b);
}