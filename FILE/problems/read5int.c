#include<stdio.h>

int main(){
    
    FILE *fptr;

    fptr = fopen("../test.txt", "r");
    int num;

    for (int i = 0; i < 5; i++){
        fscanf(fptr, "%d", &num);
        printf("%d", num);

    }
    printf("\n\n");
    fclose(fptr);
    return 0;
    
}