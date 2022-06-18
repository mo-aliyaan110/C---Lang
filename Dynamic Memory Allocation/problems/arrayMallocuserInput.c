#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter the numbers (5): ");

    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    printf("Values entered..\n");
    printf("Entered values are: \n\n");
    for(int i = 0; i < 5; i++){
        printf("%d \n", ptr[i]);
    }
    return 0;
}