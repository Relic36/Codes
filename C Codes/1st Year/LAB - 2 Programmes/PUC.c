#include <stdio.h>
int main(){
    float gas, emission, odometer;
    printf(" 1. Carbon Monoxide\n");
    printf(" 2. Hydrocarbons\n");
    printf(" 3. Nitrogen Oxides\n");
    printf(" 4. Nonmathane Hydrocarbons\n");
    printf("Enter the number corresponding to the gas: ");
    scanf("%f", &gas);
    printf("Emission of your vehicle gram per mile: ");
    scanf("%f", &emission);
    printf("Enter odometer reading: ");
    scanf("%f", &odometer);
    if (odometer <= 50000) {
        if (gas == 1){
            odometer * emission <= odometer * 3.4 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }
        else if (gas == 2){
            odometer * emission <= odometer * 0.31 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }
        else if (gas == 3){
            odometer * emission <= odometer * 0.4 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }
        else if (gas == 4){
            odometer * emission <= odometer * 0.25 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }
    }
    else {
        if (gas == 1){
            odometer * emission <= odometer * 4.2 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }
        else if (gas == 2){
            odometer * emission <= odometer * 0.39 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }
        else if (gas == 3){
            odometer * emission <= odometer * 0.5 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }
        else if (gas == 4){
            odometer * emission <= odometer * 0.31 ? printf("Your vehicle is in the emission standards.\n") : printf("Your vehicle is not in the emission standards.\n");
        }    
    }    
    return 0;
}    