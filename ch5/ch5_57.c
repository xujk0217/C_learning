#include<stdio.h>
int main(){
    int hight, start, nowhight, up, down;
    scanf("%d%d%d%d", &hight, &start, &up, &down);
    nowhight = start;
    int day = 1;
    while(hight>nowhight){
        nowhight+=up;
        if(nowhight<hight){
            nowhight-=down;
        }else{
            break;
        }
        day+=1;
    }
    printf("%d", day);
}