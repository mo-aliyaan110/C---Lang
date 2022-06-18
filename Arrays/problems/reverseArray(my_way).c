#include<stdio.h>

int reverse(int arr[], int n);

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int result = reverse(arr, 5);
    printf("The final reversed is %d \n", result);
    return 0;
}

int reverse(int arr[], int n){
    int reversed[] = {};
    int reverse;

    for (int i = n; i >= 0; i--){
        reverse = arr[i];
    }
    return reverse;
}