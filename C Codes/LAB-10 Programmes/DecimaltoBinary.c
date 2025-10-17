//Convert a decimal number to binary number using array

#include <stdio.h>
int main(){
    int num, i;
    printf("Enter elements you want in array: ");
    scanf("%d", &num);
    int array[num];
    for (i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int j, binary[32], index = 0;
    for (i = 0; i < num; i++) {
        int n = array[i];
        index = 0;
        while (n > 0) {
            binary[index] = n % 2;
            n = n / 2;
            index++;
        }
        printf("Binary representation of %d: ", array[i]);
        for (j = index - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }
}