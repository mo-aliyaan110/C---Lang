#include<stdio.h>

void swap(int a, int b);

int main(){
    int a = 20, b = 5;
    printf("Before swapping the value of a is %d and b is %d \n", a, b);

    swap(a, b);
    return 0;

}

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping the value of a is %d and b is %d \n", a, b);
    
}