#include<stdio.h>
void print_matrix(int array[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int array[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    print_matrix(array, 3, 4);
}