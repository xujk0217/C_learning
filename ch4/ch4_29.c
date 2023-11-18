#include<stdio.h>
int main(){
    int que, score;
    scanf("%d", &que);
    if(que>=40){
        score = 100;
    }else if(que>20){
        que -= 20;
        score = 80+que;
    }else if(que>10){
        que -= 10;
        score = 60+(que*2);
    }else{
        score =  que*6;
    }
    printf("%d", score);
}