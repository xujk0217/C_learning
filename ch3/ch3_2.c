#include <stdio.h> //for print
#include <string.h> //for string
#define _CRT_SWCURE_NO_WARNINGS //for input

int main(){
    int input;

    scanf("%d", &input);
    input += 1911;
    if (input % 4 == 0){
        if (input % 100 == 0){
            if(input % 400 == 0){
                printf("1");
            }else{
                printf("0");
            }
        }else{
            printf("1");
        }
    }else{
        printf("0");
    }
    
    
}