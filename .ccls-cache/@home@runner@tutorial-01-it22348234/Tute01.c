/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2;
  float avg;
  printf("Enter the mark 1 :");
  if(scanf("%d",&num1)){};
  printf("Enter the mark 2 :");
   if(scanf("%d",&num2)){};
  avg=num1+num2;
  printf("The avarage is %f",avg/2);
  return 0;
}

