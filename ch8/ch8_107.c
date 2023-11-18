#include "years.h"
void years(int year) {
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("%d是閏年", year);
            }else{
                printf("%d是平年", year);
            }
        }else{
            printf("%d是閏年", year);
        }
    }else{
        printf("%d是平年", year);
    }
}