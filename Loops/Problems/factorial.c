#include<stdio.h>

int main(){
    int n, fact = 1;
    printf("Enter the number you want to get the factorial: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--){
        fact = fact * i;
    }

    printf("The factorial of your number is: %d \n", fact);
    return 0;
}