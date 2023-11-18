#include <stdio.h>

int main(){
    int n, sum = 0, sevenselv;
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        sevenselv = i%10;
        if (i%35 == 0){
            continue;
        }else if (i%7==0 || sevenselv == 7){
            sum+=i+i;
        }else if(i%5==0){
            continue;
        }else{
            sum+=i;
        }
    }
    printf("%d", sum);
}