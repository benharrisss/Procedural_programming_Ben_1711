#include <stdio.h>

int str_len(int i){
    printf("Enter a string: ");
    char str[50];
    scanf("%s", str);
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    int i = 0;
    i = str_len(i);
    printf("There are %d letters in that string\n", i);
}