#include <stdio.h>

void printNumbers(int n) {
    // Base case
    if (n == 15) {
        return;
    }
    printf("%d ", n);
    // Recursive call
    printNumbers(n + 1);
}

int main() {
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printNumbers(x); 
    printf("\n");
    return 0;
}