#include <stdio.h>
int main() {
    int num;
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter value for element %d: ", i + 1 );
        scanf("%d", &arr[i]);
    }
    printf("The stored values in the array are:\n");
    for (int i = 0; i < num; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    return 0;
}    