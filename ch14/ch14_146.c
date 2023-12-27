#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

typedef struct pair
{
    int frequency;
    int charASCII;
} pair;

void print(pair *myData)
{
    int i;
    for (i = 0; i < 95; i++)
        (myData[i].frequency == 0) ? printf("") : printf("%d %d\n", myData[i].charASCII, myData[i].frequency);
}

int main()
{
    int i, len, flag = 0;
    char str[128];

    while (gets(str) != NULL)
    {
        struct pair *myData = (struct pair *)malloc(95 * sizeof(struct pair));
        if (flag != 0)
            printf("\n");
        int b = 0;
        flag++;
        for (int i = 0; i < strlen(str); i++)
        {
            int a = (int)str[i];
            int isExit = 0;
            for (int j = 0; j < b; j++)
            {
                if (str[i] == myData[j].charASCII)
                {
                    isExit = 1;
                    myData[j].frequency += 1;
                }
            }
            if (isExit == 0)
            {
                myData[b].frequency += 1;
                myData[b].charASCII = str[i];
                b += 1;
            }
        }
        for (int i = 0; i < b - 1; i++)
        {
            for (int j = 0; j < b - i - 1; j++)
            {
                if (myData[j].frequency > myData[j + 1].frequency)
                {
                    pair temp = myData[j];
                    myData[j] = myData[j + 1];
                    myData[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < b - 1; i++)
        {
            for (int j = 0; j < b - i - 1; j++)
            {
                if (myData[j].frequency == myData[j + 1].frequency)
                {
                    if (myData[j].charASCII < myData[j + 1].charASCII)
                    {
                        pair temp = myData[j];
                        myData[j] = myData[j + 1];
                        myData[j + 1] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < b - 1; i++)
        {
            for (int j = 0; j < b - i - 1; j++)
            {
                if (myData[j].frequency == myData[j + 1].frequency)
                {
                    if (myData[j].charASCII < myData[j + 1].charASCII)
                    {
                        pair temp = myData[j];
                        myData[j] = myData[j + 1];
                        myData[j + 1] = temp;
                    }
                }
            }
        }
        print(myData);
        str[128] = NULL;
        free(myData);
    }
    printf("\n");
    printf("\n");
    return 0;
}