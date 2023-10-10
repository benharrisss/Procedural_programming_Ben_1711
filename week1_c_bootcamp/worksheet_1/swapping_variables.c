#include<stdio.h>
int main() {
    
    float first;
    printf("Enter the first number: ");
    scanf("%f", &first);

    float second;
    printf("Enter the second number: ");
    scanf("%f", &second);

    float temp = first;
    first = second;
    second = temp;

    printf("After swapping the first number with the second, %f becomes %f\n", first, second);
    printf("After swapping the second number with the first, %f becomes %f\n", second, first);

    return 0;
}