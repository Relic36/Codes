#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Start from the last digit and add 1
    int carry = 1;
    for (int i = digitsSize - 1; i >= 0 && carry; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }
    
    // If carry is still 1, we need an extra digit at the front
    if (carry) {
        int *res = malloc((digitsSize + 1) * sizeof(int));
        res[0] = 1;
        for (int i = 0; i < digitsSize; i++) {
            res[i + 1] = digits[i];
        }
        *returnSize = digitsSize + 1;
        return res;
    }
    
    *returnSize = digitsSize;
    return digits;
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
    // Test case 1: [1,2,3] -> [1,2,4]
    int test1[] = {1, 2, 3};
    int size1 = sizeof(test1) / sizeof(test1[0]);
    int returnSize1;
    int *result1 = plusOne(test1, size1, &returnSize1);
    printf("Input: [1,2,3]\nOutput: ");
    printArray(result1, returnSize1);
    printf("Expected: [1,2,4]\n\n");
    if (returnSize1 > size1) free(result1);
    
    // Test case 2: [9,9,9] -> [1,0,0,0]
    int test2[] = {9, 9, 9};
    int size2 = sizeof(test2) / sizeof(test2[0]);
    int returnSize2;
    int *result2 = plusOne(test2, size2, &returnSize2);
    printf("Input: [9,9,9]\nOutput: ");
    printArray(result2, returnSize2);
    printf("Expected: [1,0,0,0]\n\n");
    if (returnSize2 > size2) free(result2);
    
    // Test case 3: [4,3,2,1] -> [4,3,2,2]
    int test3[] = {4, 3, 2, 1};
    int size3 = sizeof(test3) / sizeof(test3[0]);
    int returnSize3;
    int *result3 = plusOne(test3, size3, &returnSize3);
    printf("Input: [4,3,2,1]\nOutput: ");
    printArray(result3, returnSize3);
    printf("Expected: [4,3,2,2]\n\n");
    if (returnSize3 > size3) free(result3);
    
    return 0;
}
