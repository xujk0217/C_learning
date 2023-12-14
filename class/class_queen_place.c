#include<stdio.h>
#include<stdbool.h>
#define QUEENS 8

int abs(int i ){
    return (i>0)?i:-i;
}

void place_queen(int i, int queen_pos[QUEENS]){
    if(i == 8){//stop
        return;
    }
    for(int k = 0; k < QUEENS; k++){
        bool conflict = false;  //bool safe = true;

        for(int j = 0; j < i; j++){
            if(queen_pos[j] == k || (i - j == abs(queen_pos[j]-k))){
                conflict = true;
            }
        }
    }

}

int main(){
    int queen_pos[QUEENS];
    place_queen(0, queen_pos);
}