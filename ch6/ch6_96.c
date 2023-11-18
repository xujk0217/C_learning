#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int input[100];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - 1 - i; j++)
        {
            if (input[j] > input[j + 1])
            {
                int tem = input[j];
                input[j] = input[j + 1];
                input[j + 1] = tem;
            }
        }
    }
    for (int i = 0; i < a; i += 2)
    {
        if (i == a - 1)
        {
            printf("%d", input[i]);
        }
        else if (input[i] != input[i + 1])
        {
            if (input[i + 1] == input[i + 2])
            {
                printf("%d", input[i]);
            }
            else
            {
                printf("%d", input[i + 1]);
            }
            break;
        }
    }
}