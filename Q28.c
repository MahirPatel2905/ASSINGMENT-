
#include <stdio.h>

int main() {
    int years, days, months;
	
	printf("Enter the number of years: ");
    scanf("%d", &years);
	months = years * 12;
    days = years * 365;

    
    printf("%d years is approximately %d months and %d days.\n", years, months, days);

    return 0;
}

