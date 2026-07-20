#include <stdio.h>
int main() {
    int n100, n50, n20, n10, n5, n2, n1;
    int amount;
    printf("Enter the total amount: ");
    scanf("%d", &amount);
    switch(amount >= 100 ? 1 : (amount >= 50 ? 2 : (amount >= 20 ? 3 : (amount >= 10 ? 4 : (amount >= 5 ? 5 : (amount >= 2 ? 6 : 7)))))){
        case 1:
        n100 = amount / 100;
        amount = amount % 100;
        printf("Number of 100s: %d\n", n100);
        
        case 2:
        n50 = amount / 50;
        amount = amount % 50;
        printf("Number of 50s: %d\n", n50);
        
        case 3:
        n20 = amount / 20;
        amount = amount % 20;
        printf("Number of 20s: %d\n", n20);
        
        case 4:
        n10 = amount / 10;
        amount = amount % 10;
        printf("Number of 10s: %d\n", n10);
        
        case 5:
        n5 = amount / 5;
        amount = amount % 5;
        printf("Number of 5s: %d\n", n5);
        
        case 6:
        n2 = amount / 2;
        amount = amount % 2;
        printf("Number of 2s: %d\n", n2);
        
        case 7:
        n1 = amount / 1;
        amount = amount % 1;
        printf("Number of 1s: %d\n", n1);
        break;
        default:
        printf("Invalid input");
    }
    
    return 0;
}