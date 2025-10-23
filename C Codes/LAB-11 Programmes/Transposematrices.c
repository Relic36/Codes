#include <stdio.h>
int main(){
    int row1, col1, i, j;
    printf("Enter rows of matrix: ");
    scanf("%d", &row1);
    printf("Enter columns of matrix: ");
    scanf("%d", &col1);
    int arr1[row1][col1];
    for (i = 0; i < row1; i++){
        for (j = 0; j < col1; j++){
           
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < col1; i++){
        for (j = 0; j < row1; j++){
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }

}