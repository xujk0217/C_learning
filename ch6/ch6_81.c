#include<stdio.h>
int main(){
    int time;
    scanf("%d", &time);
    for(int i = 0; i < time; i++){
        int days;
        scanf("%d", &days);
        int sale[1000] ={0};
        for(int i = 0; i < days; i++){
            scanf("%d", &sale[i]);
        }
        int happyYesterday = 0;
        for(int k = 1; k < days; k++){
            for(int j = k-1; j>-1; j--){
                if(sale[k]>=sale[j]){
                    happyYesterday+=1;
                }
            }
        }
        printf("%d", happyYesterday);
        if(i != time-1){
            printf("\n");
        }
    }
}