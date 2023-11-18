#include <stdio.h>
#include <stdlib.h>

void floodFill(int **image, int imageSize, int sr, int sc, int newColor)
{
    int a = image[sr][sc];
    image[sr][sc] = -1;
    int repError = 1;
    while (repError == 1)
    {
        repError = 0;
        for (int i = 0; i < imageSize; i++)
        {
            for (int j = 0; j < imageSize; j++)
            {
                if (image[i][j] = -1)
                {
                    for (int di = -1; di < 2; di++)
                    {
                        for (int dj = -1; dj < 2; dj++)
                        {
                            if ((i + di) >= 0 && (j + dj) >= 0 && (i + di) < imageSize && (i + di) < imageSize)
                            {
                                if (image[i + di][j + dj] == a)
                                {
                                    image[i + di][j + dj] = -1;
                                    repError = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < imageSize; i++)
        {
            for (int j = 0; j < imageSize; j++)
            {
                if(image[i][j] == -1){
                    image[i][j] = newColor;
                }
            }
        }

}

int main()
{
    int n;
    int sr, sc, newColor;
    scanf("%d", &n);
    int **p = NULL;
    p = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        p[i] = (int *)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp;
            scanf("%d", &tmp);
            p[i][j] = tmp;
        }
    }
    scanf("%d", &sr);
    scanf("%d", &sc);
    scanf("%d", &newColor);
    floodFill(p, n, sr, sc, newColor);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}