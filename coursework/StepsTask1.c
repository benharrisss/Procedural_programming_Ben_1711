#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    typedef struct{
	    char date[11];
	    char time[6];
	    char steps[10];  
    } FITNESS_DATA;

    char filename [] = "FitnessData_2023.csv";
    FILE *file = fopen (filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int numlines = 0;
    char record[100];
    FITNESS_DATA records[2000];

    while (fgets(record, 100, file) != NULL){
        char date[11];
        char time[6];
        char steps[10];
        tokeniseRecord(record, ",", date, time, steps);
        strcpy(records[numlines].date, date);
        strcpy(records[numlines].time, time);
        strcpy(records[numlines].steps, steps);
        numlines++;
    }
    printf("Number of records in the file: %d\n", numlines);

    for (int i = 0; i < 3; i++){
        printf("%s/%s/%s\n", records[i].date, records[i].time, records[i].steps);
    }
    
    fclose(file);
    return 0;

}
