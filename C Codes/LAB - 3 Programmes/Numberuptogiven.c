#include <stdio.h>
int main() {
    int x = 1, n;
    printf("Enter number you want to print upto: ");
    scanf("%d", &n);
    while(x <= n) {
        printf("%d ", x);
        x++;
    }
}