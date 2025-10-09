/*	NAME:VICTOR NDOLO
	REGNO:CT101/G/26520/25
	A program to calculate water bill
*/

#include <stdio.h>
int main() {
	float units,total_bill;
	
	printf("Enter the number of water units used: ");
	scanf("%f", &units);
	
	if(units<=30) {
		total_bill=units*20;
	}
	else if(units>=31 && units<=60) {
		total_bill=units*25;
	}
	else{
		total_bill=units*30;
	}
	printf("\nTotal bill for water is %.2f KES\n", total_bill);
	return 0;
}
