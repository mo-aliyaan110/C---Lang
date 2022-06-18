#include<stdio.h>

void nameLength(char name[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);
    nameLength(name);
    return 0;
}

void nameLength(char name[]){
    int count = 0;
    for (int i = 1; name[i] != '\0'; i++ ){
        count++;
    }
    printf("The number of letters in name is %d \n", count);
}