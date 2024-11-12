//Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
int main() {
  int LengthA , LengthB , LengthC , Circumference;
  printf("\nEnter the LengthA of Triangle: ");
  scanf("%d", &LengthA);
  printf("\nEnter the LengthB of Triangle: ");
  scanf("%d", &LengthB);
  printf("\nEnter the LengthC of Triangle: ");
  scanf("%d", &LengthC);

  Circumference = LengthA + LengthB + LengthC;
  printf("\nThe Circumference of Triangle is: %d", Circumference);

  return 0;
}
