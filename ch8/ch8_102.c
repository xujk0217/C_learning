#include "isPalindrome.h"
void isPalindrome(int x) {
    int reseverx = 0, temx;
    temx = x;
    if(x<10){
        printf("false");
    }else{
        while(temx!=0){
            reseverx = temx%10 + reseverx*10;
            temx/=10;
        }
        if(reseverx==x){
            printf("true");
        }else{
            printf("false");
        }
    }
}