#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Function to find the union of two arrays
int* findUnion(int arr1[], int size1, int arr2[], int size2, int* unionSize) {
    // Allocate memory for the union array (maximum possible size is size1 + size2)
    int* unionArr = (int*)malloc(sizeof(int) * (size1 + size2));
    if (unionArr == NULL) {
        printf("Memory allocation failed.\n");
        *unionSize = 0;
        return NULL;
    }

    int k = 0; // Index for the union array

    // Add elements from arr1 to unionArr, checking for duplicates
    for (int i = 0; i < size1; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (unionArr[j] == arr1[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k++] = arr1[i];
        }
    }

    // Add elements from arr2 to unionArr, checking for duplicates
    for (int i = 0; i < size2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (unionArr[j] == arr2[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k++] = arr2[i];
        }
    }

    *unionSize = k; // Set the actual size of the union array
    return unionArr;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 6, 7, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionSize;
    int* unionArr = findUnion(arr1, size1, arr2, size2, &unionSize);

    if (unionArr != NULL) {
        printf("Union of the two arrays: ");
        for (int i = 0; i < unionSize; i++) {
            printf("%d ", unionArr[i]);
        }
        printf("\n");

        free(unionArr); // Free the dynamically allocated memory
    }

    return 0;
}