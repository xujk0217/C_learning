#include <stdio.h>

int main()
{
    int n;
    int test;
    int changecola;
    int sum;
    int friend = 0;
    scanf("%d", &n);
    int sums[n];
    for (int i = 0; i < n; i++){
        friend = 0;
        scanf("%d", &test);
        sum = 0;
        sum += test;

        changecola = 0;
        while (test >= 3)
        {
            test -= 3;
            changecola += 1;
        }
        sum += changecola;
        changecola += test;
        while (changecola >= 2)
        {
            if(changecola==2){
                changecola+=1;
            }
            /*
            if (changecola % 3 == 2)
            {
                changecola += 1;
                friend = 1;
            }
            */

            while (changecola >= 3)
            {
                changecola -= 3;
                changecola += 1;
                sum += 1;
            }
        }

        // sums[i] = sum;
        printf("%d\n", sum);
    }
    /*
    for (int i = 0; i < n; i++)
    {
        // printf("%d", sums[i]);
        if (i != n - 1)
        {
            // printf("\n");
        }
    }
    */
}