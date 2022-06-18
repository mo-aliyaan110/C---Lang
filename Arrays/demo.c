#include<stdio.h>

int main(){
    int marks[3];
    printf("enter the marks of phy: ");
    scanf("%d", &marks[0]);

    printf("enter the marks of chem: ");
    scanf("%d", &marks[1]);

    printf("enter the marks of math: ");
    scanf("%d", &marks[2]);


    printf("The marks of phy is %d, chem = %d, math = %d \n\n\n", marks[0], marks[1], marks[2]);
    return 0;
}