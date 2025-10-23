/* Name:Vicor Ndolo
  RegNO:CT101/G/26520/25
  A function to convert temperature from fahrenheit to celsius
*/
#include <stdio.h>
//function prototype
float convertToCelsius (float fahrenheit);
void main (){
	float celsius;
	float fahrenheit;
	printf("Enter the temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);
	//function call
	celsius= convertToCelsius(fahrenheit);
	printf("The temperature in celsius is %.1fC\n", celsius);
	
}

//function definition
float convertToCelsius (float fahrenheit ){
	float celsius;
	celsius=(fahrenheit-32)*5/9;
	return celsius;
}