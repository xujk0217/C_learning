#include <stdio.h>
int main(){
    while(1){
        int h1, h2, m1, m2;
        int hourGap;
        int sleeptime = 0;
        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
        if(h1==0 && h2==0 && m1==0 && m2==0){
            break;
        }
        if(h1>h2){
            h1-=24;
        }

        if(h1!=h2){
            hourGap = h2-(h1+1);
            sleeptime = hourGap*60;
            sleeptime+=m2;
            sleeptime+=60-m1;
        }else{
            sleeptime = m2-m1;
        }
        if(sleeptime<0){
            sleeptime+=1440;
        }
        printf("%d\n", sleeptime);
    }
}