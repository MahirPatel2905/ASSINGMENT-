#include <stdio.h>
int main() {
    char name1[50], name2[50], name3[50], name4[50], name5[50];
    int salary1, salary2, salary3, salary4, salary5;
    int totalSalary, averageSalary;
    
    printf("Enter the name of employee 1: ");
    scanf("%s", name1);
    printf("Enter the salary of %s: ", name1);
    scanf("%d", &salary1);
	printf("Enter the name of employee 2: ");
    scanf("%s", name2);
    printf("Enter the salary of %s: ", name2);
    scanf("%d", &salary2);
	printf("Enter the name of employee 3: ");
    scanf("%s", name3);
    printf("Enter the salary of %s: ", name3);
    scanf("%d", &salary3);
	printf("Enter the name of employee 4: ");
    scanf("%s", name4);
    printf("Enter the salary of %s: ", name4);
    scanf("%d", &salary4);
	printf("Enter the name of employee 5: ");
    scanf("%s", name5);
    printf("Enter the salary of %s: ", name5);
    scanf("%d", &salary5);

    totalSalary = salary1 + salary2 + salary3 + salary4 + salary5;
    averageSalary = totalSalary / 5;

    printf("\nTotal Salary of all employees: %d\n", totalSalary);
    printf("Average Salary of employees: %d\n", averageSalary);

    return 0;
}

