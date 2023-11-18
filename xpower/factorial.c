#include<stdio.h>
int main(){
    int n = 10;
    double x = 1.5;

    double xpower = 1.0;
    int factorial = 1;
    double e = 0;
    double term = 1.0;
    for(int i = 1; i<=n; i++){
        //xpower *= x; alter delet
        //printf("%d\t", xpower);
        //factorial *= i; alter delet
        //printf("%d\t", factorial);

        term = term*(x/i); //alter pro

        //printf("%f\n", (float)xpower/factorial);
        e += term;
    }
    printf("%.12lf\n", 1 + e);
}