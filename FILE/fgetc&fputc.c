#include<stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("test.txt", "w");

    fputc('A', fptr);
    fputc('L', fptr);
    // fputc("I", fptr);
    // fputc("Y", fptr);
    // fputc("A", fptr);
    // fputc("A", fptr);
    // fputc("N", fptr);


    // printf("%c",fgetc(fptr));
    return 0;

}