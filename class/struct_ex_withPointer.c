#include<stdio.h>
#include<stddef.h>
#include <string.h>

//how to count ( 1 + 3i )+( 3 + 6i ) = 4 + 9i

//struct with pointer -> return address      (add_complex)
//struct with pointer -> (*structptr).value  (mul_complex)

//const : avoid to change the value of ...

//not happy pointer structure...

struct complex{
    int real;
    int imag;
};

typedef struct complex Complex;

Complex *add_complex(Complex* aptr, Complex* bptr){
    Complex* c;
    (*c).real = (*aptr).real + (*bptr).real;
    (*c).imag = (*aptr).imag + (*bptr).imag;
    return c;
}
void mul_complex(const Complex a, Complex b, Complex *c){
    (*c).real =( a.real * b.real )- ( a.imag * b.imag);
    (*c).imag =( a.real * b.imag )+ ( a.imag * b.real);
}

void print_complex(Complex a){
    printf("%d + %di\n", a.real, a.imag);
}

int main(){
    struct complex a = {1, 3}, b = {3, 6}, *cptr;
    cptr = add_complex(&a, &b);
    print_complex(*cptr);
    mul_complex(a, b, cptr);
    print_complex(*cptr);
}