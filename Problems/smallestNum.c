#include<stdio.h>

int main(){

    int a, b, smallest;
    printf("Write the first number: \n");
    scanf("%d", &a);
    printf("Write the second number: \n");
    scanf("%d", &b);
    if(a < b){
        printf("The smallest number is %d \n", a);
    }
    else if (a > b) {
        printf("The smallest number is %d \n", b);
    }
    else{
        printf("Both a and b are equal.. \n");
    }
    return 0;
}