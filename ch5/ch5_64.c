#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int t;
        int student[100000];
        scanf("%d", &t);
        for (int j = 0; j < t; j++)
        {
            scanf("%d", &student[j]);
        }
        if (student[0] < student[1])
        {
            printf("-1");
        }
        else
        {
            for (int j = 0; j < t - 1; j++)
            {
                for (int k = 0; k < t - 1 - j; k++)
                {
                    if (student[j] > student[j + 1])
                    {
                        int tem = student[j];
                        student[j] = student[j + 1];
                        student[j + 1] = tem;
                    }
                }
            }
            
        }
    }
}