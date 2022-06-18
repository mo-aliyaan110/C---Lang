#include<stdio.h>
#include<string.h>

void salting(char pass[]);

int main(){
    char password[100];
    printf("Please enter your password: ");
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char pass[]){
    char salt[] = "123565";
    strcat(pass, salt);
    printf("The salted password is :\n");
    puts(pass);
}