#include <stdio.h>
int main(){
    float n;
    printf("Enter the magnitude of the earthquake: ");
    scanf("%f", &n);    
    if (n < 5.0) {
        printf("Little damage or no damage\n");
    }
    else if (n >= 5.0 && n < 5.5) {
        printf("Some damage\n");
    }
    else if (n >= 5.5 && n < 6.5) {  
        printf("Serious damage:wall may crack\n");  
    }
    else if (n >= 6.5 && n < 7.5) {
        printf("Disaster: House and building may collapse.\n");
    }
    else {
        printf("Catastrophe: Most buildings destroyed.\n");
    }
}
