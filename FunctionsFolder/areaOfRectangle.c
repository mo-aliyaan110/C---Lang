#include<stdio.h>

int rectangle(int w, int l);

int main(){
    int w, l;
    printf("Enter the width: ");
    scanf("%d", &w);
    printf("Enter the length: ");
    scanf("%d", &l);

    int result = rectangle(w, l);
    printf("The area of a rectangle is %d \n", result);
    return 0;
}

int rectangle(int w, int l){
    return w * l;
}