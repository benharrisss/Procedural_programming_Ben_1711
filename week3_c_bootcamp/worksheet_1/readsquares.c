#include <stdio.h>
#include <stdlib.h>

int main(){
    char filename [] = "squares.dat";
    FILE *file = fopen (filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }
    int total = 0;
    int num = 0;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL){
        int num = atoi(line_buffer);
        int total = total + num;
        printf("%s", line_buffer);
    }
    float average = (total / 6);
    printf("The avergae is %f\n", average);

    fclose(file);
    return 0;
}    