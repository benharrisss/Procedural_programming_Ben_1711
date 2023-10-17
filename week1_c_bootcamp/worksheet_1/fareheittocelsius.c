#include <stdio.h>

int main(){
    float fareheit;
    printf("Enter a temperature in fareheit");
    scanf("%f", &fareheit);

    float celsius = (fareheit -32) * (5 / 9);
    printf("%f", celsius);
    return 0;
}