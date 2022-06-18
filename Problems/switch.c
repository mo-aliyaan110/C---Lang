#include<stdio.h>

int main(){

    int day;
    printf("Enter your number of day of a week (1-7): ");
    scanf("%d", &day);

    switch (day) {

        case 1: printf("Its a sunday..! \n");
                break;
        case 2: printf("Monday \n");
                break;
        case 3: printf("Tuesday \n");
                break;
        case 4: printf("Wednesday \n");
                break;
        case 5: printf("Thursday \n");
                break;
        case 6: printf("Friday \n");
                break;
        case 7: printf("Saturday \n");
                break;
        default: printf("Its not any day in the week...!! \n");

    }
    return 0;
}