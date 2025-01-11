#include <stdio.h>

int main() {
    int Minutes , Seconds;
    float Hours;

    
    printf("Enter the number of Minutes: ");
    scanf("%d", &Minutes);

    
    Seconds = Minutes * 60;
    Hours = Minutes / 60;

   
    printf("%d minutes is equal to %d seconds and %.2f hours.\n", minutes, seconds, hours);

    return 0;
}

