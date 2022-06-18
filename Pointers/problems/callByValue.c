// we see the square function to understand how callByValue works..

#include<stdio.h>

void square(int n);

int main(){
    int num = 5;
    square(num);
    printf("The main function value of number is %d \n", num);
    return 0;
}

void square(int n){
    n = n * n;
    printf("The square of number is %d \n", n);
}