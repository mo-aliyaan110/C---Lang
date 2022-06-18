#include<stdio.h>

int main(){

    for (int i = 5; i <= 50; i++){
        if (i % 2 == 0){
            continue;
        }
        printf("%d \n", i);
    }
    printf("Above is the odd numbers from 5 to 50 \n");
    return 0;
}