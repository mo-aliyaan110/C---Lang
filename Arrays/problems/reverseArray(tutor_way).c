#include<stdio.h>

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};

    reverseArray(arr, 6);
    printArray(arr, 6);
    return 0;
}

void reverseArray(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int firstVal = arr[i];
        int lastValue = arr[n-i-1];

        // now swapping the values..
        arr[i] = lastValue;
        arr[n-i-1] = firstVal;
        
        // printf("%d \t", arr[i]);
        // return arr[i];
    }
    printf("Reversing is done \n \n \n");
}

void printArray(int arr[], int n){
    printf("Printing the reversed array....\n\n \n");
    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }   
    printf("\n \n");
}