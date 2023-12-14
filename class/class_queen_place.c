#include<stdio.h>
#include<stdbool.h>
#define QUEENS 5

int abs(int i){
    return (i>0)?i:-i;
}

void place_queen(int i, int queen_pos[QUEENS]){
    if(i == QUEENS){                       //stop
        for(int j = 0; j < QUEENS; j++){
            
            printf("%d ", queen_pos[j]);
        }
        printf("\n");
;         return;
    }
    for(int k = 0; k < QUEENS; k++){
        bool conflict = false;              //bool safe = true;
        for(int j = 0; j < i; j++){
            if(queen_pos[j] == k || (i - j == abs(queen_pos[j]-k))){
                conflict = true;
            }
        }

        if(!conflict){
            queen_pos[i] = k;
            place_queen(i+1, queen_pos);
        }
    }
}


int main(){
    bool board[QUEENS][QUEENS];
    int queen_pos[QUEENS];
    place_queen(0, queen_pos);
}