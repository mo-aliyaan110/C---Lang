#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("%f\n", ptr[i]);
    }    

    return 0;
}
