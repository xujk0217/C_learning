#include <stdio.h>
#include <math.h>
 
int main(){
 
    double a;
    double b;
    double res;
 
    scanf("%lf %lf", &a, &b);
 
    res = pow(a, b);
    printf("%.1lf^%.1lf=%.1lf\n", a, b, res);
 
    return 0;
 
}

#include "power.h"
#include <math.h>
void power(double *x, double *y, double *res) {
    *res = pow(*x, *y);
}