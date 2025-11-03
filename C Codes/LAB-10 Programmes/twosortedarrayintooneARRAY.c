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
    int numb;
    printf("Enter the number of elements in second array: ");
    scanf("%d", &numb);
    int array2[numb];
    for (i = 0; i < numb; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
    int merged[num + numb];
    for (i = 0; i < num; i++) {
        merged[i] = array[i];
    }
    for (i = 0; i < numb; i++) {
        merged[num + i] = array2[i];
    }
    for(i = 0; i < num + numb -1; i++) {
        for(int j = 0; j < num + numb-i-1; j++) {
            int temp;
            if(merged[j] > merged[j+1]) {
                // Swap if they are in wrong order
                temp = merged[j];
                merged[j] = merged[j+1];
                merged[j+1] = temp;
            }
        }
    }
    
    printf("Merged array: ");
    for (i = 0; i < num + numb; i++) {
        printf("%d ", merged[i]);
    }
}