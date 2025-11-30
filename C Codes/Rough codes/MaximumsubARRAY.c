#include <stdio.h>
int main (){
    int num, j, sum1=0, sum2=0;
    printf("Enter no. of elements: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter elements:\n");
    for (int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i=0; i<num; i++){
        if(arr[i]>max){
            max = arr[i];
            j = i;
        }
    }
    sum1 = max;
    for (int i=j+1; i<num; i++){
         if (arr[i]>0){
            sum1 += arr[i];
         }
         else{
            break;
         }
    }
    sum2 = max;
    for (int i=j-1; i>=0; i--){
         if (arr[i]>0){
            sum2 += arr[i];
         }
         else{
            break;
         }
    }
    if (sum1>sum2){
        printf("Maximum subarray sum is: %d\n",sum1);
        printf("%d ",arr[j]);
        for (int i=j+1; i<num; i++){
            if (arr[i]>0){
                printf("%d ",arr[i]);
            }
            else{
                break;
            }
        }
    }
    else{
        printf("Maximum subarray sum is: %d\n",sum2);
        printf("%d ",arr[j]);
        for (int i=j-1; i>=0; i--){
            if (arr[i]>0){
                printf("%d ",arr[i]);
            }
            else{
                break;
            }
        }
    }
}