#include<stdio.h>

int main(){

    int a,b,c, avg;
    printf("Write the 1st numbers here: \n");
    scanf("%d", &a);
    printf("Write the 2st numbers here: \n");
    scanf("%d", &b);
    printf("Write the 3st numbers here: \n");
    scanf("%d", &c);
    avg = (a+b+c)/3;
    printf("The average of three numbers is %d\n", avg);
    return 0;
}