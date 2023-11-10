#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
int numlines = 0;
char record[100];
FITNESS_DATA records[2000];


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }




// Complete the main function
int main() {
    char choice;

    do{
        printf("Menu Options:\n");
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the date and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n");

        printf("Enter Choice: ");
        scanf("%c*c", &choice);
        switch(choice)
        {
            case 'A':     printf("a\n");
            break;

            case 'B':     printf("b\n");
            break;

            case 'C':     printf("c\n");
            break;

            case 'D':     printf("d\n");
            break;

            case 'E':     printf("e\n");
            break;

            case 'F':     printf("f\n");
            break;

            case 'Q':     return 0;
            break;

            default:    printf("\nInvalid choice. Try again.\n");
            break;
    }
   }while (choice != 'Q');

}
