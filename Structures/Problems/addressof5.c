#include<stdio.h>
#include<string.h>

typedef struct addressof5{
    int house;
    int block;
    char city[100];
    char state[100];
} add5;

void printAdd(struct addressof5 graduated);

int main(){
    //1st
    add5 graduated[5];

    graduated[0].house = 35;
    graduated[0].block = 2;
    strcpy(graduated[0].city, "Gulbarga");
    strcpy(graduated[0].state, "Karnataka");

    graduated[1].house = 36;
    graduated[1].block = 4;
    strcpy(graduated[1].city, "Gulbarga");
    strcpy(graduated[1].state, "Karnataka");

    graduated[2].house = 38;
    graduated[2].block = 8;
    strcpy(graduated[2].city, "Gulbarga");
    strcpy(graduated[2].state, "Karnataka");

    graduated[3].house = 89;
    graduated[3].block = 7;
    strcpy(graduated[3].city, "Gulbarga");
    strcpy(graduated[3].state, "Karnataka");

    graduated[4].house = 99;
    graduated[4].block = 42;
    strcpy(graduated[4].city, "Gulbarga");
    strcpy(graduated[4].state, "Karnataka");
    
    
    // add5 cus2 = {25, 5, "Gulbarga", "Karnataka"};//2nd
    // add5 cus3 = {27, 6, "Gulbarga", "Karnataka"};//3rd
    // add5 cus4 = {29, 7, "Gulbarga", "Karnataka"};//4th
    // add5 cus5 = {37, 8, "Gulbarga", "Karnataka"};//5th

    //gap
    printf("\n\n\n");

    printAdd(graduated[0]);
    printAdd(graduated[1]);
    printAdd(graduated[2]);
    printAdd(graduated[3]);
    printAdd(graduated[4]);

    return 0;
}

void printAdd(struct addressof5 graduated){
    printf("Address information \n\n\n");
    printf("House Number = %d \n", graduated.house);
    printf("Block Number = %d \n", graduated.block);
    printf("City = %s \n", graduated.city);
    printf("State = %s \n", graduated.state);
    printf("\n\n\n");
}