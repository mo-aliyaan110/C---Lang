#include<stdio.h>

void printTables(int table[][10], int n, int m, int number );

int main(){
    int tables[6][10];
    printTables(tables, 0, 10, 5);
    // printTables(tables, 0, 10, 6);
    // printTables(tables, 2, 10, 7);
    // printTables(tables, 2, 10, 7);
    // printTables(tables, 2, 10, 7);
    return 0;
}

void printTables(int table[][10], int n, int m, int number){
    for (int i = 1; i <= m; i++){
        table[n][m] = number * i;
        printf("%d \t", table[n][m]);
    }
    printf("\n \n");
}


// #include<stdio.h>

// void printTables(int arr[][10], int n, int m, int number);

// int main(){
    
//     int tables[2][10];
//     printTables(tables, 0, 10, 8);
//     return 0;

// }

// void printTables(int arr[][10], int n, int m, int number ){
//         for (int i = 1; i <= 10; i++){
//             arr[m][n] = number * i;
//             printf("%d \t", arr[m][n]);
//         }
//         printf("\n\n");
// }