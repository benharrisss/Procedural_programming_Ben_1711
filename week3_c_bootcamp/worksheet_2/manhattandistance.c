#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double x;
    double y;
} POINT;

double compute_real_distance (double x, double y){
    if (x > y)
        return x - y;
    else 
        return y - x;
}

double compute_manhattan_distance(POINT p1, POINT p2){
    return compute_real_distance(p1.x, p2.x) + compute_real_distance(p2.y, p1.y);
}

int main(){
    int num_points = 10;
    int i;
    POINT coordinates [num_points];
    srand(0);
    for (i = 0; i < num_points; i++){
        coordinates[i].x = rand() / (double)RAND_MAX;
        coordinates[i].y = rand() / (double)RAND_MAX;
    }
    double total_manhattan_distance = 0;
    for (i = 0; i < num_points-1; i++){
        total_manhattan_distance += compute_manhattan_distance(coordinates[i], coordinates[i+1]);
    }
    printf("The average Manhattan distance is %.2lf\n", total_manhattan_distance / (num_points - 1));
    return 0;
}