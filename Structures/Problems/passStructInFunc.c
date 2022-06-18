#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s2);


int main(){

    struct student s1 = {"Aliyaan", 35, 7.11};

    printInfo(s1);

    return 0;
}

void printInfo(struct student s2){
    printf("Student Information.....!  \n\n\n");
    printf("Name    = %s\n", s2.name );
    printf("Roll No    = %d\n", s2.roll );
    printf("CGPA     = %f\n", s2.cgpa );
    return;
}
