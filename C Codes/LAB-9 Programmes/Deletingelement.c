#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++) {
        printf("Enter value for element %d: ", i + 1 );
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Enter the position of the element you want to delete (1 to %d): ", num);
    scanf("%d", &pos);
    if(pos < 1 || pos > num){
        printf("Invalid position!\n");
    } else {
        for(i = pos - 1; i < num - 1; i++){
            arr[i] = arr[i + 1];
        }
        num--;
        printf("Array after deletion:\n");
        for(i = 0; i < num; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}