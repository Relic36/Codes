#include <stdio.h>

int ksum(int x, int y) { 
    return x + y;
}

int main() {
    int a , b , add;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
   
    add = ksum(a, b); 
    printf("Sum is: %d\n", add);
    return 0;
    
}

