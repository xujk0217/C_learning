#include<stdio.h>

int main(){
    int i = 2;
    int *iptr = &i;
    int *iptr2 = NULL;
    iptr2 = iptr;
    printf("%d\n", *iptr2);
    iptr2 = NULL;
    printf("%d", *iptr2);

}