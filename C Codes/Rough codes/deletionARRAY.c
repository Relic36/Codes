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
    int pos;
    printf("Enter the position to delete the element: ");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n){
        printf("Invalid position!\n");
        return 1;
    }
    else{
        for(int i = pos; i < n-1; i++){ 
            arr[i] = arr[i + 1];
        }
    }
    printf("Array after deletion: ");
    for(int i = 0; i < n-1; i++){
        printf("%d ", arr[i]);
    }   
    printf("\n");
}