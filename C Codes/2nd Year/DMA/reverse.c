#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    int left = 0, right = n - 1;
    while(left < right) {
        int temp = ptr[left];
        ptr[left] = ptr[right];
        ptr[right] = temp;
        left++;
        right--;
    }
    printf("Reversed array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}