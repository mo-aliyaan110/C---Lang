#include<stdio.h>

int main(){

    int num1, num2;
    printf(" Please enter your first number: \n");
    scanf("%d", &num1);

    printf("Now enter your next number: \n");
    scanf("%d", &num2);

    int sum = num1 + num2;
    
    printf("The sum of your two numbers is %d \n", sum);
    return 0;
}