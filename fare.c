/* Name:Victor Ndolo
   RegNo:CT101/G/26520/25
   A function to calculate the amount of fare
*/
#include <stdio.h>
//function protype
float calculateFare(float distance);

void main () {
	float totalFare;
	float distance;
	// promptin the user to enter the umber of kilometres disatance travelled
	printf("Enter the distance you travelled: ");
	scanf("%f", &distance);
	//function call
	totalFare=calculateFare(distance);
	printf("The total fare is KES %2.f.", totalFare); // printing the total fare in 2 decimal places
}

//function definition
float calculateFare(float distance) {
	float totalFare;
	totalFare=distance*50; 
	return totalFare;
}