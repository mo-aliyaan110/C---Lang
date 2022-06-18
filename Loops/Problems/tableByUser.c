#include<stdio.h>

int main(){

    int input;
    printf("Enter the number which you wanna print the table: ");
    scanf("%d", &input);


    for (int i = 0; i <= 10; i++){
        printf("%d \n", input * i);
    }
    return 0;
}