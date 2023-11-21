#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intialiseArray(int a[2][3]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            a[i][j] = rand() % 10;
        }
    }
}

void printArray(int a[2][3]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
             printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int a[2][3], int transpose[2][3]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            transpose[j][i] = a[i][j];
        }
    }    
}

int main(){
    int a[2][3];
    int transpose[2][3];

    srand(time(NULL));

    intialiseArray(a);

    printf("This is the array before the tranpose: \n");
    printArray(a);

    transposeMatrix(a, transpose);

    printf("This is the array after the tranpose: \n");
    printArray(transpose);
}