#include <stdio.h>
int main(){
    int num, n, sum = 0, prod = 1, digit, i;
    printf("Enter a positive six digit number: ");
    scanf("%d", &num);
    for (i = 0; num != 0; i++){
        n = num % 10; 
        if (n % 2 == 0){
            sum = sum + n;
        }
        else{
            prod = prod * n;
        }
        num = num / 10;
    }
    printf("Sum of even digits = %d\n", sum);
    printf("Product of odd digits = %d\n", prod);
}
