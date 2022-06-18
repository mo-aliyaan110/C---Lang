#include<stdio.h>

float convertFahrenheit( float n );

int main(){
    float n;
    printf("Enter the degree in Celcius: ");
    scanf("%f", &n);

    float fahrenheit = convertFahrenheit(n);
    printf("The Fahrenheit value is %f \n", fahrenheit);

    return 0;
}

float convertFahrenheit( float n ){
    return (n * 9/5) + 32; 
}