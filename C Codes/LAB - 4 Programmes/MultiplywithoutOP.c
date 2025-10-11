#include <stdio.h>
int main(){
    int a1, a2, res = 0;
    printf("Enter two numbers to be multiplied: ");
    scanf("%d %d", &a1, &a2);  
    for (int i = 1; i <= a2; i++){
        res = res + a1;
    }
    printf("The product is: %d\n", res);
}