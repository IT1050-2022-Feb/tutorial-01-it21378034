/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main(){
	int number,limit,count,sum=0;
	
	printf("Enter the limit:");//to enter the numbers limit
	scanf("%d",&limit);
	
	printf("Enter %d numbers:\n",limit);//to enter the number
	for(count=1;count<=limit;count++)//to count the loop
	{
		scanf("%d",&number);
		sum=sum+number;
	}
	printf("sum=%d",sum);//print the sum
	
	return 0;
}