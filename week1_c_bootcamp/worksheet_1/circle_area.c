#include<stdio.h>
int main() {
   
   //Gets the radius of the circle from user
   float radius;
   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   //Calculates the area of the circle and prints to screen
   float area = (radius * radius) * 3.14;
   printf("The area of the circle is %f squared times by 3.14 which gives %f\n", radius, area);
    return 0;
}