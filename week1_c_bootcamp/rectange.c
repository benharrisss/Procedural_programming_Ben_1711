#include <stdio.h>

int main()
{
    //Gets the width of rectangle from user
    float width;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    //Gets the length of the rectangle from user
    float length;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    //Calculates area and prints it to the screen
    float area = width * length;

    printf("The area of the rectangle is %f times %f which is %f\n", width, length, area);
    return 0;
}