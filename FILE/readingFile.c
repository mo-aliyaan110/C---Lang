#include<stdio.h>

int main(){
    char data[100];

    FILE *fptr;
    fptr = fopen("test.txt", "r");

    fscanf(fptr, "%s", data);
    

    printf("%s \n", data);

    fclose(fptr);

    return 0;


}