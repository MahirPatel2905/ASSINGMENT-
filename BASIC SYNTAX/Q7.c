#include<stdio.h>
int main() {
  int Width , Length , Area;

  printf("Enter the Width of Rectrangale: ");
  scanf("%d", &Width);
  printf("Enter the Length of Rectrangale: ");
  scanf("%d", &Length);

  Area = Width * Length;
  printf("\nThe Area of Rectrangle is: %d", Area);

  return 0;
}
