#include<stdio.h>

void printNumbers(int arr[], int n);

int main(){
    int myArr[5] = {1, 5, 7, 9, 0};
    printf("Array function is going to start...!! \n");
    printNumbers(myArr, 5);
    printf("Array function is done Now...!! \n");
    return 0;
}

void printNumbers(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }        
    printf("\n");
}