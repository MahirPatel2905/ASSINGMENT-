//Find Area of Cube formula : a = 6a2
#include <stdio.h>
int main() {
	int side, area;
    printf("Enter the side of the cube: ");
    scanf("%d", &side);
    area = 6 * (side * side);
    printf("Area of the Cube having side %d is: %d", side, area);
    return 0;
}
