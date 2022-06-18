#include<stdio.h>

int largest(int arr[], int n);

int main(){
    int myArr[] = {2, 4, 5, 6, 3, 99, 90, 54};
    int large = largest(myArr, 8);
    printf("The largest value in an array is %d \n\n", large);
    return 0;
}

int largest(int arr[], int n){
    int largest = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}