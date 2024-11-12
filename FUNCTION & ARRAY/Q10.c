//WAP to perform Palindrome number using for loop and function
#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;

    for (; num > 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    return reversed == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

