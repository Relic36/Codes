#include <stdio.h>

int fibonaci(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonaci(n-1) + fibonaci(n-2);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonaci upto is: %d\n", fibonaci(num));
    for (int i=0; i<num; i++){
        printf("%d ", fibonaci(i));
    }
    return 0;
}