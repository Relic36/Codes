#include <stdio.h>

int main() {
     float principal, rate, time, simple_interest,amount;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest = %f\n", simple_interest);
    amount = principal + simple_interest;
    printf("Total Amount = %f\n", amount);
}