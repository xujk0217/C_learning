#include<stdio.h>
int main(){
    int tem;
    int minexist = 0;
    int lcmnum;
    int a = 3, b = 5;
    if(a>b){
        tem = a;
        a = b;
        b = tem;
    }
    lcmnum = b-1;
    while(minexist == 0){
        lcmnum+=1;
        if(lcmnum % a == 0 && lcmnum % b == 0){
            minexist = 1;
        }
    }
    printf("%d\n", lcmnum);
}