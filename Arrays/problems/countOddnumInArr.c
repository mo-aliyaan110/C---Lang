#include<stdio.h>

int CountOdd(int arr[], int n);

int main(){
    int myArr[] = {1, 2, 3, 4, 5, 9, 0, 67, 54};
    int finalCount = CountOdd(myArr, 10);
    printf("The count of odd numbers in array is %d \n", finalCount);
    
    return 0;
}

int CountOdd(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        
        if (arr[i] % 2 != 0){
            count++;
        }
        
    }
        return count;
}
    