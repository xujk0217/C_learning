#include "binarysearch.h"
int binarysearch(int data[], int search, int n) {
    for (int i = 0; i<13; i++){
        if(search == data[i]){
            return i;
        }
    }
    return -1;
}