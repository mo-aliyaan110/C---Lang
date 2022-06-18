// #include<stdio.h>

// void strChecker(char str[], char ch );

// int main(){
//     char str[100];
//     printf("Enter your string: \n");
//     fgets(str, 100, stdin);

//     strChecker(str, 'u');
//     return 0;
// }

// void strChecker(char str[], char ch){
//     int check;

//     for (int i = 0; str[i] != '\0'; i++ ){
//         if(str[i] == ch){
//             check++;
//         }
//     }
//     if (check > 0){
//         printf("Yes character %c is present in the string \n\n", ch);
//     }
//     else{
//         printf("No the character %c is not present \n \n", ch);
//     }
// }




// -----------OPTIMUM CODE---------------------------
#include<stdio.h>

void strChecker(char str[], char ch );

int main(){
    char str[100];
    printf("Enter your string: \n");
    fgets(str, 100, stdin);
    printf("\n\n\n");
    strChecker(str, 'u');
    return 0;
}

void strChecker(char str[], char ch){
    int check;

    for (int i = 0; str[i] != '\0'; i++ ){
        if(str[i] == ch){
            printf("Yes the character is present..");
            return;
        }
        
    }
    
    printf("No the character is not present.. \n");
    
}