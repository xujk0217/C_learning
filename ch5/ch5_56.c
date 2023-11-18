#include<stdio.h>
int main(){
    int n, a, b;
    int x;
    int sum;
    scanf("%d", &n);
    for (int i =0; i<n; i++){
        scanf("%d %d", &a, &b);
        x = a;
        if(x%2 ==0){
            x+=1;
        }
        sum = 0;
        while(x<=b){
            sum+=x;
            x+=2;
        }
        printf("%d\n", sum);
    }
}