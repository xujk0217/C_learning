#include <stdio.h> //for print
#include <string.h> //for string
#define _CRT_SWCURE_NO_WARNINGS //for input

int main(){
    int input;
    scanf("%d",&input);
    int a = input/10000;
    input -= a * 10000;
    int b = input/1000;
    input -= b*1000;
    int c = input/100;
    input -= c*100;
    int d = input/10;
    int e = input%10;
    printf("%d%d%d%d%d", e, d, c, b, a);

    
}