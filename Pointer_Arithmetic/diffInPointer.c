#include<stdio.h>

int main(){
    int age = 20;
    int age2 = 25;

    int *ptr = &age;
    int *ptr2 = &age;

    printf("Difference is %u \n", ptr - ptr2);
    printf("Comparison is %u \n", ptr == ptr2);
    return 0;

    // you can make the difference with a an int pointer from char pointer.

}