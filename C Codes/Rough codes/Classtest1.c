#include <stdio.h>
int main (){
    printf("Enter a 4 digit number: ");
    int x;
    scanf("%d", &x);
    int a, b, c;
    a = x / 1000;
    b = x % 10;
    c = a * b;
printf("The product of the first and last digits is: %d\n", c);
    int d, e, f, g, h;
    d = x / 100;
    e = d % 10;     
    f = x % 100; 
    g = f / 10;
    h = e + g;
    printf("sum of second and third digits is: %d\n", h);
    return 0;
}