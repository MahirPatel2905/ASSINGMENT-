#include <stdio.h>

float calculatePremium(float salary) {
    float premiumRate;
    if (salary < 30000) {
        premiumRate = 0.03;  
    } else if (salary <= 50000) {
        premiumRate = 0.05;  
    } else {
        premiumRate = 0.07;  
    }

    return salary * premiumRate;
}

int main() {
    float salary, premium;
    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    premium = calculatePremium(salary);
    printf("The insurance premium based on the salary is: $%.2f\n", premium);

    return 0;
}

