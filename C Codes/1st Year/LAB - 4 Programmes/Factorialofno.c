#include <stdio.h>
int main(){
    int n , fac = 1;
    printf("Enter the number to find factorial: ");
    scanf("%d",&n);
    for(int i = n ; i >= 1; i--){
       fac = fac * i;
    }
    printf("Factorial of %d is %d",n,fac);
    return 0;
}