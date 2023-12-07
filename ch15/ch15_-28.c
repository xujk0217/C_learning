#include<stdio.h>

double squN(double n){
    if(n == 1){
        return 1;
    }
    double twoN = n*n;
    return twoN + squN(n-1);
}

int main(){
    double n ;
    scanf("%lf", &n);
    printf("%.0lf", squN(n));
}