#include<stdio.h>
int main(){
    float bo, exmoney;
    scanf("%f", &bo);
    if (bo<=100000){
        exmoney = bo*0.1;
    }else if(bo<=200000){
        bo-=100000;
        exmoney = 10000+(bo*0.075);
    }else if(bo<=400000){
        bo -= 200000;
        exmoney = 10000+7500+(bo*0.05);
    }else if(bo<=600000){
        bo -= 400000;
        exmoney = 10000+7500+10000+(bo*0.03);
    }else if(bo<=1000000){
        bo -= 600000;
        exmoney = 10000+7500+10000+6000+(bo*0.015);
    }else{
        bo -= 1000000;
        exmoney = 10000+7500+10000+6000+6000+(bo*0.001);
    }
    printf("%.2f", exmoney);
}