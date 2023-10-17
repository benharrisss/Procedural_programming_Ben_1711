#include <stdio.h>

int main(){
    float temp;
    printf("Enter a temperature: ");
    scanf("%f", &temp);

    if (temp >= 10 && temp <= 40)
    {
        printf("The temperature of %f is in range\n", temp);
    }
    else
    {
        printf("The temperature of %f is out of range\n", temp);
    }
    return 0;
}