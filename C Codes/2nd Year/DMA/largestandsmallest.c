#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int largest = ptr[0];
    int smallest = ptr[0];
    for (int i = 1; i < n; i++){
        if (ptr[i] > largest){
            largest = ptr[i];
        }
        if (ptr[i] < smallest){
            smallest = ptr[i];
        }
    }
    printf("Largest : %d\n", largest);
    printf("Smallest : %d\n", smallest);
    free(ptr);
    return 0;
}
