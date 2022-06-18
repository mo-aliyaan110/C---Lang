#include<stdio.h>

int fibo( int n );

int main(){
    int result = fibo(10);
    printf("%d \n", result);

}

int fibo(int n){
    int Nm1, Nm2;
    
    for (int i = 2; i <= n; i++){
        // if (n == 0){
        //     break;
        // }
        // if (n == 1){
        //     break;
        // }
        if (i == n - 1 ){
            Nm1 = i;
        }
        if ( i == n - 2){
            Nm2 = i;
        }
    }
    int fibN = Nm1 + Nm2;
    printf("The value of Nm1 is %d \n", Nm1);
    printf("The value of Nm2 is %d \n", Nm2);
    return fibN;
}