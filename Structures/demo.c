#include<stdio.h>
#include<string.h>

int main(){
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

    struct student ali;

    ali.roll = 2455;
    ali.cgpa = 9.11;
    strcpy(ali.name, "Aliyaan");

    printf("name is %s \n", ali.name);
    printf("cgpa is %f \n", ali.cgpa);
    printf("Roll is %d \n", ali.roll);

    
    return 0;
}