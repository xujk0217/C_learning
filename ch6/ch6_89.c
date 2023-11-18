#include <stdio.h>

int main()
{
    int aiNumber, ajNumber;

    scanf("%d%d", &aiNumber, &ajNumber);
    
    int A[aiNumber][ajNumber];
    int x;
    for (int i = 0; i < aiNumber; i++)
    {
        for (int j = 0; j < ajNumber; j++)
        {
            scanf("%d", &x);
            A[i][j] = x;
        }
    }

    int biNumber, bjNumber;
    scanf("%d%d", &biNumber, &bjNumber);
    int B[biNumber][bjNumber];
    int y;
    for (int i = 0; i < biNumber; i++)
    {
        for (int j = 0; j < bjNumber; j++)
        {
            scanf("%d", &y);
            B[i][j] = y;
        }
    }

    /*
        for (int i = 0; i < aiNumber; i++){
            for(int j = 0; j<ajNumber; j++){
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < biNumber; i++){
            for(int j = 0; j<bjNumber; j++){
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }

    */

    int ans = 0;

    for (int i = 0; i < aiNumber; i++)
    {
        for (int j = 0; j < bjNumber; j++)
        {
            for (int k = 0; k < ajNumber; k++)
            {
                ans += A[i][k]*B[k][j];
                //printf("a:%d ", ans);
            }
            printf("%d ", ans);
            ans = 0;
        }
        printf("\n");
    }
}