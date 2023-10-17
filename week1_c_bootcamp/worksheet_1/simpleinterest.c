#include <stdio.h>

int main(){
    float principal;
    float rate;
    int years;
    printf("Enter the given principal: ");
    scanf("%f", &principal);
    printf("Enter the interest rate: ");
    scanf("%f", &rate);
    printf("Enter the amount of years: ");
    scanf("%d", &years);

    float result = principal * rate * years;
    printf("%f", result);
}