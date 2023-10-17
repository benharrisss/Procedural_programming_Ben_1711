#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Your number is zero\n");
    }
    else if (num > 0)
    {
        printf("Your number is %d and is positive\n", num);
    }
    else
    {
        printf("Your number is %d and is negative\n", num);
    }
    return 0;
}