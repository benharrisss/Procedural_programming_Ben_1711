#include <stdio.h>

int main(){
    int i = 1;

    for ( i = 1; i < 11; i++){
        int square = i * i;
        printf("%d\n", square);
    }
    return 0;
}