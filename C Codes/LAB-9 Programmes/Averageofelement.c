#include <stdio.h>
int main(){
    int num, sum=0;
    float avg;
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter value for element %d: ", i + 1 );
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / num;
    printf("The average of the elements in the array is: %.2f\n", avg);
    return 0;
}