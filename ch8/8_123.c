#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int b2 = 0;
    int b2b[10];
    int time = 0;
    while(N != 0){
        b2b[time] = N % 10;
        N/=10;
        time+=1;
    }
    for(int i = 0; i < time; i++){
        while(b2b[i] != 0){
            if(b2b[i]%2==1){
                b2+=1;
            }
            b2b[i]/=2;
        }
        //b2+=1;
    }
    printf("%d", b2);
}