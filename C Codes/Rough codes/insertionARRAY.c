#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int pos, value;
    printf("Enter the position to insert the new element: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    if(pos < 0 || pos > n){
        printf("Invalid position!\n");
        return 1;
    }
    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    printf("Array after insertion: ");
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}