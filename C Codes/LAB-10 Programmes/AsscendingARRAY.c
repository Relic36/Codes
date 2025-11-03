#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare array with user specified size
    int arr[n];
    
    // Input array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Bubble sort algorithm
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            // Compare adjacent elements
            if(arr[j] > arr[j+1]) {
                // Swap if they are in wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print sorted array
    printf("\nArray sorted in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}