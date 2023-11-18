#include<stdio.h>
int main(){
    int time;
    scanf("%d", &time);
    for (int i = 1; i<=time; i++){
        for(int j = i; j>0; j--){
            if (j%2 == 1){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
}