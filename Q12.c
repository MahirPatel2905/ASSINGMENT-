//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
int main() {
  int Num , Apples;

  printf("Enter the Number of Students: ");
  scanf("%d", &Num);

  Apples = 5 * Num;
  printf("\nThe Number of Apple required is: %d",Apples);

  return 0;
}
