#include<stdio.h>
#include <stdlib.h>

void findMaximalSquare(int** matrix, int rows, int cols, int *maxEdge) {
    // add your code /
}
 
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int** matrix = (int**)malloc(row * sizeof(int*));
    int i, j, tmp;
    for (i = 0; i < row; i++) {
        matrix[i] = (int*)malloc(col * sizeof(int));
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &tmp);
            matrix[i][j] = tmp;
        }
    }
 
    int maxEdge = 0;
    findMaximalSquare(matrix, row - 1, col - 1, &maxEdge);
 
    printf("%d", maxEdge * maxEdge);
    for (i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);
 
}