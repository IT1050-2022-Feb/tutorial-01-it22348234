/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int i,number,input,sum=0;
  printf("Enter the number of numbers you want to add :");
  if(scanf("%d",&number)){};
  for(i=0;i<number;i++)
    {
      printf("Enter the number :");
      if(scanf("%d",&input)){};
      sum=sum+input;
    }
  printf("The total sum is %d",sum);
  return 0;
}

