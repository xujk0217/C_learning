#include<stdio.h>
int main(){
    int n ;
    float ans = 0;
    scanf("%d", &n);
    for(float i = 1; i<=n; i++){
        ans = ans+(1/i);
        //printf("%f\n", ans);
    }
    printf("%.2f", ans);

}