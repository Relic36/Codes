#include <stdio.h>
int main() {
    int n = 5 , i, num, prod;
        for(i = 1; i <= 10; i++){
            for(num = 1; num <= n; num++) {
              prod = num * i;
                printf("%d\t", prod);
            }
            printf("\n");
       }    
}