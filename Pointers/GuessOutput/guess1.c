#include<stdio.h>

int main(){

    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    *ptr += 5;

    (*ptr)++;

    printf("The value of x is %d \n", *ptr);
    printf("The value of x is %d \n", x);

}