#include <stdio.h>

int main() {
    int years, days;
    float convertedYears;

    
    printf("Enter the number of years: ");
    scanf("%d", &years);
    days = years * 365; 
    printf("%d years is approximately %d days.\n", years, days);

   
    printf("Enter the number of days: ");
    scanf("%d", &days);
    convertedYears = days / 365.0; 
    printf("%d days is approximately %.2f years.\n", days, convertedYears);

    return 0;
}

