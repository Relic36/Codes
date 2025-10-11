#include <stdio.h>
int main(){ 
    int i, j , rows, p=0;
    printf("Enter number of rows: ");
    scanf("%d",&rows);  
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            
           p++;
              printf("%d ", p );
        }
        printf("\n");
    }
}