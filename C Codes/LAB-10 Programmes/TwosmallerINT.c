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
    int n, smaller1, smaller2;
    printf("Enter a number you want smaller value from : ");
    scanf("%d", &n);
    for (i = num-1; i >= 0 ; i--) {
        if ( n > array[i] ) {
            smaller1 = array[i];
            break;
        }
    }
    for (i =num-1; i >= 0; i--) {
    if ( n > array[i] && array[i] < smaller1 ) {
            smaller2 = array[i];
            break;
        }
    }
    printf("Two smaller values than %d are %d and %d\n", n, smaller1, smaller2);

}