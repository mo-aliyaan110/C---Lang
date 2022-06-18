#include<stdio.h>

int main(){
    char name[100];
    char input;
    int i = 0;

    printf("Enter your value: ");

    while(input != '\n'){
        scanf("%c", &input);
        name[i] = input;
        i++;
    }
    name[i] = '\0';
    
    puts(name);
    
    // char name[] = "Aliyaan";
    // printf("Enter the characters you wanna print: ");
    // scanf("%c", name);
    // puts(name);
    // // printf("The entered characters are %c \n", name);
    // return 0;
}