#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intialiseArrayRandomA(int a[2][3]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            a[i][j] = rand() % 10;
        }
    }
}

void intialiseArrayRandomB(int b[3][2]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            b[i][j] = rand() % 10;
        }
    }
}

void multiplyArrays(int a[2][3], int b[3][2], int c[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
}

void printArrayA(int a[2][3]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void printArrayB(int b[3][2]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void printArrayB(int c[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[2][3];
    int b[3][2];
    int c[3][3];

    srand(time(NULL));

    intialiseArrayRandomA(a);
    intialiseArrayRandomB(b);

    multiplyArrays(a, b, c);

    printf("Array A is: \n");
    printArray(a);

    printf("Array B is: \n");
    printArray(b);

    printf("The multiplication of the elements of array A and array B is: \n");
    printArray(c);

    return 0;
}
