#include<stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("test.txt", "a");

    fprintf(fptr, "%s", " Mango");
    return 0;
}