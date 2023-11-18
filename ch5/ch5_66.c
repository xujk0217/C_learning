#include<stdio.h>
int main(){
    int repTime;
    scanf("%d", &repTime);
    for(int i = 0; i < repTime; i++){
        int own = 0, get = 0, trans = 0;
        int extraEat = 0;
        scanf("%d%d%d", &own, &get, &trans);
        own+=get;
        while(own>=trans){
            get = own/trans;
            own %= trans;
            own += get;
            extraEat += get;
        }
        printf("%d", extraEat);
        if(i != repTime-1){
            printf("\n");
        }
    }
}