#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double x;
    double y;
} POINT;

int main(){
    int num_points = 10;
    int i;

    POINT coordinates [num_points];
    for (i = 0; i < num_points; i++){
        coordinates[i].x = rand();
        coordinates[i].y = rand();
    }
    for (i = 0; i < num_points; i++){
        printf("(%.21lf, %.21lf)\n", coordinates[i].x, coordinates[i].y);
    }
    return 0;
}



