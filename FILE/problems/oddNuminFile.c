#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("oddNum.txt", "w");

    int odd;
    printf("Enter the last number to check for odd numbers: ");
    scanf("%d", &odd);

    

    for(int i = 1; i <= odd; i++){
        if(i % 2 != 0){

        fprintf(fptr, "%d ", i);

        }
    }

    fclose(fptr);

    return 0;
}