#include <stdio.h>

int main(){
    char filename [] = "squares.dat";
    FILE *file = fopen (filename, "w");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int n;
    printf("How many squared numbers do you want: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        fprintf(file, "%d\n", (i*i));
    }

    fclose(file);
    return 0;
}
    