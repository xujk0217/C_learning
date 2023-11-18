#include<stdio.h>
#include<math.h>

int main(){
    double n;
    double i;
    scanf("%lf%lf", &n, &i);
    printf("%.0f", pow(i, 1/n));
    /*
    while(sum < i){
        sum*=n;
        time+=1;
    }
    //printf("%lf\n", i);
    printf("%.0lf", time);
    */
}