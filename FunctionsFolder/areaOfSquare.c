#include<stdio.h>

int square(int n);

int main(){
    int n;
    printf("Enter the value of your square: ");
    scanf("%d", &n);

    int result = square(n);
    printf("The area of a square is %d \n", result);
    return 0;
}

int square(int n){
    return n * n;
}