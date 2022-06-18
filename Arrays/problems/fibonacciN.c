#include<stdio.h>

int main(){
    int n;
    printf("Enter the number to which you wanna print fibonacci series (n>2): ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t%d\t", fib[0], fib[1]);

    for (int i = 2; i < n; i++){
        fib[i] =  fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);   
    }
    printf("\n");
    return 0;
}