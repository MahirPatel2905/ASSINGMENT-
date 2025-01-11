#include <stdio.h>
int main() {
    float Days, Months;

    printf("Enter No. Of Days is : ");
    scanf("%f", &Days);
	Months = Days / 30;
	printf("No. Of Months is : %.2f\n", Months);

    return 0;
}

