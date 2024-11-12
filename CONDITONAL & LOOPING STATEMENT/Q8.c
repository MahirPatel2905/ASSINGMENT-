//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>

int main() {
    int num, maxDigit = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        num /= 10;
    }

    printf("Maximum digit = %d\n", maxDigit);
    return 0;
}

