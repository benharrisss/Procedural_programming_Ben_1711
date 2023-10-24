#include <stdio.h>
#include <stdlib.h>

int main(){
    char filename [] = "numbers.dat";
    FILE *file = fopen (filename, "a+");
    if (file == NULL) {
        perror("");
        return 1;
    }

    float counter = 0;
    float total = 0;
    float num = 0;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL){
        float num = atof(line_buffer);
        printf("%f\n", num);
        total = total + num;
        counter = counter + 1;
    }
    float average = (total / counter);
    fprintf(file, "%f\n", (average));
    printf("%f\n", average);


    fclose(file);
    return 0;
}