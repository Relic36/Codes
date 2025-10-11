#include <stdio.h>
int main (){
    int x,y, result=0;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    int count =x;
    for(result = 0; count >=y; result++){
       count = count - y;
        }
        printf("The result is %d\n", result);
    }
