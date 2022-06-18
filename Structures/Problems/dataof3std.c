#include<stdio.h>
#include<string.h>

int main(){
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };

    struct student ali;
    struct student hana;
    struct student mohsin;

    
    strcpy(ali.name, "Aliyaan");
    ali.cgpa = 7.11;
    ali.roll = 35;

    strcpy(hana.name, "Hania");
    hana.cgpa = 8.11;
    hana.roll = 78;

    strcpy(mohsin.name, "Mohsin Yaba");
    mohsin.cgpa = 8.99;
    mohsin.roll = 90;

    printf("Name is %s \n", ali.name);
    printf("Roll no  is %d \n", ali.roll);
    printf("Cgpa is %f \n", ali.cgpa);

    printf("\n\n");

    printf("Name is %s \n", mohsin.name);
    printf("Roll no  is %d \n", mohsin.roll);
    printf("Cgpa is %f \n", mohsin.cgpa);

    printf("\n\n");

    printf("Name is %s \n", hana.name);
    printf("Roll no  is %d \n", hana.roll);
    printf("Cgpa is %f \n", hana.cgpa);

    printf("\n\n");

    return 0;
}