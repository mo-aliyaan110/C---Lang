#include<stdio.h>

void address(int *n);

int main(){
    int n = 60;
    printf(" The address of main function n is %u\n", &n);
    address(&n);
    return 0;
}

void address(int *n){
    printf(" The address of the address function n is %u\n", n);
}