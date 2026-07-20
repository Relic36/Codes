#include <stdio.h>
int main(){
    int a;
    printf("Enter the value in meters: ");
    scanf("%d", &a);
    int b = a /1000.0;
    int c = a % 1000;
    printf("Value in kilometers and meters: %.2d km", b );
    printf(" and %d meters\n", c);
}