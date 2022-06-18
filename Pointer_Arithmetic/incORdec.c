#include<stdio.h>

int main(){
    char name = 'A';
    char *ptr = &name;
    printf("%c\n", name);
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    // float price = 25.0;
    // int *ptr = &price;
    // printf("%f\n", price);
    // printf("%u\n", ptr);
    // ptr++;
    // printf("%u\n", ptr);
    // ptr--;
    // printf("%u\n", ptr);

    return 0;
    
}