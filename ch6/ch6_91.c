#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    int avg = 0;
    int moveTimes = 0;
    int sum = 0;
    int inputDataTime = 0;
    while (true)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        int array[n];
        //printf("%d\n", sum);


        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            sum += array[i];
        }

        avg = sum / n;
        //printf("%d\n", avg);

        for (int i = 0; i < n; i++)
        {

            if (array[i] > avg)
            {
                moveTimes += array[i] - avg;
            }
        }
        inputDataTime+=1;
        printf("Set #%d\n", inputDataTime);
        printf("The minimum number of moves is %d.\n\n", moveTimes);

        avg = 0;
        moveTimes = 0;
        //printf("%d\n", moveTimes);
        sum = 0;

    }
}