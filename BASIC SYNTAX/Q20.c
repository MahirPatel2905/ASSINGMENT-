#include <stdio.h>

int main() {
    int monthlySalary, insuranceDeduction, loanDeduction, remainingSalary;

    printf("Enter the monthly salary: ");
    scanf("%d", &monthlySalary);

    insuranceDeduction = monthlySalary * 0.10;  
    loanDeduction = monthlySalary * 0.10;       
    remainingSalary = monthlySalary - (insuranceDeduction + loanDeduction);

    printf("Monthly Salary: %d\n", monthlySalary);
    printf("Insurance Deduction (10%%): %d\n", insuranceDeduction);
    printf("Loan Deduction (10%%): %d\n", loanDeduction);
    printf("Remaining Salary: %d\n", remainingSalary);

    return 0;
}

