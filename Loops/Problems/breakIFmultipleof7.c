#include<stdio.h>

int main(){

    int input;

    do{
        printf("Enter the number: ");
        scanf("%d", &input);
        printf("You have entered the number = %d \n", input);
        printf("\n\n");
        if(input % 7 == 0){
            break;
        }
    }while(1);
    printf("Thannk you, now you have entered the number divisible by 7, \n So bye now 👋🏻 \n");
    return 0;
}   