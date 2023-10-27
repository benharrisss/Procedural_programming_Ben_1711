#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double x;
    double y;
} POINT;

void fillPoints(POINT * pointarray){
    for (int i = 0; i < 11; i++){
        pointarray[i].x = rand();
        pointarray[i].y = rand();
    }
}

void printarray(POINT * pointarray){
    for (int i = 0; i < 11; i++){
        printf("%lf","%lf"\n, pointarray[i].x, pointarray[i].y);
    }

}

int main(){
    POINT pointarray[11]
    fillPoints(pointarray);
    printarray(pointarray);
    return 0;
}



