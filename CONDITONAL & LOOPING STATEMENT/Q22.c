//C Program to Reverse a Number Using FOR Loop
#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int original = num; original > 0; original /= 10) {
        reversed = reversed * 10 + (original % 10);
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}

