#include<stdio.h>

int main(){
    int input, i=0;
    printf(" Enter the Untill where you wanna print numbers 0-?:  ");
    scanf("%d", &input);

// by using for loop....
    // for (int i = 0; i <= input; i++){
    //     printf("%d \n", i);
    // }


// by using while loop.....
    while( i <= input ){
        printf("%d \n", i);
        i++;
    }


    return 0;
}