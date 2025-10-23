#include <stdio.h>
int main(){
    int row1, col1, row2, col2, i, j;
    printf("Enter rows of first matrix: ");
    scanf("%d", &row1);
    printf("Enter columns of first matrix: ");
    scanf("%d", &col1);
    printf("Enter rows of second matrix: ");
    scanf("%d", &row2);
    printf("Enter columns of second matrix: ");
    scanf("%d", &col2);
    int arr1[row1][col1], arr2[row2][col2];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row2; i++){
        for (j = 0; j < col2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Sum of the two matrices is:\n");
    for (i = 0; i < row1; i++){
        for (j = 0; j < col1; j++){
            printf("%d", arr1[i][j] + arr2[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}