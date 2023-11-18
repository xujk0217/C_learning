#include <stdio.h>

int main(){
    int i ;
    scanf("%d", &i);
    if(i == 0){
        printf("0不是正數也不是負數");
    }else if(i>0){
        printf("%d是正數\n", i);
        if(i<=10000){
            printf("A");
        }else{
            printf("B");
        }
    }else if (i<0){
        printf("%d是負數\n", i);
        if(i<=-10000){
            printf("C");
        }else{
            printf("D");
        }
    }


}