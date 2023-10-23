#include <stdio.h>

int isprime(int num){
    int flag;
    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 9 == 0){
        flag = 1;
    } else {
        flag = 0;
    }
    return flag;
}

int main(){
    int flag;
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int answer = isprime(num);
    if (answer == 1){
        printf("The number %d is not prime number", num);
    } else if (answer == 0) {
        printf("The number %d is a prime number", num);
    } else {
        printf("Error");
    }
          
}