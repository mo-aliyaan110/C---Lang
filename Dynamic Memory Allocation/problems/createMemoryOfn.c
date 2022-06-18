#include<stdio.h>
#include<stdlib.h>

int main(){
    int input;
    printf("Enter the size you want to allocate the memory of: ");
    scanf("%d", &input );

    int *ptr;
    ptr = (int *) malloc(input * sizeof(int));

    for(int i = 0; i < input; i++){
        printf("%d \n", ptr[i]);
    }
    return 0;
}