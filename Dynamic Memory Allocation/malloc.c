#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr =  (int *) malloc(10 * sizeof(int));

    free(ptr);
    printf("%d \n", sizeof(ptr));

    return 0;

}