#include <stdio.h>

int main(){
    float distance;
    int days;
    printf("Enter the distance travelled by light: ");
    scanf("%f", &distance);
    printf("Enter the amount of days: ");
    scanf("%d", &days);

    float result = distance / days;
    printf("%f", result);
    return 0;
}