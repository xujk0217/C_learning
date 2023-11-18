#include <stdio.h>
#include <math.h>
int main()
{
    int input;
    int temInput;
    int revInput;
    int time = 0;
    int repTime;
    scanf("%d", &repTime);
    for (int i = 0; i < repTime; i++)
    {
        scanf("%d", &input);
        do
        {
            temInput = input;
            int reserve = 0;
            while (temInput != 0)
            {
                int temp = reserve * 10 + temInput % 10;
                reserve = temp;
                temInput /= 10;
            }
            if (time != 0)
            {
                if (input == reserve)
                {
                    printf("%d %d", time, input);
                    if(i!=repTime-1){
                        printf("\n");
                    }
                    time = 0;
                    break;
                }
            }
            input += reserve;
            time += 1;
            if(input>1000000000 ||time > 30){
                printf("overflow!");
                if(i!=repTime-1){
                    printf("\n");
                }
                time = 0;
                break;
            }

        } while (input < pow(2, 31) - 1);
    }
}