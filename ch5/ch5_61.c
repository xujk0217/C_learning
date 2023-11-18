#include<stdio.h>

int main(){
    int m, n;
    while(scanf("%d%d", &m, &n)==2){
        //printf("1");
        int isCan = 1;
        int tem = m;
        if(n <= 1 ){
            isCan = 0;
        }else{
            while(m != 1){
            //printf("2");
                if(m%n!=0){
                   isCan = 0;
                   break;
                }
                m/=n;
            //printf("%d", m);
            }
        }
        m = tem;
        while(isCan == 1 && m > 1){
            printf("%d ", m);
            m/=n;
            if(m == 1){
                printf("1\n");
            }
        }
        if(isCan == 0){
            printf("Boring!\n");
        }
    }
}