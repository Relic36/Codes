#include <stdio.h>
int main(){
    int num, sum = 0;
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter value for element %d: ", i + 1 );
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the elements in the array is: %d\n", sum);
    return 0;
}