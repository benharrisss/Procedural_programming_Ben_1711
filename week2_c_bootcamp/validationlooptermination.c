#include <stdio.h>

int main(){
    int num;
    bool termination = False;
    while (termination == False)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == -1)
        {
            printf("Termination value entered");
            termination = True;
        }
        else if (num >=0 && num <=100)
        {
            printf("The number %d is between 0 and 100");
            termination = True;
        }
        else 
        {
            termination = False;
        }
    }
}