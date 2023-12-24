#include<stdio.h>

int count_way(int arr[][12],int row, int col,int targetc){
    if(row < 0 || col >= targetc || arr[row][col] == 0){
        return 0;
    }

    if(row == 0 && col == targetc-1){
        return 1;
    }

    int up = count_way(arr, row-1, col, targetc);
    int right = count_way(arr, row, col+1, targetc);

    return up + right;

}

int main(){
    int row, col;
    int arr[12][12];
    scanf("%d%d", &row, &col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            arr[i][j] = 1;
        }
    }
    int path = count_way(arr, row-1, 0, col);
    printf("%d", path);
}