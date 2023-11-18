#include <stdio.h>

void pointer_inc(int *p1, int *p2){
    *p1 += 1;
    p1 = p2;
    *p1 +=2; 
}

int main(){
    int i = 10, j = 20;
    int *iptr = &i;

    printf("%d %d\n", i, j);

    pointer_inc(iptr, &j);
    
    printf("%d %d\n", i, j);
}