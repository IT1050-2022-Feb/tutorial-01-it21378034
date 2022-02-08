/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include<stdio.h>
int main(){

int  distance,total1,total,exra_distance;

printf("The first 30 km is at a rate of 50/= per km.\n");
printf("The remaining distance is calculated at the rate of 40/= per km.\n");

printf("\nPlease Enter your distance:");
scanf("%d",&distance);
    if(distance<30){
		total=distance*50;//to calculate the first 30km
	    printf("Your total is :%d",total);//print the total for 30 km
		
    }
   else if(distance>30){
	    exra_distance = distance-30;//to calculate exra distance
   	    
	    printf("Your exra distance is :%d\n",exra_distance);//to show the exra distance
	    
	    total1=exra_distance*40+distance*30;//calculate the amount
	    printf("Your total is:%d",total1);//print the total
   }
   else{
   	printf("You Enter invalid data");// to show the error massage
   }
  
   
   
   return 0;
}