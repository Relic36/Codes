#include <stdio.h>

int duplicate(int num, int array[]);

int main() {
    int i, n;
    int largest, second_largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter integers: ");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    largest = second_largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }

    }
    if (second_largest == largest)
        printf("There is no second largest element.\n");
    else{
        printf("The second largest element is: %d\n", second_largest);
}
    duplicate(n, arr);

    return 0;
}




















int num, i;
int duplicate(int num, int array[]){
    
    int duplicate = 0, dup=0;
    for(i = 0; i < num; i++){
        for(int j = i + 1 ; j < num; j++){
            if(array[i] == array[j]){
                 duplicate = array[i];
                 printf("duplicate element: %d\n", duplicate);
                 dup++;
                    break;
            } 
        }
    }
    printf("Number of duplicate elements: %d\n", dup);
    return 0;               

}