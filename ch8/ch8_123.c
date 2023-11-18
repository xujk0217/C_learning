#include "bin.h"
int bin(int N) {
    int b1 = 0;
    while(N != 0){
        if(N%2==1){
            b1+=1;
        }
        N/=2;
    }
    //b1+=1;
    return b1;
}



#include "hex.h"
int hex(int N) {
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
    return b2;

}