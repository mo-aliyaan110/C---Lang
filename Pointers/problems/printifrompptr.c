#include<stdio.h>

int main(){
    char name = 'A';
    char *ptr = &name;
    char **pptr = &ptr;
    printf("The value of the name from pointer to pointer is %c \n", **pptr);
    return 0;

}