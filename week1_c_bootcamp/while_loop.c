#include <stdio.h>

int main(){
    int a = 0;

    while(a < 5){
        printf("a is equal to %d\n", a);
        a++;
    }
    printf("I've finished the while loop and a is equal to %d\n", a);
    return(0);
}