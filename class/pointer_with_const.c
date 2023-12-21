#include<stdio.h>

int main(){
    int i = 1; 
    int j = 2;
    int *ptrToInt = &i;
    const int *ptrToConstInt = &i;   //固定到 int   == int const *ptrToConstInt = &i;
    ptrToConstInt = &j;//can change address
    //*ptrToConstInt = 10; can't change value of ptr
    j = 10;

    const int constInt = 10;
    int *ptrConstInt = &constInt;
    *ptrConstInt = 20;
    printf("%d", constInt);


    int * const constPtrToInt = &j;   //固定到  address
    *constPtrToInt = 10;
    //constPtrToInt = &i;  //can't change the address which pointer point to


}