#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter the numbers (1-5): \n");


    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    // printing
    printf("The user enetered are: \n");
    for(int i = 0; i < 5; i++){
        printf("%d \n", ptr[i] );
    }

    // reallocation..
    ptr = realloc(ptr, 8);
    
    //taking 9 inputs from user...
    printf("\n\n");
    printf("Now enter the numbers (1-9): \n");
    for(int i = 0; i < 8; i++){
        scanf("%d", &ptr[i] );
    }

    // printing the final result...!!!
    printf("The final user enetered are: \n");
    for(int i = 0; i < 8; i++){
        printf("%d) %d \n", i, ptr[i] );
    }   
    return 0;
}