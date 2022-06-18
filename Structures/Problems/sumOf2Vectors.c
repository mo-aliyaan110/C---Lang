#include<stdio.h>

    struct vector{
        int i;
        int j;
    };

void sumVectors(struct vector v1, struct vector v2, struct vector sum);

int main(){

    struct vector v1 = {3, 7};
    struct vector v2 = {5, 9};
    struct vector sum = {0};

    sumVectors(v1, v2, sum);

    return 0;
}

void sumVectors(struct vector v1, struct vector v2 ,struct vector sum){
    
    sum.i = v1.i + v2.i;
    sum.j = v1.j + v2.j;

    // sum = (v1.i + v2.i) + (v1.j + v2.j);
    printf("The sum of two vectors v1 is %d and v2 is %d \n", sum.i, sum.j);
    return;
}