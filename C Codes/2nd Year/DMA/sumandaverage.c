#include <stdio.h>  
#include <stdlib.h>

int main() {  
    int n;  
    float *ptr, sum = 0.0, average;  

    printf("Enter the number of elements: ");  
    scanf("%d", &n);  

    ptr = (float*)malloc(n * sizeof(float));  

    for(int i = 0; i < n; ++i) {  
        printf("Enter element %d: ", i + 1);  
        scanf("%f", &ptr[i]);  
        sum = sum + ptr[i];  
    }  

    average = sum / n;  
    printf("Sum = %.2f\n", sum);  
    printf("Average = %.2f\n", average);  

    free(ptr);  
    return 0;  
}