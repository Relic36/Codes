#include <stdio.h>
int main() {
    int i, n ;
    int largest, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
        int arr[n]; 

    printf("Enter integers: ");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}