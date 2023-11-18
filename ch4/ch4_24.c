#include<stdio.h>
int main(){
    int weight, distance;
    scanf("%d%d", &weight, &distance);
    if(weight>20){
        printf("不收件");
    }else if(weight>10){
        printf("%d", 100+(40*distance));
    }else if(weight>=5){
        printf("%d", 100+(20*distance));
    }else{
        if(distance<10){
            printf("100");
        }else{
        printf("%d", 100+(10*distance));
        }
    }
}