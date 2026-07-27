#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}