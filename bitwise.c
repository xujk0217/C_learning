#include <stdio.h>

//AND-0 : reset (=0) : &
//OR-1  : set   (=1) : |
//XOR   :            : ^
//NOT   :            : ~   #include<stdio.h> int main(){ int a = a; a<a a++ int mainint anjiand}


int main(){
    char value = 49;           // 0011 0001
    char test  = 24;           // 0001 1000
    printf("%d\n", test << 1); // 0011 0000  test * 2
    printf("%d\n", test << 2); // 0110 0000  test * 4
    printf("%d\n", test << 3); // 1100 0000

    if((value & test) != 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }


    if((value | test) ){
        printf("yes\n");
    }

    if((value ^ test) == 0xFF){
        printf("yes!");
    }else{
        printf("nooo");
    }

}