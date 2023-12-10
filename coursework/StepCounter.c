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

char line[buffer_size];
char filename[buffer_size];

int counter = 0;
int temp = 0;
int min_steps = 0;
int fewest_steps = 0;
int max_steps = 0;
int largest_steps = 0;


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
        choice = getchar();
        while (getchar() != '\n');
        switch(choice)
        {
            case 'A':
            case 'a':
                printf("Input filename: ");
                fgets(line, buffer_size, stdin);
                sscanf(line, " %s ", filename);
                FILE *input = fopen(filename, "r");
                if (!input)
                {
                    printf("Error: Could not find or open the file.\n");
                    return 1;
                }
                else
                {
                    printf("File successfully loaded.\n");
                }
            break;

            case 'B': 
            case 'b':
                counter = 0;
                while (fgets(line, buffer_size, input))
                {
                    tokeniseRecord(line, ",", records[counter].date, records[counter].time, records[counter].steps);
                    counter++;
                }
                printf("Total records: %d\n", counter); 
                   
            break;

            case 'C':
            case 'c':
                for (int i = 0; i < counter; i++)
                {
                    temp = atoi(records[i].steps);
                    if (i == 0)
                    {
                        min_steps = temp;
                    }
                    if (temp <= min_steps)
                    {
                        min_steps = temp;
                        fewest_steps = i;
                    }
                }
                printf("Fewest steps: %s %s\n", records[fewest_steps].date, records[fewest_steps].time);

            break;

            case 'D':
            case 'd':
                for (int i = 0; i < counter; i++)
                {
                    temp = atoi(records[i].steps);
                    if (temp >= max_steps)
                    {
                        max_steps = temp;
                        largest_steps = i;
                    }
                }
                printf("Largest steps: %s %s\n", records[largest_steps].date, records[largest_steps].time);

            break;

            case 'E':
            case 'e':
                 printf("e\n");
            break;

            case 'F':
            case 'f':
                 printf("f\n");
            break;

            case 'Q':
            case 'q':
                 return 0;
            break;

            default:    printf("\nInvalid choice. Try again.\n");
            break;
    }
   }while (choice != 'Q');

}
