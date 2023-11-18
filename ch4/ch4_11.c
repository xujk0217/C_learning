#include <stdio.h> //for print
#include <string.h> //for string
#define _CRT_SWCURE_NO_WARNINGS //for input

int main(){
    int input, month, date;
    scanf("%d%d%d", &input, &month, &date);

    int rum, day;
    
    if (input % 4 == 0){
        if (input % 100 == 0){
            if(input % 400 == 0){
                rum = 1;
            }else{
                rum = 0;
            }
        }else{
            rum = 1;
        }
    }else{
        rum = 0;
    }

    day = (month-1)*30;
    day += date;
    //printf("%d\n", day);

    if (rum == 1){
        if (month > 2){
            day -= 1;
        }
    }else{
        if (month > 2){
            day -= 2;
        }
    }

    for (int i = 1; i <= month; i++ ){
        int nowmonth = i;
        //printf("%d\n", i);
        if (nowmonth <= 8 && (nowmonth -1)%2==1){
            day +=1;
            //printf("%d\n", i);
            //printf("%d\n", day);
        }else if(nowmonth>=9 && (nowmonth-1)%2 == 0){
            day += 1;
            //printf("%d\n", i);
            //printf("%d\n", day);

        }
    }    
    printf("%d", day);
}