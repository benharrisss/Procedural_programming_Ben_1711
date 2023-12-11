#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define buffer_size 100

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

char line[buffer_size];
char filename[buffer_size];
FitnessData records[2000];
int counter = 0;
char output_filename[150];

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}

void sortDescending(FitnessData *records, int counter)
{
    for (int i = 0; i < counter - 1; i++)
    {
        for (int j = 0; j < counter - 1; j++)
        {
            if (records[j].steps < records[j + 1].steps)
            {
                FitnessData temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }
}

int main() {
    printf("Enter filename: ");
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);
    FILE *input = fopen(filename, "r");
    if (!input)
    {
        printf("Error: Invalid file\n");
        return 1;            
    }

    while (fgets(line, buffer_size, input))
    {
        tokeniseRecord(line, ',', records[counter].date, records[counter].time, &records[counter].steps);
        counter++;
    }
    fclose(input);

    sortDescending(records, counter);

    sprintf(output_filename, "%s.tsv", filename);
    FILE *output = fopen(output_filename, "w");
    if (!output)
    {
        printf("Error when creating the output file");
        return 1;
    }

    for (int i = 0; i < counter; i++)
    {
        fprintf(output, "%s\t%s\t%d\n", records[i].date, records[i].time, records[i].steps);
    }
    fclose(output);

    printf("Data sorted and written to %s\n", output_filename);

    return 0;
}