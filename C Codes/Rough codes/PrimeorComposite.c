#include <stdio.h>
int main(){
    int n = 10 , num, Flag = 0;

    for ( num = 2; num <= n; num++){
        Flag = 1;
            for (int i = 2; i <= num/2; i++){
                if ( num % i == 0 ){
                    Flag = 0;
                    break;
                }
               
            }
            if ( Flag == 1)
                printf("%d is a prime number\n", num);
            else
                printf("%d is a composite number\n", num);
        }
    }