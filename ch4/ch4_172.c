#include <stdio.h>
int main(){
    int income , tax;
    scanf("%d", &income);

    if (income>=4720000){
        tax = (income*0.4)-864000;
        //printf("1");
    }else if(income>=2520000){
        tax = (income*0.3)-392000;
        //printf("2");
    }else if(income>=1260000){
        tax = (income*0.2)-140000;
        //printf("3");
    }else if(income>=560000){
        tax = (income*0.12)-39200;
        //printf("4");
    }else{
        tax = (income*0.05);
        //printf("5");
    }
    printf("全年應繳稅額為： %d 元", tax);
}