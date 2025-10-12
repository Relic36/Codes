#include <stdio.h>
int main(){
    int num, prod = 1;
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter value for element %d: ", i + 1 );
        scanf("%d", &arr[i]);
        prod *= arr[i];
    }
    printf("The multiplication of the elements in the array is: %d\n", prod);
    return 0;
}