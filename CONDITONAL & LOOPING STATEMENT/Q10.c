//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);
    return 0;
}

