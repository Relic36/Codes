#include <stdio.h>

int main() {
    
    int n1, n2, i, j, k = 0;
    int isPresent;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int union_arr[n1 + n2];
    for(i = 0; i < n1; i++) {
        union_arr[k] = arr1[i];
        k++;
    }

    for(i = 0; i < n2; i++) {
        isPresent = 0;
        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                isPresent = 1;
                break;
            }
        }
        if(!isPresent) {
            union_arr[k] = arr2[i];
            k++;
        }
    }

    printf("\nUnion of the two arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");

    int intersection_arr[n1 < n2 ? n1 : n2];
    k = 0;
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                intersection_arr[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    printf("\nIntersection of the two arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", intersection_arr[i]);
    }

    return 0;
}