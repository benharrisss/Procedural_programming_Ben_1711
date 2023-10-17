#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num % 2;
    if (result == 0)
    {
        printf("%d is even\n", num);
    }
    else 
    {
        printf("%d is odd\n", num);
    }
    return 0;
}