#include<stdio.h>
#include<string.h>

typedef struct bankABC{
    char name[100];
    int acnumber;
} bnk;

int main(){

    bnk user1;
    
    printf("Enter the account holder name and account number: ");
    fgets(user1.name, 100, stdin);
    // scanf("%s", user1.name);
    scanf("%d", &user1.acnumber);

    // // scanf("%s", user1.name);
    // scanf("%d", &user1.acnumber);

    printf("The user name is %s\n", user1.name);
    printf("The account number is %d\n", user1.acnumber);

    return 0;

}