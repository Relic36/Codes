#include <stdio.h>
int kprime(int n){
    int i, flag=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
        return flag;
}
        int main(){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if(kprime(num)==0)
            printf("%d is a prime number\n", num);
        else
            printf("%d is not a prime number\n", num);

}