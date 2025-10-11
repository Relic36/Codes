#include <stdio.h>
int main(){
    int n, sum = 0, r, res;
    for (int i = 100; i<=999; i++){
        n = i;
        sum = 0;
        while( n != 0 ){
            r = n % 10;
            res = r * r * r;
            sum = sum + res;
            n = n / 10;
        }
        if ( i == sum )
            printf("%d is an Armstrong number\n", i);
        
    }
}