#include <stdio.h>

int SphereVolume(float radius){
    float answer;
    answer = 1.33 * 3.14 * (radius * radius * radius);
    return answer;
}

int main(){
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    float answer = SphereVolume(radius);
    printf("The radius of the sphere is %f and the volume is %f\n", radius, answer);
}