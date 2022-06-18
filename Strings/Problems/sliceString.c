#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main(){
    char str[100];
    printf("Enter a random string: ");
    scanf("%s", str);
    slice(str, 3, 6);
    return 0;
}

void slice(char str[], int n, int m){
    int j = 0;
    char new[100];
    for (int i = n; i <= m; i++){
        new[j] = str[i];
        j++;
    }
    new[j] = '\0';
    printf("The new string from 3 index to 7 index is: ");
    puts(new);
}