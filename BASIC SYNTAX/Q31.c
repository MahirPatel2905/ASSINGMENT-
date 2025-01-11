#include <stdio.h>

int main() {
    float Kilometers , Meters;

    
    printf("Enter the distance in Kilometers: ");
    scanf("%f", &Kilometers);

    Meters = Kilometers * 1000;

    
    printf("%.2f Kilometers is equal to %.2f Meters.\n", Kilometers, Meters);

    return 0;
}

