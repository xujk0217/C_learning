#include <stdio.h>
#include <stdbool.h>
int main(){
    int a, b, count, ans;
    scanf("%d%d%d", &a, &b, &ans);
    count = a+b;
    if (count==ans){
        printf("true");
    }else{
        printf("false");
    }

}