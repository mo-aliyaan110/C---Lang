#include<stdio.h>
#include<string.h>

int main(){
    char fName[] = "Mohammed";
    char lName[] = "Aliyaan";
    printf(" Firstname is %s \n", fName);
    printf(" Lastname is %s \n", lName);

    strcpy(fName, lName);
    // printf("The updated string is %s \n", newVar);
    printf("Updated Firstname is %s \n", fName);
    printf("Updated Lastname is %s \n", lName);
    puts(lName);
    
// ----------------------------------------------------
    // strcat
    // char name[100] = "Ali ";
    // char LLname[] = "Abedi";
    // strcat(name, LLname);
    // puts(name);
    // printf("The value of second string is %s \n", LLname);
    return 0;
}