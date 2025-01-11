//.find the area of a Rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main() {
  int Length , Width , Height , Area;
  printf("\nEnter the Length of Rectangular prism: ");
  scanf("%d", &Length);
  printf("\nEnter the Width of Rectangular prism: ");
  scanf("%d", &Width);
  printf("\nEnter the Height of Rectangular prism: ");
  scanf("%d", &Height);

  Area = 2 * (Width*Length + Height*Length + Height*Width);
  printf("\nThe Area of Rectangular prism is: %d", Area);

  return 0;
}
