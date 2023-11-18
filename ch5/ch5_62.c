#include<stdio.h>

int main(){
    int times;
    double startx, starty;
    double desx, desy;
    int time;
    int s;
    scanf("%d", &times);
    //printf("%d", times);
    for(int i = 1; i < times+1; i++){
        double desstep = 0;
        double startstep = 0;
        time = 0;
        scanf("%lf%lf", &startx, &starty);
        scanf("%lf%lf", &desx, &desy);
        //s = i;
        int desline =desx + desy;
        int startline = startx+starty;

        for(int j = 0; j < desline; j++){
            desstep +=j;
        }
        desstep+=desline;
        desstep+=desx;

        for(int j = 0; j < startline; j++){
            startstep +=j;
        }
        startstep+=startline;
        startstep+=startx;

        /*
        while(i == s){
            if(starty!=0){
                starty-=1;
                startx+=1;
            }else if(starty == 0){
                starty = startx+1;
                startx = 0;
            }
            //printf("(%d, %d)\n", startx, starty);
            time +=1;
            if (startx == desx && starty == desy){
                //printf("break\n");
                break;
            }
            if(startx>desx && starty > desy){
                break;
            }
        }
        */
        printf("Case %d: %.0lf", i, desstep - startstep);
        if(i != times){
            printf("\n");
        }
        
    }
}