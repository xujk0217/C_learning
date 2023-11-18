#include <stdio.h> //for print
#include <string.h> //for string
#define _CRT_SWCURE_NO_WARNINGS //for input

int main(){
    int input;
    int f, four, two, o;

    scanf("%d", &input);
    
    f = input/10000;
    four = (input/1000) - 10 * f;
    o = input%10;
    two = (input%100)/10;

    if ((f == o) && (four == two) ) {
        printf("1");
    } else{
        printf("0");
    }
}