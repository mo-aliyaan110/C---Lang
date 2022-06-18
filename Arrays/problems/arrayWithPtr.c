#include<stdio.h>

int main(){
    // without pointer....
    // int aadhar[5];
    
    // for (int i = 0; i < 5; i++){
    //     printf("%d index number : ", i );
    //     scanf("%d", &aadhar[i]);
    // }
    // for (int i = 0; i < 5; i++){
    //     printf("%d index number are: %d \n", i, aadhar[i]);

    // }

    // with pointer....
    int aadhar[5];
    int *ptr = &aadhar[0];

    for (int i = 0; i < 5; i++){
        printf("Enter the aadhar number: ");
        scanf("%d", (ptr + i) );
    }

    for (int i = 0; i < 5; i++){
        printf("The aadhar number is %d \n", *(ptr + i));
    }

    return 0;
}