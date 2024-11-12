//.Find circumference of square formula : C = 4 * a
#include<stdio.h>
int main() {
  int Length , Circumference;

  printf("Enter the Length of Square: ");
  scanf("%d", &Length);

  Circumference = 4 * Length;
  printf("\nThe Circumference of Square is: %d",Circumference);

  return 0;
}
