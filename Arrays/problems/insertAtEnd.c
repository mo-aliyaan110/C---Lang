#include<stdio.h>

void insertArr(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int myArr[6] = {6, 9, 0, 6, 8};
    insertArr(myArr, 5 );
    printArr(myArr, 6 );
    return 0;

}

void printArr(int arr[], int n){
    printf("The new array is follow: ");
    for (int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n\n\n");
}

void insertArr(int arr[], int n ){
    int count = 0;
    for (int i = 0; i < n; i++){
        
        printf("%d \t", arr[i]);
        count++;
    }
    printf("\n\n");
    printf("Enter the new element: ");
    scanf("%d", &arr[count]);
    printf("\n\n Added.. \n\n");
}