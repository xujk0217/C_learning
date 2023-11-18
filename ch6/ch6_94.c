#include <stdio.h>
#include <stdbool.h>

int main()
{
    int test = 0;
    int boxNumber = 0;
    int twotwo = 0;
    int ar3used = 0;
    int ar2used = 0;
    while (true)
    {
        int array[6];
        for (int i = 0; i < 6; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] != 0)
            {
                test = 1;
            }
        }
        if (test == 0)
        {
            break;
        }
        test = 0;

        boxNumber += array[5];
        boxNumber += array[4];
        boxNumber += array[3];
        ar3used = 0;
        ar2used = 0;
        twotwo = 0;

        if (array[2] > 0)
        {
            if (array[2] % 4 != 0)
            {
                boxNumber += 1;
            }
            boxNumber += array[2] / 4;
        }

        if (array[1] > 0)
        {
            if (array[1] / 5 > array[3])
            {
                array[1] -= array[3] * 5;
                if (array[2] % 4 != 0)
                {
                    if (4 - (array[2] % 4) == 3)
                    {
                        if (array[1] > 5)
                        {
                            array[1] -= 5;
                            if(array[1]%9 == 0){
                                boxNumber+=array[1]/9;
                            }else{
                                boxNumber+=array[1]/9;
                                boxNumber+=1;
                                twotwo = 9 - (array[1]%9);
                            }
                        }
                    }
                    else if ((4 - array[2] % 4 == 2))
                    {
                        if (array[1] > 3)
                        {
                            array[1] -= 3;
                            if(array[1]%9 == 0){
                                boxNumber+=array[1]/9;
                            }else{
                                boxNumber+=array[1]/9;
                                boxNumber+=1;
                                twotwo = 9 - (array[1]%9);
                            }
                        }
                    }
                    else
                    {
                        if (array[1] > 1)
                        {
                            array[1] -= 1;
                            if(array[1]%9 == 0){
                                boxNumber+=array[1]/9;
                            }else{
                                boxNumber+=array[1]/9;
                                boxNumber+=1;
                                twotwo = 9 - (array[1]%9);
                            }
                        }
                    }
                }
            }
        }
        if(array[0]>0){
            if(array[0]>11*array[4]){
                array[0]-=11;
                if(array[0]>array[3]){
                    printf("");
                }
            }
        }
    }
}