#include<stdio.h>

void printString(char array[]);

int main(){

    // char myName[] = {'A', 'L', 'I', 'Y', 'A', 'A', 'N', '\0'};
    char myName2[] = "Aliyaan";
    // for (int i = 0; myName2[i] != '\0'; i++){
    //     printf("%c \t", myName2[i]);
    // }

    printString(myName2);
    printf("\n\n\n");
    return 0;
}

void printString(char array[]){
    for (int i = 0; array[i] != 0; i++ ){
        printf("%c \t", array[i]);
    }
}