#include <stdio.h>

struct rectangle {
    float length;
    float width;
};

int main(){
    struct rectangle r1;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &r1.length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &r1.width);

    float area = r1.length * r1.width;
    printf("Area of the rectangle: %.2f\n", area);
    float perimeter = 2 * (r1.length + r1.width);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}