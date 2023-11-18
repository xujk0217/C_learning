#include<stdio.h>
int main(){
    int month, w;
    scanf("%d%d", &month, &w);
    if (6<=month&&month<=9){
        int bo = 5;
        if (w>120) bo+=2;
        printf("%d", bo*w);

    }else{
        int bo = 3;
        if (w>120) bo+=2;
        printf("%d", bo*w);
        
    }

}