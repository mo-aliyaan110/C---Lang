#include<stdio.h>

float getPercentage(float m1, float m2, float m3);

int main(){ 
    float m1, m2, m3;
    printf("Enter the marks of maths: ");
    scanf("%f", &m1);
    printf("Enter the marks of science: ");
    scanf("%f", &m2);
    printf("Enter the marks of GK: ");
    scanf("%f", &m3);

    float percentage = getPercentage(m1, m2, m3);
    printf("The final result of you is %f \n", percentage);
    return 0;
}

float getPercentage(float m1, float m2, float m3){
    return (m1 + m2 + m3)/3;
}