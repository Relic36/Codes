#include <stdio.h>
int main() {
    float principal, rate, time, compound_interest, amount;
    int n;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    printf("Enter number of times interest applied per time period: ");
    scanf("%d", &n);
    amount = principal * pow((1 + rate / (n * 100)), n * time);
    compound_interest = amount - principal;
    printf("Compound Interest: %f\n", compound_interest);
    printf("Total Amount: %f\n", amount);
}