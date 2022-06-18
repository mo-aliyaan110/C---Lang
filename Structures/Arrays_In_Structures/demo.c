#include<stdio.h>
#include<string.h>

int main(){
    // structure definition
    struct student{
        int rollno;
        char name[100];
        float cgpa;
    };

    struct student cse[100]; // Structure variable declaration ;

    // printf("Enter the name")
    // for (int i = 0; i <= 100; i++){
        
    // }

// struct variable initialization...
    strcpy(cse[0].name, "Aliyaan");
    cse[0].cgpa = 9.2;
    cse[0].rollno = 34;

// printing the struct values...

    printf("Name is %s\n", cse[0].name);
    printf("CGPA is %f\n", cse[0].cgpa);
    printf("Roll no is %d\n", cse[0].rollno);

    return 0;
}