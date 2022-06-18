#include<stdio.h>
#include<stdlib.h>


int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 99.34;
    ptr[1] = 79.34;
    ptr[2] = 89.34;
    ptr[3] = 49.34;
    ptr[4] = 29.34;

    for (int i = 0; i < 5; i++){
        printf(" Price is = %f \n", ptr[i]);
    }
    


    return 0;
}