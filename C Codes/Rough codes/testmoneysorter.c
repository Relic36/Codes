#include <stdio.h>
int main() {
    int amount, n100, n50, n20, n10, n5, n2, n1;
    printf("Enter the total amount: ");
    scanf("%d", &amount);

    n100 = amount / 100;
    amount = amount % 100;

    n50 = amount / 50;
    amount = amount % 50;

    n20 = amount / 20;
    amount = amount % 20;

    n10 = amount / 10;
    amount = amount % 10;

    n5 = amount / 5;
    amount = amount % 5;

    n2 = amount / 2;
    amount = amount % 2;

    n1 = amount;

    printf("100 Rupee notes: %d\n", n100);
    printf("50 Rupee notes: %d\n", n50);
    printf("20 Rupee notes: %d\n", n20);
    printf("10 Rupee notes: %d\n", n10);
    printf("5 Rupee notes: %d\n", n5);
    printf("2 Rupee notes: %d\n", n2);
    printf("1 Rupee notes: %d\n", n1);

    return 0;
}