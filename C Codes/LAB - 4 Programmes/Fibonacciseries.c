#include <stdio.h>
int main() {
    int n ;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    int a = 0, a2 = 1, n1;
    printf("Fibonacci series: ");
    printf("%d %d ", a, a2);
    for (int i = 3; i <= n; i++) {
        n1 = a + a2;
        printf("%d ", n1);
        a = a2;
        a2 = n1;
    }
    printf("\n");
   
}