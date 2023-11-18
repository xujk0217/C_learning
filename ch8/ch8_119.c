#include "count_ones.h"
int count_ones(int dec_num) {
    int count_one = 0;
    while(dec_num!=0){
        if(dec_num%2==1){
            count_one+=1;
        }
        dec_num/=2;
    }
    //count_one+=1;
    return count_one;
}