#include <stdio.h>

char concatStrings(int x, int y, int z){
    char str3[100];
    char str1[] = "";
    char str2[] = "";
    printf("Enter 2 numbers you want to concatenate: ");
    printf("Enter the first number: \n");
    scanf("%s", str1);
    printf("Enter the second number: \n");
    scanf("%s", str2);
    while (str1[x] != '\0'){
        str3[y] = str1[x];
        x++;
        y++;
    }
    
    while (str2[z] != '\0'){
        str3[y] = str2[z];
        z++;
        y++;
    }

    str3[y] = '\0';
    return str3;
}

char main(){
    char str3[100];
    int x = 0;
    int y = 0;
    int z = 0;
    str3 = concatStrings(int x, int y, int z);
    printf("Your concatenated string is %s", str3);
    return 0;