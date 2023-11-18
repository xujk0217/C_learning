#include<stdio.h>

int main(){
    int a;
    int now;
    int spliti[5] = {0, 0, 0, 0, 0};
    scanf("%d", &a);
    for(int j = 0; j < a; j++){
        int spliti[5] = {0, 0, 0, 0, 0};
        scanf("%d", &now);
        for(int i = 1; i<now; i++){
            int time = 0;
            int tem = i;
            int sepsum = 0;
            while(i!=0){
                sepsum += i%10;
                i/=10;
                time+=1;
            }
            i = tem;
            if(i+sepsum == now){
                printf("%d\n", i);
                break;
            }
            if(i == now-1){
                printf("0\n");
                break;
            }
        }
        if(now == 1){
            printf("0\n");
        }
    }
}