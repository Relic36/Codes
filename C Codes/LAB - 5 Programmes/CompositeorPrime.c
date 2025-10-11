#include <stdio.h>
int main() {
    int n , num, i, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (num = 2; num <= n; num++) {
        flag = 1; 
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0; 
                break;
            }
        }
        if (flag == 1)
            printf("%d is a prime number\n", num);
        else
            printf("%d is a composite number\n", num);
        
    }
}