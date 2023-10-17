#include <stdio.h>

int main(){
    int choice;
    printf("Enter your choice of 5 menu options");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:     printf("Option 1 has been selected"); break;

        case 2:     printf("Option 2 has been selected"); break;

        case 3:     printf("Option 3 has been selected"); break;

        case 4:     printf("Option 4 has been selected"); break;

        case 5:     printf("Option 5 has been selected"); break;

        default:     printf("Error, Invalid choice"); break;
    }
    return 0;
}