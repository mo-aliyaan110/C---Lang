#include<stdio.h>

int main(){

    char input;
    printf("Enter your alphabet: ");
    scanf("%c", &input);

    if(input >= 'A' && input <= 'Z'){
        printf("Capital \n");
    }
    else if(input >= 'a' && input <= 'z'){
        printf("Small alphabet...\n");
    }
    else{
        printf("Not an english alphabet...!! \n");
    }
    return 0;
}