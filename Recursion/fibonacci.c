#include<stdio.h>

int fib(int n);

int main(){
    printf("fib is %d \n", fib(5));
    return 0;
}

int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);

    int fibN = fibNm1 + fibNm2;
    printf(" The fibonacci is num %d is %d \n", n , fibN);
    return fibN;
}