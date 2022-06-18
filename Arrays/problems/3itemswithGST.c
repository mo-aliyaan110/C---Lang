#include<stdio.h>

int main(){
    int price[3];
    int sum; int gst; int finalSum;

    printf("Enter the price of basket: ");
    scanf("%d", &price[0]);

    printf("Enter the price of olive oil: ");
    scanf("%d", &price[1]);

    printf("Enter the price of castor oil: ");
    scanf("%d", &price[2]);

    sum = price[0] + price[1] + price[2];
    gst = (sum * 18)/100;

    finalSum = sum + gst;

    printf("The final sum of basket, olive oil and castor oil with their gst is %d\n", finalSum);
    return 0;
}