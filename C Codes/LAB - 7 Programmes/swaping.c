#include <stdio.h>
void kswap(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("After swapping inside function: x = %d, y = %d\n", a, b);
    return;
}
int main(){
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    kswap(x, y);
    return 0;
}