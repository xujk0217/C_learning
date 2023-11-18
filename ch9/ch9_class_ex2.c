#include <stdio.h>

int main(){
    int a[15];
    int *iptr1 = &a[3];
    int *iptr2 = iptr1 +4;        // &a[7]

    printf("iptr1 = %p\n", iptr1);
    printf("iptr2 = %p\n", iptr2);
    printf("%ld\n", iptr2-iptr1);
    
}