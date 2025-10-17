#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int array[num];
    for (i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int j, swap;
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    printf("Array in ascending order: ");
    for (i = 0; i < num; i++) {
        printf("%d ", array[i]);
    }
}