#include<stdio.h>
void getFib(int N);

int main(){

}

#include "getFib.h"
void getFib(int N) {
    int l[N];
    l[0] = 0;
    l[1] = 1;
    for (int i = 0; i<N; i++){
        if(i>1){
            l[i]=l[i-1]+l[i-2];
        }
        printf("%d", l[i]);
        if(i!=N-1){
            printf(" ");
        }
    }
}             