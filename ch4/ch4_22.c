#include<stdio.h>
int main(){
    int km, co, excessco, exsm;
    scanf("%d", &km);
    co = 80;
    if(km>=1500){
        km -= 1500;
        excessco = km/500;
        exsm = km%500;
        //printf("%d\n%d\n", excessco, exsm);
        //if(exsm>0){
            excessco +=1;
        //}
        co += excessco * 5;
    }
    printf("%d", co);
}