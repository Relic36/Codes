#include <stdio.h>
int factorial(int n){
    for (int i = n-1; i > 1; i--){
        n = n * i;
    }
}
int main(){
    int num, fact;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial of %d is %d\n", num, fact);
    return 0;
}