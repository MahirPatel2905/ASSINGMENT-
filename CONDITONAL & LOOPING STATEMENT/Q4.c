//WAP to print table up to given numbers

#include <stdio.h>
int main() {
    int n;

    printf("Enter a number to print tables up to: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nMultiplication Table of %d:\n", i);

        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}

