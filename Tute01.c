/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1,mark2,average;

  printf("PLEASE ENTER YOUR FIRST MARK:");//to enter the first mark
  scanf("%d",& mark1);
  printf("PLEASE ENTER YOUR SECOUND MARK:");//to enter the secound mark
  scanf("%d",& mark2);
   
  average=(mark1+mark2)/2;//to calculate the average 

  printf("YOUR AVERAGE IS:%d",average);//print the average 

  return 0;
}

