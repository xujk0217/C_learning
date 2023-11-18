#include "gcd.h"
void gcd(int a,int b) {
    int gcdnum;
    if(a<b){
        for(int i = 1; i <= a; i++){
            if(a%i==0&&b%i==0){
                gcdnum = i;
            }
        }
    }else{
        for(int i = 1; i <= b; i++){
            if(a%i==0&&b%i==0){
                gcdnum = i;
            }
        }
    }
    printf("%d與%d的最大公因數為%d", a, b, gcdnum);
}