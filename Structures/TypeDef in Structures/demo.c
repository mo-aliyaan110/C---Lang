#include<stdio.h>

int main(){
    typedef struct computerEngineeringStudent{
        char name[100];
        int roll;
        float cgpa;
    } coe;

    //initialization
    coe student1 = {"Aliyaan", 35, 7.11};

    //printing

    printf("Name is %s \n", student1.name);
    printf("Roll is %d \n", student1.roll);
    printf("CGPA is %f \n", student1.cgpa);
    return 0;
}