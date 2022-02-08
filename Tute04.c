/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
  
}
int minimum(int no1,int no2)//to minimum
{
	int minimum=no1-no2;
	return minimum;
}
int maximu (int no1,int no2)//to maximum
{
	int maximum=no1+no2;
	return maximum;
}
int multiply (int no1,int no2)//to multiply
{
	int multiply=no1*no2;
	return multiply;
}
