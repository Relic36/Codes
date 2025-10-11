#include <stdio.h>
int decreasing(int n){
    if (n==0)
        return 0;
    else{
        printf("%d\n",n);
        return decreasing(n-1);
    }
}
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}