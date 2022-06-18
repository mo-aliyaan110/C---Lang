#include<stdio.h>
 
int sumN(int n); 

int main(){
    printf(" The sum is = %d \n", sumN(8));
    return 0;
}

int sumN( int n ){

        if (n == 0){
            return 0;
        }

        int sumNm1 = sumN(n-1);
        int finalSum = sumNm1 + n;
        return finalSum;
    
}