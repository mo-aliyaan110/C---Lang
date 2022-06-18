#include<stdio.h>

int main(){
    int n;
    int arr2D[2][10];
    printf("Enter the table you wanna print: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++){
        // int arry[i] = n * i;
        printf("%d \n", n * i);
    }
    return 0;
}