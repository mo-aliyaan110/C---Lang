#include<stdio.h>

int main(){

    int input;

    do{
        printf("Enter the number of your choice: ");
        scanf("%d", &input);
        printf("You have entered = %d \n", input);
        if (input % 2 != 0){
            break;
        }

    }while(1);

    printf("Thank you..! \n");
    return 0;
}