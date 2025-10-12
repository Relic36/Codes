#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int array[num];
    for(i = 0; i < num; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int duplicate = 0;
    for(i = 0; i < num; i++){
        for(int j = i + 1 ; j < num; j++){
            if(array[i] == array[j]){
                 duplicate++;
                    break;
            } 
        }
    }
    printf("Number of duplicate elements: %d\n", duplicate);
    return 0;               

}