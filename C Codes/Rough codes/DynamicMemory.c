#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, m;
    printf("Enter number of integer elements: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n*sizeof(int));
    if (ptr == NULL){
        printf("Memory not allocated.\n");
        return 1;
    }
    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The elements are:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\nEnter number of float elements: ");
    scanf("%d", &m);
    float *rtr = (float *)calloc(m, sizeof(float));
    if (rtr == NULL){
        printf("Memory not allocated.\n");
        return 1;
    }
    for (int i = 0; i < m; i++){
        printf("Enter float element %d: ", i + 1);
        scanf("%f", &rtr[i]);
    }
    for (int i = 0; i < m; i++){
        printf("%.2f ", *(rtr + i));
    }
    
    int *nptr = (int *)realloc(ptr, 2*n*sizeof(int));
    if (nptr == NULL){
        printf("Memory not reallocated.\n");
        return 1;
    }
    printf("\n");
    printf("Enter %d new elements to reallocated array:\n", n);
        for (int i = n; i < 2*n; i++){
            printf ("Enter new element %d: ", i + 1);
            scanf ("%d", &nptr[i]);

        }
        printf ("The reallocated array elements are:\n");
        for(int i = 0; i < 2*n; i++){
            printf ("%d ", nptr[i]);
        }
    
    free(ptr);
    free(rtr);
    return 0;
}