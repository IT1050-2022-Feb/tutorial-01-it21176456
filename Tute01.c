/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1;
  int mark2;
  float average=0;

  printf("enter the mark1:");
  scanf("%d",&mark1);

  printf("enter the mark2:");
  scanf("%d",&mark2);

  average=(float)(mark1+mark2)/2.0;

  printf("average: %.1f",average);
  return 0;
}

