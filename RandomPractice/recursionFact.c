#include<stdio.h>

int fact(int n);

int main(){
    int n;
    printf("Enter the number you wanna get the factorial of : ");
    scanf("%d", &n);

    printf("The factorial of number %d is %d \n", n, fact(n));
    return 0;
}

int fact(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    
    int factNm1 = fact(n-1);

    int fact = factNm1 * n;
    return fact;
}