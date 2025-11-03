#include <stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr1 = arr; 
    int *ptr2 = &arr[3];
    printf("Value at ptr1: %d\n", *ptr1);
    printf("Value at ptr2: %d\n", *ptr2);
    printf("Difference between ptr2 and ptr1: %ld\n", ptr2 - ptr1);
    ptr1++;
    printf("Value at ptr1 after increment: %d\n", *ptr1);
    ptr2--;
    printf("Value at ptr2 after decrement: %d\n", *ptr2);
    return 0;
}