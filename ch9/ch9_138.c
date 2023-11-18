#include "max.h"
int max(int* iptr, int n) {
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max < *iptr){
            max = *iptr;
        }
        iptr-=1;
    }
    return max;
}