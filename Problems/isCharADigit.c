#include<stdio.h>

int main(){
    char input;
    printf("Write one character: ");
    scanf("%c", &input);
    if(input == 0 || input <= 100){
        printf("Hey this character is a Digit \n");
    }
    else{
        printf("This character is not a Digit!!... \n");
    }
    return 0;
}