#include<stdio.h>

void printTable(int a);

int main(){
    int input;
    printf("Enter the number you wanna print the table of: ");
    scanf("%d", &input);

    printTable(input);
    printf("Thankks.....\n");

    return 0;
}

void printTable( int x ){
    for (int i = 1; i <= 10; i++){
        printf("%d \n", x * i);
    }
    printf("Done \n");
}