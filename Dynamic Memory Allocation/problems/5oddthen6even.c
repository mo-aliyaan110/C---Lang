#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter the first 5 odd numbers: \n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 6);

    printf("Now enter the 6 even numbers: \n\n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &ptr[i]);
    }

    printf("The final values entered are: \n");

    for(int i = 0; i < 6; i++){
        printf("%d ) %d \n", i, ptr[i]);
    }
    return 0;
}