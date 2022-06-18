#include<stdio.h>

void howManyTimes(int arr[], int n, int input);

int main(){
    
    int input;
    int arr[] = {2, 4, 5, 5, 8, 9, 9, 10, 7, 6, 8, 9};
    printf("\n\n");
    printf("Enter the number you wanna check: ");
    scanf("%d", &input);

    
    howManyTimes(arr, 12, input);
    return 0;
}

void howManyTimes(int arr[], int n, int input){
    int occurance;
    for (int i = 0; i < n; i++){
        if (arr[i] == input){
            occurance++;
        }
    }
    printf("The number %d is appeared %d times \n \n", input, occurance);
}