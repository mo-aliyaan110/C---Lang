#include<stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    /* 
    In the below we have seen the ternary operator...!!
    */
      age >= 18 ? printf("Adult \n") : printf("Not adult \n");

    /* 
    Below we have seen the if else condition..!!!

    */

    // if(age >= 18){
    //     printf("Adult \n");
    // }
    // else if(age >= 13 && age < 18){
    //     printf("Teenager...! \n");
    // }
    // else{
    //     printf("Child...!!! \n");
    // }
    return 0;
}