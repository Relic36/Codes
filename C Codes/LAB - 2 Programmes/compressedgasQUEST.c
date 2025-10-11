#include <stdio.h>
int main(){
    char Color ;
    printf("Give the color of the cylinder: %c\n", Color);
     scanf(" %c", &Color);
    if (Color == 'O' || Color == 'o') {
        printf("The cylinder is Ammonia.\n");
    } else if (Color == 'G' || Color == 'g') {
        printf("The cylinder is Oxygen.\n");
    } else if (Color == 'B' || Color == 'b') {
        printf("The cylinder is Carbon Monoxide.\n");
    } else if (Color == 'Y' || Color == 'y') {
        printf("The cylinder is Hydrogen.\n");
    }    

     else {
        printf("Context Unknown.\n");
    }
}