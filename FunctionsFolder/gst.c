#include<stdio.h>

void gst(float value);

int main(){
    float value = 100;
    gst(value);
    printf("The value is = %f \n", value);
    return 0;
}

void gst(float value){
    value = value + (value * 18)/100 ;
    printf("The price after adding GST is %f \n", value);
}