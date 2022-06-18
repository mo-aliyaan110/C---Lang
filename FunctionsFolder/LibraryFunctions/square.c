#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter the number you want a square of: ");
    scanf("%d", &num);

    int result = pow(num, 2);
    printf("The square of the your number is = %d \n", result);
    return 0;
}