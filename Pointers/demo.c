#include<stdio.h>

int main(){
    int ali = 25;
    int *ptr = &ali;
    int _age = *ptr;

    // printf("The address of variable Ali is %p \n", ptr);
    // // printf("The address of variable Ali in unsigned int format %u \n", ptr);
    // printf("The value of variable ali is %p \n", &ali);
    // printf("The Address of pointer ptr is %p \n", &ptr);

    // printf("The value of variable _age is %d \n", _age);
    // here we are printing the value of that address stored
    printf("The value of variable *ptr is %d \n", *ptr);
    printf("The value of variable _age is %d \n", _age);
    printf("The value of variable _age is %d \n", *(&ali));

    return 0;
}