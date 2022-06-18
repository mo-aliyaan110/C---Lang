#include<stdio.h>

int sum(int x, int y);

int main(){

    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);

    int result =  sum(a, b);
    printf("The sum of a and b is %d \n", result);

    return 0;
}

int sum(int x, int y){
    return x + y;
}