#include<stdio.h>

int main(){
    FILE *fptr;
    FILE *fptr2;

    fptr = fopen("sum.txt", "r");

    int n, m;
    fscanf(fptr, "%d", &n );
    fscanf(fptr, "%d", &m );
    
    
    fptr2 = fopen("sum.txt", "w");
    fprintf(fptr2, "%d", n + m);

    fclose(fptr);

    return 0;

}