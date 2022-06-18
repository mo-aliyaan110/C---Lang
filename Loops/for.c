#include<stdio.h>

int main(){

    char input;
    printf("Enter the character you want to repeat: ");
    scanf("%c", &input);

    printf("The loop starts \n");
    for(int i = 1; i <= 5; i++){
        printf("Your character is %c \n", input);
    }
    printf("The loop ends \n");
    return 0;
}