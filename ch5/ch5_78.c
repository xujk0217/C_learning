#include<stdio.h>
int main(){
    double v, t;
    while(scanf("%lf%lf", &v, &t)!= EOF){
        printf("%.0lf\n", v*t*2);
    }
}