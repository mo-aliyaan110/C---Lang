#include<stdio.h>

void maxNum(int* a, int* b);

int main(){
    int a, b;
    printf("Enter first number to check the maximum: ");
    scanf("%d", &a);
    printf("Enter second number to check the maximum: ");
    scanf("%d", &b);
    maxNum(&a, &b);
    return 0;
}

void maxNum(int* a, int* b){
    *a>*b?printf("%d is maximum \n", *a ):printf("%d is maximum \n", *b);
}