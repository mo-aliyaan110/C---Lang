#include<stdio.h>
#include<string.h>

int main(){
    char name[] = "Xampp";
    char Lname[] = "BananaOrange";

    int result = strcmp(name, Lname);
    printf("The final result is %d \n", result);
    return 0;
}