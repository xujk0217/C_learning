#include<stdio.h>
#include<stddef.h>
#include <string.h>
//how to count ( 1 + 3i )+( 3 + 6i ) = 4 + 9i
struct complex{
    int real;
    int imag;
};

typedef struct complex Complex;

Complex add_complex(Complex a, Complex b){
    Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
Complex mul_complex(Complex a, Complex b){
    Complex c;
    c.real =( a.real * b.real )- ( a.imag * b.imag);
    c.imag =( a.real * b.imag )+ ( a.imag * b.real);
    return c;
}

void print_complex(Complex a){
    printf("%d + %di\n", a.real, a.imag);
}

int main(){
    struct complex a = {1, 3}, b = {3, 6}, c;
    c = add_complex(a, b);
    print_complex(c);
    c = mul_complex(a, b);
    print_complex(c);

    
}

