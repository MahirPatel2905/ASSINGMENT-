//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>

int main() {
    float height;
    printf("Enter height in cm: ");
    scanf("%f", &height);

    if (height < 150)
        printf("Short\n");
    else if (height <= 180)
        printf("Average\n");
    else
        printf("Tall\n");
        
    return 0;
}

