#include<stdio.h>

int main(){

    int input, sum = 0;
    printf("enter until which number you want the sum of numbers?: ");
    scanf("%d", &input);

// using two for loops...!
    // for (int i = 1; i <= input; i++){
    //     sum = sum + i;
    // }

    // printf("The sum of numbers is %d \n", sum);
    // // printing it reversely
    // printf("The reverse of the number is: \n");
    // for (int i = input; i >= 1; i--){
    //     // scanf("%d", &reverse);
    //     printf("%d \n", i);
    // }

// using 1 for loop...

    // for ( int i = 1, j = input; i == input, j >= 1; i++, j--){
    //     sum = sum + i;
    //     printf("The reverse is %d \n", j);
        
        
    // }

// more simplified here we take the reverse order for the users input then we will sum it up ok.

    for (int i = input; i >= 1; i--){
        printf("%d \n", i);
        sum = sum + i;
    }
    printf("Sum is %d \n", sum);
    
    return 0;
}