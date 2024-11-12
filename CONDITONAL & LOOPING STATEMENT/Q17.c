//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>

int main() {
    int count = 0, num, evenCount = 0, oddCount = 0;

    printf("Enter 5 numbers:\n");
    while (count < 5) {
        printf("Number %d: ", count + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        count++;
    }

    printf("\nNumber of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}

