//Write a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month == 2)
        printf("28 or 29 days (February)\n");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("30 days\n");
    else if (month >= 1 && month <= 12)
        printf("31 days\n");
    else
        printf("Invalid month number.\n");

    return 0;
}

