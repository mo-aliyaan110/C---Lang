#include<stdio.h>

int main(){

    int input;
    printf("Enter your number: \n");
    scanf("%d", &input);
    if(input % 2 == 0){
        printf("Hey your number is divisible by 2 \n");
    }
    else{
        printf("Not divisible by 2 \n");
    }

    return 0;


}