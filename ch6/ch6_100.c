#include <stdio.h>
int main()
{
    int input[6][6] = {0};
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }
    int time = 0;
    for (int x = 1; x < 5; x++){
        for (int y = 1; y < 5; y++){
            if (input[x][y] == -1){
                continue;
            }else{
                for (int dx = -1; dx <= 1; dx++){
                    for (int dy = -1; dy <= 1; dy++){
                        if (input[x + dx][y + dy] == -1){
                            time += 1;
                        }
                    }
                }
                input[x][y] = time;
                time = 0;
            }
        }
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            printf("%d", input[i][j]);
            if(j!=4){
                printf(" ");
            }
        }
        if(i!=4){
            printf("\n");
        }
    }
}