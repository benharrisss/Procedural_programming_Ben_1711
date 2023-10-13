#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;
    printf("What number would you like to find the factorial of: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        factorial = i * factorial;
    }

    printf("The result of the factorial is %d", factorial);
}