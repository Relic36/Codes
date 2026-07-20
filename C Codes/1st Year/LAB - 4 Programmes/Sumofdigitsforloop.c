#include <stdio.h>
int main(){
    int num, rem, sum = 0;
    printf ("Enter a number: ");
    scanf ("%d", &num);
    do{ 
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
     }
      while(num != 0);
    
    printf ("The sum of digits is: %d\n", sum);
}