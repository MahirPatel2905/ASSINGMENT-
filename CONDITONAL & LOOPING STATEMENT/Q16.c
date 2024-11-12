//16. Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a number to calculate the sum of natural numbers up to that number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of natural numbers up to %d is %d\n", n, sum);
    return 0;
}

