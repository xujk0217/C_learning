#include<stdio.h>
#include<stddef.h>
#include <string.h>

struct complex{
    int real;
    int imag;
};

typedef struct complex Complex;

Complex add_complex(Complex a, Complex b){
    Complex c;
    return c;
}
Complex mul_complex(Complex a, Complex b){
    Complex c;
    return c;
}

int main(){
    //(3 + 1i)+(5 + 2i) = 8 + 3i
    struct complex a = {1, 3}, b = {3, 6}, c;
    c = add_complex(a, b);
}

