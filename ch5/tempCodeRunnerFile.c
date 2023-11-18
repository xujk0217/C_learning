#include<stdio.h>
int main(){
    int time;
    int storeNum;
    scanf("%d", &time);
    for(int i= 0; i < time; i++){
        scanf("%d", &storeNum);
        int storepath[20] = {0};
        for(int j = 0; j < storeNum; j++){
            scanf("%d", &storepath[j]);
        }
        for(int j = 0; j < storeNum-1; j++){
            for(int k = 0; k < storeNum-1 - j; k++){
                if(storepath[k]>storepath[k+1]){
                    int tem;
                    tem = storepath[k];
                    storepath[k] = storepath[k+1];
                    storepath[k+1] = tem;
                }
            }
        }
        printf("%d", -(storepath[0]-storepath[storeNum-1])*2);
        if(i != time-1){
            printf("\n");
        }
    }
}