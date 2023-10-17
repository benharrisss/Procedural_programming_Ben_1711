#include <stdio.h>

int main(){
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade < 50)
    {
        printf("Your grade is %d and you have failed\n", grade);
    }
    else if (grade >= 50 && grade < 70)
    {
        printf("Your grade is %d and you have passed\n", grade);
    }
    else
    {
        printf("Your grade is %d and you have a distinction\n", grade);
    }
    return 0;
}