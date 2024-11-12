//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result: %.2f\n", result);
            } else {
                printf("Division by zero error.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


