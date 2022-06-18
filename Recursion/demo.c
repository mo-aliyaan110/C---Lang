#include<stdio.h>

void helloWorld( int n );

int main(){

    helloWorld(5);
    return 0;
}

void helloWorld( int n ){
    if (n == 0){
        
        return;
    }
    printf("...Hello World ...!\n");
    helloWorld(n-1);
    
}