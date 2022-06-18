#include<stdio.h>

int main(){
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

    struct student s1 = {45, 9.2, "Aliyaan"};
    struct student *ptr = &s1;

    printf(" Name using (*ptr) = %s \n ", (*ptr).name);
    printf(" Roll = %d \n ", (*ptr).roll);
    printf(" CGPA = %f \n ", (*ptr).cgpa);

    printf("\n\n\n\n");

    printf(" Name using -> = %s \n ", ptr->name);
    printf(" Roll = %d \n ", ptr->roll);
    printf(" CGPA = %f \n ", ptr->cgpa);

    // (*ptr).roll, (*ptr).cgpa
    // Roll = %d\n Cgpa = %f\n"
    return 0;
}