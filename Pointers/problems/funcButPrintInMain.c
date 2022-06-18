#include<stdio.h>

void allinOneMath(int *sum, int *average, int *product);

int main(){
    int sum = 0, average = 0, product = 0;
    printf("Value before calling the function is sum = %d, average = %d, product = %d\n", sum, average, product);
    allinOneMath(&sum, &average, &product);
    printf("Value AFTER calling the function is sum = %d, average = %d, product = %d\n", sum, average, product);
    return 0;
}

void allinOneMath(int *sum, int *average, int *product){
    int a = 10, b = 10;
    *sum = a + b;
    *average = (a + b)/2;
    *product = a * b;
    
}