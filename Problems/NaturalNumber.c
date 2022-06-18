#include<stdio.h>

int main(){

    int input;
    printf("Enter your number: ");
    scanf("%d", &input);

    input > 0? printf("Its a natural number...\n") : printf("Its not a natural number...\n");
    return 0;
}