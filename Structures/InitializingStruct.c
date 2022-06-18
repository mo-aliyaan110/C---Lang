#include<stdio.h>

int main(){
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

    struct student s1 = {58, 7.6, "Aliyaan"};

    printf("Roll no = %d\n", s1.roll);
    printf("CGPA = %f\n", s1.cgpa);
    printf("Name = %s\n", s1.name);

    return 0;
}

