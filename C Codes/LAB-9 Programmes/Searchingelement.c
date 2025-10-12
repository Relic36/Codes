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
    int target,position;
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    int found = 0;
    for (i = 0; i < num; i++) {
        if (array[i] == target) {
            found = 1;
            position = i + 1;
            break;
        }
    }
    if (found) {
        printf("Element %d found in the array at %d position.\n", target, position);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
}