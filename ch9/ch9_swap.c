#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 3, b = 5;
    int *optr;
    int o = 9;
    optr = &o;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("%p\t", optr);
    printf("%p", &o);
}