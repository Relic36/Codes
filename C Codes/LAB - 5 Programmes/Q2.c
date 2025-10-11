#include <stdio.h>
int main(){
    int num, n,  i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Enter digit to be searched: ");
    scanf("%d", &n);
    int flag = 0;
    for (i = 0; num != 0; i++){
        if (num % 10 == n){
            flag = 1;
            break;
        }
        num = num / 10;
    }
        if (flag == 1)  
            printf("Digit %d is present in the number\n", n);
        else    
            printf("Digit %d is not present in the number\n", n);
    int j = 0;
    if (flag == 1)
        while(num != 0){
            num % 10;
            if (num % 10 == n){
                j++;
            }
            num = num / 10;
        }
    printf("Digit %d is present %d times in the number\n", n, j);
}


