/* Name:Vicor Ndolo
  RegNO:CT101/G/26520/25
  A function to calculate the electric bill
*/
#include <stdio.h>
//function prototype
float calculateElectricBill(float units);
void main ()  {
	float totalAmount;
	float units;
	//prompt the user to enter the number of consumed units
	printf("Enter the no. of units: ");
	scanf("%f", &units );
	totalAmount =calculateElectricBill(units); // here is where we call the function
	printf("The total amount is KES %2.f", totalAmount );	//diplaying the amount it 2 decimal places
}

//function declaration

float calculateElectricBill(float units) {
	float totalAmount;
	if (units <=100){
		totalAmount= units*10;
	}
	else if(units<=200) {
		totalAmount=(100*10)+((units-100)*15);
	}
	else{
		totalAmount=(100*10)+(100*15)+((units-200)*20);
	}
	return totalAmount;
}