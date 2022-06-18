#include<stdio.h>

int main(){
    int sum = 0;
    printf("Here we see the result of sum of All numbers between 5 and 50 including 5 and 50: \n");

    for (int i = 5; i <= 50; i++){
        sum = sum + i;
    }
    printf("The sum of all numbers between 5-50 is %d \n", sum);
    return 0;
}