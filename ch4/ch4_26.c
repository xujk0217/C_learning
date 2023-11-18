#include<stdio.h>

int main(){
    int km;
    scanf("%d", &km);
    if (km<20){
        printf("%d", km*5);
    }else{
        km-=20;
        int co = km*8+(20*5);
        if(km>=80){
            co*=0.9;
            //printf("%d\n", co);
        }
        printf("%d", co);
    }
}