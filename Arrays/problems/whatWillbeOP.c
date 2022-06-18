#include<stdio.h>

int main(){
    int arr[] = {1, 2, 3, 5, 9, 10, 19};
    
    int a = *(arr+3);

    int b = *(arr+10);

    printf("%d \n", b);
    return 0;
}