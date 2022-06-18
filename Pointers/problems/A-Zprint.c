#include<stdio.h>

void alphabets(char* alph);

int main(){
    char a = 'a';

    // for (char i = 'a'; i <= 'z'; i++){
    //     printf("%c \n", i);
    // }
    alphabets(&a);
    return 0;
}

void alphabets(char* alph){
    for ( char i = *alph; i <= 'z'; i++){
        printf(" %c\n", i);
    }
    
}