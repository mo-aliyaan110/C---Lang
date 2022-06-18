#include<stdio.h>

int main(){

    // int myArray = single_num['2', '2'];

    int num1, num2, square1, square2, sum, single_number, arr;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    square1 = num1 * num1;
    square2 = num2 * num2;

    sum = square1 + square2; 
    // single_number = arr[num1,num2];
    // here is the issue, I am unable to pass our two inputs into the single_number variable, I need to check
    // ways with that I can do that. Then I can solve the Arms strong problem...

    printf("Individual Number %d, %d \n", num1, num2);
    printf("Sum %d \n", sum);
    printf("Single number is %d \n", single_number);

    return 0;
}