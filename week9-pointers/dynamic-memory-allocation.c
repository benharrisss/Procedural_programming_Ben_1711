#include <stdio.h>
#include <stdlib.h>

int main(){
    int array_size;
    printf("\n Input the size of the array = ");
    scanf("%d", &array_size);
    printf("\n\n");

    int* vector = (int *) malloc (sizeof(int)*array_size); //assigns vector as the pointer to a place in memory calculated with the usual size of an int * array_size || malloc assigns it in memory
    for (int i=0; i<array_size; i++){
        vector[i] = i*i;
    }
    for (int i=0; i<array_size; i++){
        printf("\nvector[%d] = %d\n", i, vector[i]);
    }

}