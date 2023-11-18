#include<stdio.h>

int main(){
    int people, gift;
    int gifts[106];
    scanf("%d%d", &gift, &people);
    for(int i = 0; i < gift; i++){
        scanf("%d", &gifts[i]);
    }

    for(int i = 0; i < gift-1; i++){
        for(int j = 0; j < gift-1-i; j++){
            if(gifts[j] > gifts[j+1]){
                int tem = gifts[j];
                gifts[j] = gifts[j+1];
                gifts[j+1] = tem;
            }
        }
    }
    int typeOfGift = gifts[0];
    int time = 1;
    int times[100];
    int numgift = 0;
    int tygift[100];
    for(int i = 1; i < gift; i++){
        //printf("time: %d, gift: %d\n", i, gifts[i]);
        if(typeOfGift != gifts[i]||i == gift-1){
            if(i == gift-1 && gifts[i] == gifts[i-1]){
                time+=1;
            }
            times[numgift] = time;
            //printf("%d\n", time);
            tygift[numgift] = gifts[i-1];
            typeOfGift = gifts[i];
            numgift+=1;
            time = 1;
        }else{
            time+=1;
        }
    }
    int giftperperson = 0;
    for(int i = 0; i < numgift; i++){
        //printf("%d\n", times[i]);
        if(times[i] < people){
            continue;
        }else{
            giftperperson += (times[i]/people);
        }
    }
    printf("%d", giftperperson);
}