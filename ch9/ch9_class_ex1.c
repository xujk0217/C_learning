#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5 };


    int *ptr = a;
    for(int i = 0; i < 5; i ++){
        ptr[i] +=3;  //ptr == &a[0], ptr[0] == a[0] 依次 在 a's address(aka ptr, aka &a[i]) 加 4 個 bytes
    }

    ptr = &a[2];
    for(int i = 0; i < 2; i ++){
        ptr[i] += 2;
    }

    for(int i = 0; i <5; i++){
        printf("%d",  a[i]);
        printf("\n");
    }
}