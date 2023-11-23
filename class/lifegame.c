#include <stdio.h>
//display how to search neighbor in array^2

int main(){

    int n = 5;
    
    int k = 3;

    int life[5][5] = {
        {0, 0, 0, 0, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0}
        };

    int nextLife[5][5] = {0};

    for (int iter = 0; iter < k; iter++){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                // find location
                int neighbor = 0;
                for (int dy = -1; dy <= 1; dy++){
                    // location y +-1
                    for (int dx = -1; dx <= 1; dx++){
                        // location x +-1
                        if (dy != 0 || dx != 0){
                            int row = i + dy;
                            int col = j + dx;
                            if (row >= 0 && row < 5 && col >= 0 && col < 5){
                                if (life[row][col] == 1){
                                    neighbor ++;
                                    printf("now:%d,%d, right:%d, down:%d\n", i, j, dx, dy);
                                }
                            }
                        }
                    }
                }

                printf("neighbor: %d\n\n", neighbor);
                if (life[i][j] == 1){
                    nextLife[i][j] = (neighbor == 2 || neighbor == 3) ? 1 : 0;
                }
                else{
                    nextLife[i][j] = (neighbor == 3) ? 1 : 0;
                }
            }
            printf("\n");
        }

        for(int i = 0; i<5; i++){
            for(int j = 0 ; j<5; j++){
                printf("%d ", nextLife[i][j]);
            }
            printf("\n");
        }

        printf("\n");
        for(int i = 0; i<5; i++){
            for(int j = 0 ; j<5; j++){
                life[i][j] = nextLife[i][j];
            }
        }
    }
}
