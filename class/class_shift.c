#include<stdio.h>
// swift bitwise
int test (int j, int m){
    j++;                      //0110
    m+=2;                     //1001
    int r = (j << 4) | m;     //0110 0000 | 0000 1001  --> 0110 1001
    return r;
}
int main(){
    
}