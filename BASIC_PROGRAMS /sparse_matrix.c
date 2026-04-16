#include <stdio.h>

int main() {
    int matrix[10][10], row, col, i, j;
    int count = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter matrix elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count non-zero elements
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(matrix[i][j] != 0)
                count++;
        }
    }

    printf("\nSparse Matrix Representation (row, col, value):\n");

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(matrix[i][j] != 0) {
                printf("%d %d %d\n", i, j, matrix[i][j]);
            }
        }
    }

    printf("Total non-zero elements: %d\n", count);

    return 0;
}
