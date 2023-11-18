#include <stdio.h>

int main(){
    int money;
    int coin[7];
    int coinm[7] = {1000, 500, 100, 50, 10, 5, 1};
    scanf("%d", &money);

    if(money<0){
        printf("error");
    }else{
        coin[0] = money/1000;
        money%=1000;
        coin[1] = money/500;
        money%=500;
        coin[2] = money/100;
        money%=100;
        coin[3] = money/50;
        money%=50;
        coin[4] = money/10;
        money%=10;
        coin[5] = money/5;
        coin[6] = money%5;

        for (int i = 0; i<=6; i++){
            if (coin[i]!=0){
                printf("%d: %d\n", coinm[i], coin[i]);
            }
        }
    }

}