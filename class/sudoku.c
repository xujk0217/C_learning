#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define BLOCK 9
#define SUBBLOCK 3
#define CELLS (BLOCK * BLOCK)

bool placeNumber(int n, int sudoku[BLOCK][BLOCK]){
    if(n == CELLS){
        for(int i = 0; i < BLOCK; i++){
            for(int j = 0; j < BLOCK; j++){
                printf("%d ", sudoku[i][j]);
            }
            printf("\n");
        }
        return true;
    }
    int row = n / 9;
    int col = n % 9;
    if(sudoku[row][col] != 0){
        return placeNumber(n+1, sudoku);
    }

    
    for(int fill = 1; fill <= BLOCK; fill++){
        bool conflict = false;
        //check row, column
        for(int i = 0; i < BLOCK;  i++){
            if(sudoku[row][i] == fill || sudoku[i][col] == fill){
                conflict = true;
            }
        }
        //check subblock
        int block_row = row / SUBBLOCK;
        int block_col = col / SUBBLOCK;
        for(int i = 0; i < SUBBLOCK; i++){
            for(int j = 0; j < SUBBLOCK; j++){
                if(sudoku[SUBBLOCK*block_row+i][SUBBLOCK*block_col+j] == fill){
                    conflict = true;
                }
            }
        }
        //fill the number & recursive call
        if(!conflict){
            sudoku[row][col] = fill;
            if(placeNumber(n+1, sudoku)){
                return true;
            }else{
                sudoku[row][col] = 0;
            }
        }
    }
    return false;
}
int main(){
    int n = 0;
    int sudoku[BLOCK][BLOCK] = 
    {{0, 0, 1, 0, 0, 4, 8, 0, 0},
     {0, 0, 3, 2, 8, 0, 0, 0, 5},
     {0, 2, 0, 0, 0, 6, 0, 0, 0},
     {0, 0, 5, 0, 0, 3, 0, 7, 0},
     {0, 3, 0, 9, 1, 0, 6, 0, 0},
     {0, 0, 0, 0, 0, 2, 0, 0, 0},
     {0, 9, 0, 8, 3, 0, 1, 0, 0},
     {1, 0, 0, 0, 2, 0, 0, 0, 6},
     {3, 0, 0, 0, 4, 0, 0, 0, 0}
    };
    placeNumber(n, sudoku);
}