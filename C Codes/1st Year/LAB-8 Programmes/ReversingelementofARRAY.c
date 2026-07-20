//Reverse the elements of an array

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int temp; 

    printf("Original array: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int start = 0, end = num - 1; start < end; start++, end--) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}