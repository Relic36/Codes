#include <stdio.h>
int primefactors(int n, int i){
    if (n<=1)
        return 0;
    if (n%i==0){
        printf("%d, ",i);
        return primefactors(n/i, i);
    }
    return primefactors(n, i+1);
}
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Prime factors of %d are: ", n);
    primefactors(n, 2);
    printf("\n");
    return 0;
}