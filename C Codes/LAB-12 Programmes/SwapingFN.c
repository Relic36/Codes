#include <stdio.h>
int c;
void kswap(int *a, int *b){
    c = *a;
    *a = *b;
    *b = c;
    return;
}
int main(){
    int x, y;
    printf("Enter first numbers: ");
    scanf("%d", &x);
    printf("Enter second numbers: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    kswap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}