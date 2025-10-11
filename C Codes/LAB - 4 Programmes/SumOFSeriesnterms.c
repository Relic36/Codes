#include <stdio.h>
int main(){
    int a = 1, n, sum = 0, d = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum = sum + a;
        a = a + d;
        d++;
    }
    printf("The sum of series is: %d\n", sum);
}