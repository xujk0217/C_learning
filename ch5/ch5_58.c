#include<stdio.h>

int main(){
    int n, ml, mh;
    int a;
    int time = 0;
    int maxtime = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d%d", &ml, &mh);
        maxtime = 0;
        for(int j = ml; j <= mh; j++){
            time = 1;
            a = j;
            while(a!=1){
                if(a%2==1){
                    a = 3*a+1;
                }else{
                    a = a/2;
                }
                time+=1;
            }
            if(maxtime<time){
                maxtime = time;
            }
        }
        printf("%d\n", maxtime);
    }
}