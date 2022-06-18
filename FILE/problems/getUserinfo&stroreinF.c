#include<stdio.h>

int main(){
    FILE *fptr;
    char user[100];
    printf("Enter the user name and phone number: ");
    fgets(user, 100, stdin);

    fptr = fopen("user.txt", "w");

    fprintf(fptr, "%s", user);

    fclose(fptr);
    return 0;

}