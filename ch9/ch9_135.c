#include "array_mul.h"
void array_mul(int *a, int *b, int size) {
    for(int  i = 0; i <4; i++){
        *a *= *b;
        a+=1;
        b+=1;
    }
}