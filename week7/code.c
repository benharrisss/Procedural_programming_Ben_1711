#include "utilities.h"

int main()
{
    // array of daily readings
    reading daily_readings[100];

    char line[buffer_size];
    char filename[buffer_size];

    // get filename from the user
    printf("Please enter the name of the data file: ");

    // these lines read in a line from the stdin (where the user types)
    // and then takes the actual string out of it
    // this removes any spaces or newlines.
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    int counter = 0;
    float mean = 0;
    float temp = 0;
    float max = 0;
    float min = 0;
    char specmonth[4];
    char *check;

    while (1)
    {
        FILE *input = fopen(filename, "r");
        if (!input)
        {
            printf("Error: File could not be opened\n");
            return 1;
        }

        printf("A: View all your blood iron levels\n");                       // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your lowest blood iron level\n");                     // SILVER
        printf("D: View your highest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');


        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                // split up the line and store it in the right place
                // using the & operator to pass in a pointer to the bloodIron so it stores it
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                counter++;
            }
            for (int i = 0; i < counter; i++)
            {
                printf("%s - Blood iron: %.1f\n", daily_readings[i].date, daily_readings[i].bloodIron);
            }
            fclose(input);
            break;

        case 'B':
        case 'b':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                // split up the line and store it in the right place
                // using the & operator to pass in a pointer to the bloodIron so it stores it
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                mean += daily_readings[counter].bloodIron;
                counter++;
            }
            mean /= counter;
            printf("Your average blood iron was %.2f\n", mean);
            fclose(input);
            break;

        case 'C':
        case 'c':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                // split up the line and store it in the right place
                // using the & operator to pass in a pointer to the bloodIron so it stores it
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                counter++;
            }
            for (int i = 0; i < counter; i++)
            {
                temp = daily_readings[i].bloodIron;
                if i == 0
                {
                    min = temp;
                }
                if temp =< min
                {
                    min = temp;
                }
            }
            printf("Your lowest blood iron level is %f", min);    

            return 0;
            break;

        case 'D':
        case 'd':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                // split up the line and store it in the right place
                // using the & operator to pass in a pointer to the bloodIron so it stores it
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                counter++;
            }
            for (int i = 0; i < counter; i++)
            {
                temp = daily_readings[i].bloodIron;
                if temp >= max
                {
                    max = temp;
                }
            }
            printf("Your highest blood iron level is %f", max);  
            return 0;
            break;

        case 'E':
        case 'e':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                // split up the line and store it in the right place
                // using the & operator to pass in a pointer to the bloodIron so it stores it
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                counter++;
            }
            printf("Enter a month from which you want to view blood iron levels from: ");
            scanf("%s", specmonth);
            putchar(toupper(specmonth));

            if (specmonth == "SEP")
            {
                for (int i = 0; i < counter; i++)
                {   
                    check = strstr(daily_readings[i].date, "SEP");
                    if (check)
                    {
                        printf("Date - %s, Blood Iron - %f", daily_readings[i].date, daily_readings[i].bloodIron);
                    }
                }
            }
            else if (specmonth == "OCT")
            {
                for (int i = 0; i < counter; i++)
                {   
                    check = strstr(daily_readings[i].date, "OCT");
                    if (check)
                    {
                        printf("Date - %s, Blood Iron - %f", daily_readings[i].date, daily_readings[i].bloodIron);
                    }
                }
            }
            else if (specmonth == "NOV")
            {
                for (int i = 0; i < counter; i++)
                {   
                    check = strstr(daily_readings[i].date, "NOV");
                    if (check)
                    {
                        printf("Date - %s, Blood Iron - %f", daily_readings[i].date, daily_readings[i].bloodIron);
                    }
                }
            }
            else
            {
                printf("Invalid input, program expects *** input, e.g. SEP for September");
            }
            return 0;
            break;

        case 'F':
        case 'f':
            return 0;
            break;

        case 'G':
        case 'g':
            return 0;
            break;

        case 'Q':
        case 'q':
            quit()
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}