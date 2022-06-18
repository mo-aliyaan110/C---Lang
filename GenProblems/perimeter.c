#include<stdio.h>

int main(){

    float l,w;
    printf("Enter the lenght: \n");
    scanf("%f", &l);

    printf("Enter the Width: \n");
    scanf("%f", &w);

    
    printf("The Perimeter of rectangle is %f\n", 2 * (l + w) );
    return 0;
}