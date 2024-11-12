//Write a C program to calculate profit and loss on a transaction 
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    profitOrLoss = sellingPrice - costPrice;

    if (profitOrLoss > 0)
        printf("Profit of %.2f\n", profitOrLoss);
    else if (profitOrLoss < 0)
        printf("Loss of %.2f\n", -profitOrLoss);
    else
        printf("No profit, no loss.\n");

    return 0;
}

