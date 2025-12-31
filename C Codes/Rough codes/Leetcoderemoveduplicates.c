#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int write = 0; // index of last unique element
    for (int read = 1; read < numsSize; ++read) {
        if (nums[read] != nums[write]) {
            ++write;
            nums[write] = nums[read];
        }
    }
    return write + 1; // number of unique elements
}

void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(",");
    }
    printf("]\n");
}

int main(void) {
    int a1[] = {1,1,2};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int k1 = removeDuplicates(a1, n1);
    printf("Input: [1,1,2]\nUnique count k = %d\nFirst k elements: ", k1);
    printArray(a1, k1);
    printf("Expected k = 2, first k = [1,2]\n\n");

    int a2[] = {0,0,1,1,1,2,2,3,3,4};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    int k2 = removeDuplicates(a2, n2);
    printf("Input: [0,0,1,1,1,2,2,3,3,4]\nUnique count k = %d\nFirst k elements: ", k2);
    printArray(a2, k2);
    printf("Expected k = 5, first k = [0,1,2,3,4]\n\n");

    int a3[] = {1,2,3,4,5};
    int n3 = sizeof(a3) / sizeof(a3[0]);
    int k3 = removeDuplicates(a3, n3);
    printf("Input: [1,2,3,4,5]\nUnique count k = %d\nFirst k elements: ", k3);
    printArray(a3, k3);
    printf("Expected k = 5, first k = [1,2,3,4,5]\n");

    return 0;
}
