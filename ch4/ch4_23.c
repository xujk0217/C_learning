#include<stdio.h>
int main(){
    int hr, sla;
    scanf("%d", &hr);
    if(hr>75){
        int b = hr-75;
        sla = 6000+(15*125)+b*175;
    }else if(hr>60){
        int a = hr-60;
        sla = 6000+(a*125);
    }else{
        sla = hr*100;
    }
    printf("%d", sla);
}