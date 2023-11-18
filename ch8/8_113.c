#include<stdio.h>
int main(){
    int dec_num = 5;
    int count_one = 0;
    while(dec_num!=0){
        if(dec_num%2==1){
            count_one+=1;
            dec_num-=1;
        }
        dec_num/=2;
    }
    printf("%d", count_one);
}