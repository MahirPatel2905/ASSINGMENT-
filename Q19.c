#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    rate = rate / 100;
    amount = principal * pow((1 + rate / n), n * time);
    compoundInterest = amount - principal;

    printf("The compound interest is: %.2f\n", compoundInterest);
    printf("The total amount after %.2f years is: %.2f\n", time, amount);

    return 0;
}

