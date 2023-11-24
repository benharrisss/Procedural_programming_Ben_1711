#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 4
#define COLS 5

void sumofmarks(int array[ROWS][COLS], int SummedMarks, int totalSum, int size){
    for (int i = 0; i < ROWS; i++){
        if (i > 0){
            printf("The sum of Student %d's marks are: %d", i, SummedMarks);
            SummedMarks = 0;
        }
        for (int j = 0; j < COLS; j++){
            SummedMarks = SummedMarks + array[i][j];
            totalSum = totalSum + array[i][j];
        }
    float average = totalSum / size;    
    printf("The average of total marks among all students was: %.2f", average);
    }
}


int main(){
    int array[ROWS][COLS];
    
    srand(time(NULL));

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; i++){
            array[i][j] = rand() % 26;
        }
    }

    int totalSum = 0;
    int SummedMarks = 0;
    sumofmarks(array, SummedMarks, totalSum, ROWS * COLS);

    return 0;
}