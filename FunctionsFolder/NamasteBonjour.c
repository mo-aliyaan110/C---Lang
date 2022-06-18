#include<stdio.h>

void Bonjour();
void Namaste();

int main(){
    char input;
    printf("Enter you are Indian or French? I for Indian, F for French....!");
    scanf("%c", &input);

    if(input == 'i'){
        Namaste();
    }
    else if(input == 'f'){
        Bonjour();
    }
    else{
        printf("Invalid input.....!!!");
    }
    return 0;
}   

void Bonjour(){
    printf("Bonjour");
}

void Namaste(){
    printf("Namaste");
}