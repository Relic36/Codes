#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, root1, root2, realPart, imaginaryPart;
    char discriminant;
    printf("For quadratic equation enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    switch (discriminant > 0 ? 1 : (discriminant == 0 ? 2:3) ){
        case 1:
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
        break;
        case 2:
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
        break;
        case 3:
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi\nRoot2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        break;
        default:
        printf("Error! Invalid input.");
        }
    return 0;
}