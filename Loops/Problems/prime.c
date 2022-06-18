#include<stdio.h>

int main(){
    int n, prime = 0, result = 0; 
    printf("Enter the number to be checked for prime number: ");
    scanf("%d", &n);


    for (int i = 2; i < n; i++){
        if ( n % i == 0 ){
            printf("The number is not a prime number \n");
            break;
        }
        else if ( n % n == 0 && n % 1 == 0){
            printf("The number is a prime number...! \n ");
            break;
             
        }
    }
    return 0;
}