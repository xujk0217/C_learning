#include<stdio.h>
#define PI 3.141592653589793

int main(){
    short int i;
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(short int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(long int));
    printf("%d\n", sizeof(long long int));
    printf("%d\n", sizeof(unsigned int));
    printf("%d\n", sizeof(unsigned char));

    double radius = 3;
    const double pi = 3.141592653589793; //佔記憶體
    //pi = 3;  can't change const number
    printf("%f", 2 * pi * radius);

}