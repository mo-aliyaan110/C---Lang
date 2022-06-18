#include<stdio.h>

void vowels(char str[]);

int main(){
    char randomstr[100];
    // printf("Enter the string (a-z) in small: \n");
    fgets(randomstr, 100, stdin);

    vowels(randomstr);
    return 0;
}

void vowels(char str[]){
    int vowelCount = 0;

    for(int i = 0; str[i] != 0; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
            vowelCount++;
        }
    }
    printf("The occurence of vowel is %d \n", vowelCount);
}