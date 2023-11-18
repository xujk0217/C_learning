#include<stdio.h>
 
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int array[17][17] = {0};
    for(int i = 1; i < a+1; i++){
        for(int j = 1; j < b+1; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for(int i = 1; i < a+1; i++){
        for(int j = 1; j < b+1; j++){
            if(array[i][j] == 5){
                for(int dx = -1; dx <=1; dx++){
                    for(int dy = -1; dy <=1; dy++){
                        if(dx == 0&& dy == 0){
                            continue;
                        }else{
                            if(array[i+dx][j+dy] == 5){
                                array[i+dx][j+dy] = 0;
                                array[i][j] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    int find = 0;
    int exist = 0;

    for(int i = 1; i < a+1; i++){
        for(int j = 1; j < b+1; j++){
            if(array[i][j] == 1){
                exist +=1;
                for(int dx = -1; dx <=1; dx++){
                    for(int dy = -1; dy <=1; dy++){
                        if(dx == 0&& dy == 0){
                            continue;
                        }else{
                            if(array[i+dx][j+dy] == 5){
                                find +=1;
                                dx = 1;
                                dy = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d %d", find, exist-find);
}