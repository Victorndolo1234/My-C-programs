/* NAME:VICTOR MULE
   REGNO:CT101/G/26520/25
   A PROGRAM TO ALLOW WITHDRAW MONEY FROM BANK
*/
#include <stdio.h>

int main() {
	float balance,withdrawal,accountBalance;
	accountBalance=20000;
	
	//displaying the amount in the users account
	printf("Your account balance is %.2f KES\n", accountBalance);
	
	//loop continues as long as there is money int account
	while(accountBalance>0) {
		// prompt the user to enter the amount to withdraw
		printf("\nEnter the amount to withdraw: ");
		scanf("%f", &withdrawal);
		
		//check if withdrawal is within the available balance
		if (withdrawal<=accountBalance) {
			balance=accountBalance-withdrawal; // calculate new balance
			accountBalance=balance; // updates account balance
			printf("You have successfully withdrawn %2.f KES\n", withdrawal);
			printf("Your new balance: %2.f KES\n", balance);
		}else{
			printf("You have insufficient balance in your account\n");
			printf("Your balance: %2.f KES\n", accountBalance);
		}
	}
	printf("\nNo more withdrawals allowed!!\n");
	return 0;
}