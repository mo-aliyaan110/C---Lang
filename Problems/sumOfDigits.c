#include<stdio.h>

void DigitSum(int n);

int main(){
    int n = 100000;
    DigitSum(n);

    return 0;

}

void DigitSum(int n){
    int count;
    for(int i = 1; i <= n; i++){
        count = i;
    }
    if (count < 10){
        printf("One digit \n");
    }
    else if(count >= 10 && count < 100){
        printf("Two digit \n");
    }
    else if(count >= 100 && count < 1000){
        printf("Three digit \n");
    }
    else if(count >= 1000 && count < 10000){
        printf("Four digit \n");
    }
    else{
        printf("Out of reach...!\n");
    }
    return;
    
}