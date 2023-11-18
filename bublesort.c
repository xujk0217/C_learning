#include<stdio.h>
int main(){
    int data[5] = {9, 8, 7, 6, 5};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5-1-i ; j++){
            if(data[j]>data[j+1]){
                tem = data[j];
                data[j] = data[j+1];
                data[j+1] = tem;
            }
        }
    }
    for(int i = 0; i<5; i++){
        printf("%d", data[i]);
        if(i != 4){
            printf(" ");
        }
    }
}