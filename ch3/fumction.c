#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

bool leap_year(int y){
    bool is_leap = (y%400==0)||((y%400==0)&&(y%100!=0));
    return is_leap;
}
int main(){
    int year;
    bool is_leap;

    scanf("%d", &year);
    assert(year>0);

    is_leap = leap_year(year);
    if(is_leap){
        printf("閏年");
    }
}