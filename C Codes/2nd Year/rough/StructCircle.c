#include <stdio.h>

struct circle{
    float radius;
};

void circumference(struct circle c){
    float circumference = 2 * 3.14 * c.radius;
    printf("Circumference: %.2f\n", circumference);
}



int main() {
    struct circle c1;
    printf("Enter the radius of the circle: ");
    scanf("%f", &c1.radius);
    
    circumference(c1);
    
    return 0;
}