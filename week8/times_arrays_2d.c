#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intialiseArrayRandom(int a[3][4]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            a[i][j] = rand() % 10;
        }
    }
}

void multiplyArrays(int a[3][4], int b[3][4], int c[3][4]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
}

void printArray(int a[3][4]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[3][4];
    int B[3][4];
    int C[3][4];

    srand(time(NULL));

    intialiseArrayRandom(A);
    intialiseArrayRandom(B);

    multiplyArrays(A, B, C);

    printf("Array A is: \n");
    printArray(A);

    printf("Array B is: \n");
    printArray(B);

    printf("The multiplication of the elements of array A and array B is: \n");
    printArray(C);

    return 0;
}
