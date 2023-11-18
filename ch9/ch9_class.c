#include<stdio.h>

int main(){
    // pointer 指標
    int i;
    int *iptr1;
    int *iptr2;
    //float *fptr;
    //double *dptr;

    // *變數 = 變數中的值
    // &變數 = 變數的地址

    iptr1 = &i; // 存 i 的位置
    iptr2 = iptr1;

    scanf("%d", iptr1);

    printf("%d\n", i);

    *iptr2 = 9;

    printf("%d\n", i);

    printf("%d\n", *iptr1);// i

    printf("iptr1 = &i = %p\n", iptr1);// i's address
    printf("&iptr1 = %p\n", &iptr1);// iptr1's address
    printf("&i = %p\n", &i);// i's address

    printf("*&iptr1 = iptr1 = %p\n", *&iptr1);
    printf("&*&iptr1 = &iptr1 = %p\n", &*&iptr1);

    printf("%d\n", *iptr1);

    int k;
    k = 2 * (*iptr1);
    //printf("%d\n", k);


}