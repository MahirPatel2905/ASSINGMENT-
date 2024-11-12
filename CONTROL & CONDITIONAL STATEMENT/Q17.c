//. Write a C program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter the three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180)
        printf("The angles form a triangle.\n");
    else
        printf("The angles do not form a triangle.\n");
        
    return 0;
}


