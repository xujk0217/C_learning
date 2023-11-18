#include "getMax.h"
void getMax(int data[], int size) {
    int tem;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5-1-i ; j++){
            if(data[j]>data[j+1]){
                tem = data[j];
                data[j] = data[j+1];
                data[j+1] = tem;
            }
        }
    }
    printf("%d", data[4]);
}