#include<stdio.h>
#include<stdbool.h>
#include<complex.h>



int main(){
    char c = 'H';
    int a = 10;
    float b = 4.5;
    short int sa = 56;
    long int la = 56;
    double d = 34.6;
    unsigned u = 3;
    float complex cplx = 5+2*I;
    // int complex sz = 5+2*I; Error: _Complex can only be used with floating-point types.
    int ddd = a > 2 ? 77 : 66;
    printf("%d",ddd);
    printf("\na = %d, a is an integer, size of a is: %d-Bytes.\n\n",a,sizeof(a));
    printf("b = %0.2f, b is float, size of b is: %d-Bytes.\n\n",b,sizeof(b));
    printf("u = %d, u is unsigned, size of u is: %d-Bytes.\n\n",u,sizeof(u));
    printf("sa = %d, sa is short int, size of sa is: %d-Bytes.\n\n",sa,sizeof(sa));
    printf("la = %d, la is long int, size of la is: %d-Bytes.\n\n",la,sizeof(la));
    printf("d = %0.2f, d is double, size of d is: %d-Bytes.\n\n",d,sizeof(d));
    printf("c = %c, c is character , size of c is: %d-Byte.\n\n",c,sizeof(c));

    printf("\nComplex numbers:\n");
    printf("\tType of cplx is complex.\n");
    printf("\tSize of cplx is: %d-Bytes.\n",sizeof(cplx));
    printf("\tThe real part of cplx is: %0.2f.\n",creal(cplx));
    printf("\tThe imaginary part of cplx is: %0.2f.\n",cimag(cplx));


    return 0;
}