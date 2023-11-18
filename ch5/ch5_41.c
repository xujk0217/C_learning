#include <stdio.h>
int main(){
    int a, b, ans=0;
    scanf("%d%d", &a, &b);
    for(int i =2; i<=a; i++){
        if (a%i == 0){
            if (b%i == 0){
                ans = 1;
            }
        }
    }
    if(ans == 0){
        printf("兩數互質");
    }else{
        printf("兩數不互質");
    }
}