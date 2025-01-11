#include <stdio.h>
int main() {
    int expense1, expense2, expense3, expense4, expense5;
    int totalExpense, averageExpense;

    printf("Enter expense 1: ");
    scanf("%d", &expense1);
	printf("Enter expense 2: ");
    scanf("%d", &expense2);
	printf("Enter expense 3: ");
    scanf("%d", &expense3);
	printf("Enter expense 4: ");
    scanf("%d", &expense4);
	printf("Enter expense 5: ");
    scanf("%d", &expense5);

    totalExpense = expense1 + expense2 + expense3 + expense4 + expense5;
    averageExpense = totalExpense / 5;
    printf("\nTotal Expense: %d\n", totalExpense);
    printf("Average Expense: %d\n", averageExpense);

    return 0;
}

