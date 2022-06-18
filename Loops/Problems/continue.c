#include<stdio.h>

int main(){

    int input;
    printf("Enter the number till where you wanna print the numbers: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++){
        if(i == 6){
            continue;
        }
        printf("%d \n", i);
    }
    printf("Done....\n");
    return 0;
}