#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int splitn[4];
    splitn[0] = n/1000;
    n%=1000;
    splitn[1] = n/100;
    n%=100;
    splitn[2] =n/10;
    splitn[3] = n%=10; 

    int ti[4];
    int recount;
    for (int i = 0; i<=3; i++){
        int nu = 1;
        for (int j = i+1; j<=4; j++){
            if(i==0){
                if (splitn[i]==splitn[j]){
                nu+=1;
                }
            }else{
                for(int k = 0; k<i ;k++){
                    //printf("%dis k\n", ti[k]);
                    if (ti[k]==splitn[i]){
                        recount+=1;
                        //printf("%dhihih", ti[k]);
                    }
                }
                if (recount==0){
                    if (splitn[i]==splitn[j]){
                        nu+=1;
                    }
                }
            }
        }
        ti[i] = splitn[i];
        //printf("i is %d\n", i);
        if (recount==0){
            printf("%d%d", nu, splitn[i]);
        }
        recount = 0;
    }

}