#include <stdio.h>

int sumofnum(int n){
    if(n==0)
        return 0;
    else
    return n + sumofnum(n-1);
}

int main(){
    int num;
    printf("Enter number upto summision is required: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers is: %d\n", num, sumofnum(num));
    return 0;
}