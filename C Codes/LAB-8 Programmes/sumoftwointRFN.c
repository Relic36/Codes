#include <stdio.h>
int sum(int a, int b){
    if (b==0)
        return a;
    else{
        return sum(a+1, b-1);
    }
}
int main(){
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d",&a,&b);
    int result = sum(a, b);
    printf("Sum: %d\n", result);
    return 0;
}