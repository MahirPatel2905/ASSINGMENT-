#include <stdio.h>

int main() {
    int monthlySalary, annualSalary;

    printf("Enter the person's monthly salary: ");
    scanf("%d", &monthlySalary);

    annualSalary = monthlySalary * 12;
    printf("The person's annual salary is: $%d\n", annualSalary);

    return 0;
}
