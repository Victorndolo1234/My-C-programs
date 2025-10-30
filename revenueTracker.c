/* Name:Victor Ndolo
   RegNo:CT101/G/26520/25
   A program to track the hotel's  weekly revenue
 */

#include <stdio.h>
int main () {
	float revenue[7]; //1D arary to hold daily revenues
	float totalRevenue=0;
	float average;
	
	//A loop to prompt the user enter the revenues for all seven days
	int i;
	for(i=0;i<7; i++) {
		printf("Enter the revenue for day %d: ", i+1);
		scanf("%f", &revenue[i]);
		totalRevenue+=revenue[i]; // add the total of all revenues in seven days
	}
	// calulate the average
	average=totalRevenue/7;
	
	// print results
	printf("\nTotal weekly revenue is KES %.2f\n", totalRevenue);
	printf("The average daily revenue is KES %.2f\n",average);
 return 0;
}