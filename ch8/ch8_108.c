#include "mid.h"
void mid(int a[5], int n) {
    int tem;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4-i; j++){
            if(a[j] > a[j+1]){
                tem = a[j];
                a[j]= a[j+1];
                a[j+1] = tem;
            }
        }
    }
    printf("Median = %d", a[2]);
 }