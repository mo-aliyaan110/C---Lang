#include<stdio.h>

void Hello();
void GoodBye();

int main(){
    printf("Here the functions starts \n");
    Hello();
    GoodBye();
    printf("Here the functions ends \n");
    return 0;
}

void GoodBye(){
    printf("Good bye..!!! \n");
}

void Hello(){
    printf("Hello....!! \n");
}

