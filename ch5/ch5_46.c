#include <stdio.h>
int main(){
    int a, b, stopbool=0;
    int thun, hun , tent, num;
    int time=0;
    int amsgnum[100] = {-1};
    int abc = 0;
    while(stopbool==0){
        scanf("%d %d", &a, &b);
        abc= 0;
        if(a==0 && b==0){
            //printf("break");
            break;
        }else{
            if(a>b){
                int tem = a;
                a = b;
                b = tem;
            }
            amsgnum[time]=0;
            for(int i = a; i < b; i++){
                thun = i/1000;
                hun = i/100;
                num = i%10;
                tent = ((i - thun *1000 - hun*100)- num)/10;
                thun = thun*thun*thun;
                hun = hun*hun*hun;
                num = num*num*num;
                tent =tent*tent*tent;
                if(tent+num+hun==i){
                    abc += 1;
                    //printf("+1\n");
                }
            }
        }
        if(abc!=0){
            printf("有\n");
        }else{
            printf("無\n");
        }
        time +=1;
        //printf("%d", time);
    }
    //printf("%d\n", time);
    /*
    for (int l = 0; l<=time; l++){
        if(amsgnum[l]>0){
            printf("%d\n", amsgnum[l]);
            printf("有\n");
        }else if(amsgnum[l]==0){
            printf("%d\n", amsgnum[l]);
            printf("無\n");
        }else{
            break;
        }
    }
    */
}