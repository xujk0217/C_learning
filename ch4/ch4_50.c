#include <stdio.h>

int main(){
    int x = 1, y = 1, time;
    int downone, rightfirst, upfirst, rightone, downsecond, left;
    downone = 1;//always one
    rightfirst = 1;
    upfirst = 1;
    rightone = 1;//always one
    downsecond = 2;
    left = 2;

    scanf("%d", &time);
    int nowtime = 1;
    while(nowtime < time){
        y+=downone;//12
        nowtime+=1;//n1

        if(nowtime < time){
            x+=rightfirst;//22
            nowtime+=rightfirst;//n2
            if(nowtime>time){
                nowtime-=time;
                for(int i  = 2; i < nowtime+1; i++){
                    x-=1;
                }
                nowtime = time;
            }
            rightfirst+=2;
        }else{
            //printf("one");
        }

        if(nowtime < time){
            y-=upfirst;//21
            nowtime+=upfirst;//n3
            if(nowtime>time){
                nowtime-=time;
                for(int i  = 1; i < nowtime+1; i++){
                    y+=1;
                }
                nowtime = time;
            }
            upfirst+=2;
        }else{
            //printf("two");
        }

        if(nowtime < time){
            x+=rightone;//31
            nowtime+=rightone;//4
            if(nowtime>time){
                nowtime-=time;
                for(int i  = 1; i < nowtime+1; i++){
                    x-=1;
                }
                nowtime = time;
            }
        }else{
            //printf("three");
        }

        if(nowtime < time){
            y+=downsecond;//33
            nowtime+=downsecond;//5
            if(nowtime>time){
                nowtime-=time;
                for(int i  = 1; i < nowtime+1; i++){
                    y-=1;
                }
                nowtime = time;
            }
            downsecond+=2;
        }else{
            //printf("four");
        }

        if(nowtime < time){
            x-=left;//13
            nowtime+=left;//6
            if(nowtime>time){
                nowtime-=time;
                for(int i  = 1; i < nowtime+1; i++){
                    x+=1;
                }
                nowtime = time;
            }
            left+=2;
        }else{
            //printf("five");
        }
        
    }
    printf("%d %d", x, y);

}