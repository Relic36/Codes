#include <stdio.h>
int fibnaci(int n){
    int a1=0, a2=1, sum;
    if(n==0){
        return 0;}
    else if(n==1){
        return 1;
    }
    else{
        for(int i=2; i<=n; i++){
            sum = a1 + a2;
            a1 = a2;
            a2 = sum;
            }
        return sum;
        }
}
    int main(){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Fibonaci upto is: %d\n", fibnaci(num));
        for (int i=0; i<num; i++){
            printf("%d ", fibnaci(i));
        }
        return 0;
    }

