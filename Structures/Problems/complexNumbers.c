#include<stdio.h>

int main(){
    struct complex{
        int real;
        int imaginary;
    };

    struct complex num1 = {1, 7};
    // struct complex *ptr;
    // ptr = &num1;
    struct complex *ptr = &num1;
    printf(" Real is %d \n", ptr->real);
    printf(" Imaginary is %d \n", ptr->imaginary);
    return 0;
}