#include<stdio.h>

int main(){
    int n ;
    float downsum = 1;
    float ans = 0;

    scanf("%d", &n);
    for (float i = 1; i < n+1; i++){
        for(float j = 1; j<i+1; j++){
            downsum*=j;
        }
        //printf("%f\n", downsum);
        ans += i/downsum;
        //printf("ans:%f\n", ans);
        downsum = 1;
    }
    printf("%.5f", ans);
}