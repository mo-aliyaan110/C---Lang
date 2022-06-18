#include<stdio.h>
#include<math.h>

int squarert(int n);

int main(){
    int n;
    printf("Enter the number to find its square root: ");
    scanf("%d", &n);

    int result = sqrt(n);
    printf("The square root of num %d is %d \n", n, result);
    return 0;
}

int squarert(int n){
    return pow(n, 0.5);   
}