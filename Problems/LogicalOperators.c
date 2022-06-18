#include<stdio.h>

int main(){

    int num;
    printf("enter your number : \n");
    scanf("%d", &num);
    // printf("%d \n", num > 9 && num < 100);
    if (num > 9 && num < 100){
        printf("This is a True number\n");
    }
    else{
        printf("No its a false number\n");
    }
    return 0;
}