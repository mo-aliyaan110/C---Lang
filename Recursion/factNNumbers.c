#include<stdio.h>

int factt(int num);

int main(){
    printf(" The factorial is = %d \n", factt(4));
    return 0;
}

int factt(int num){
    if (num == 1 ){
        return 1;
    }

    int factNm1 = factt( num-1 );
    int factNum = factNm1 * num;
    return factNum;
    // int fact = 1;
    // int fact =  factt(num-1) * fact ;
    // int finalResult = fact * num;
    // return finalResult;

}