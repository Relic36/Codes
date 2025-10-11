#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
      int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int position, new_value;
    printf("Enter the position of the element you want to replace (1 to %d): ", n);
    scanf("%d", &position);
    printf("Enter the new value: ");
    scanf("%d", &new_value);
    arr[position - 1] = new_value;
    printf("The updated array is:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    return 0;
}
