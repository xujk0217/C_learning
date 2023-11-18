#include<stdio.h>
int main(){
    int n = 2;
    int i = 0;
    while(n!=0){
        if(n%2==1){
            i+=1;
        }
        scanf("%d", &n);
    }
    printf("%d", i);
}