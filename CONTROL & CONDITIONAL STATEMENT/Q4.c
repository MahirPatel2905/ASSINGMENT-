//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
    scanf("%d", &choice);
    
    if (choice == 1)
        printf("Result: %d\n", num1 + num2);
    else if (choice == 2)
        printf("Result: %d\n", num1 - num2);
    else if (choice == 3)
        printf("Result: %d\n", num1 * num2);
    else if (choice == 4) {
        if (num2 != 0)
            printf("Result: %d\n", num1 / num2);
        else
            printf("Division by zero is not allowed.\n");
    } else if (choice == 5)
        printf("Result: %d\n", num1 % num2);
    else
        printf("Invalid choice.\n");
        
    return 0;
}

