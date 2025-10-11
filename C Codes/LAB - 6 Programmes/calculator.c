#include <stdio.h>
int main(){
    float num1, num2;
    char op;
    printf("Enter first number: ");
    scanf("%f", &num1); 
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch (op){
        case '+':
        printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, num1 + num2);
        break;
        case '-':
        printf("The difference of %.2f to %.2f is %.2f\n", num1, num2, num1 - num2);
        break;
        case '*':
        printf("The product of %.2f and %.2f is %.2f\n", num1, num2, num1 * num2);
        break;
        case '/':
        if(num2 != 0)
            printf("The division of %.2f to %.2f is %.2f\n", num1, num2, num1 / num2);
        else
            printf("Error! Division by zero.\n");
        break;
        default:
        printf("Error! Operator is not correct.\n");

    }
    return 0;
}