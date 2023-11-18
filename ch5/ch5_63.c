#include <stdio.h>

int main()
{
    int repTime;
    int num;
    int isExist = 1;
    // int ans[20] = 0;
    scanf("%d", &repTime);
    for (int i = 0; i < repTime; i++)
    {
        scanf("%d", &num);
        int temnum = num;
        isExist = 1;
        int ans[20] = {0};
        int arraySaveTime = 0;
        if (num == 0)
        {
            printf("0");
        }
        else
        {
            while (1)
            {
                for (int j = 9; j != 1; j--)
                {
                    if (num % j == 0)
                    {
                        ans[arraySaveTime] = j;
                        arraySaveTime += 1;
                        num /= j;
                        break;
                    }
                    else if (j == 2)
                    {
                        isExist = 2;
                    }
                    if (num == 1)
                    {
                        isExist = 0;
                        break;
                    }
                }
                if (isExist == 0 || isExist == 2)
                {
                    break;
                }
            }

            if (temnum == 1)
            {
                printf("1");
            }
            else if (isExist == 0)
            {
                for (int k = 0; k < 19; k++)
                {
                    for (int l = 0; l < 19 - k; l++)
                    {
                        if (ans[l] > ans[l + 1])
                        {
                            int tem = ans[l];
                            ans[l] = ans[l + 1];
                            ans[l + 1] = tem;
                        }
                    }
                }
                for (int m = 0; m < 20; m++)
                {
                    if (ans[m] != 0)
                    {
                        printf("%d", ans[m]);
                    }
                }
            }
            else
            {
                printf("-1");
            }
        }
        if (i != repTime - 1)
        {
            printf("\n");
        }
    }
}