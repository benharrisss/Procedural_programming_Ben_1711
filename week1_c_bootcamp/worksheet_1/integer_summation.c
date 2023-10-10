#include <stdio.h>

int main()
{
    //Gets the first number from user
    float num1;
    printf("Enter the first number: ");
    scanf("%f", &num1);

    //Gets the second number from user
    float num2;
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    //Calculates area and prints it to the screen
    float sum = num1 + num2;

    printf("The sum of %f and %f is %f\n", num1, num2, sum);
    return 0;
}