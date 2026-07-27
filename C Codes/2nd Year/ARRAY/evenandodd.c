#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            printf("Even no. %d ", arr[i]);
            printf("\n");
        }
        else{
            printf("Odd no. %d ", arr[i]);
            printf("\n");
        }
    }
    return 0;
}