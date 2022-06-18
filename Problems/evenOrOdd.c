#include<stdio.h>

int main(){

    int input;
    printf("Enter your number: \n");
    scanf("%d", &input);
    if (input %2 == 0){
        printf("The number is a even number \n");
    }
    else{
        printf("The number is odd number!!! \n");
    }
    return 0;
}