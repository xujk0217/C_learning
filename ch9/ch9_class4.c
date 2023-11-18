#include <stdio.h>

int main(){

    int a[5] = {6, 7, 8, 9, 10};
    //int *iptr = a;

    printf("a = %p\n", a);
    for(int i = 0; i < 5; i++){
        printf("address of a[%d] = %p\n", i, &a[i]);
    }



    int *ptr = a;
    for(int i = 0; i < 5; i ++, ptr++){   // ptr++ => 指標進下一位 => +4
        *ptr +=3;
    }
//上下一樣。    ||
//             ||
    for(int *ptr = a; ptr <= &a[4]; ptr++){   // ptr++ => 指標進下一位 => +4
        *ptr +=3;
    }




    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}