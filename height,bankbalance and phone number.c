#include <stdio.h>

int main()
{
	int Height;
	double Bank_balance;
	char Phone_number[20];
	
	printf("Enter your height: ");
	scanf("%d", &Height);
	
	printf("Enter your bank balance: ");
	scanf("%lf", &Bank_balance);
	
	printf("Enter your phone number: ");
	scanf("%19s", Phone_number);
	
	printf("\nYour height is %d metres\n", Height);
	printf("Your bank balance is Ksh %.2lf\n", Bank_balance);
	printf("Your phone number is %s\n", Phone_number);
	
	return 0;
}