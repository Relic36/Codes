#include <stdio.h>
int main(){
    int x = 1, n;
    printf("give number where you want to start: ");
    scanf("%d", &n);
    while (x <= n) {
        printf("%d ", n);
        n--;
    }
}