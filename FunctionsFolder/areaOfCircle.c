#include<stdio.h>

float circle(float r);

int main(){
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);

    float result =  circle(r);
    printf("The Area of circle is %f \n", result);
    return 0;
}

float circle(float r){
    return 3.142 * (r * r);
}