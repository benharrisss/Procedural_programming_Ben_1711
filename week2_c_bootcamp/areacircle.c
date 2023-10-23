#include <stdio.h>

int circleArea(float radius){
    float answer;
    answer = (radius * radius) * 3.14;
    return answer;
}

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float answer = circleArea(radius);
    printf("The radius of the circle is %f and the area is %f\n", radius, answer);
}