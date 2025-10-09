/* NAME:VICTOR NDOLO
   REGNO:CT101/G/26520/25
   A PROGRAM TO PROMPT THE USER TO ENTER THE CORRECT PASSWORD
*/
#include <stdio.h>
int main () {
	int correctPassword=1234; // declaring the correct password
	int password;
	
	// looping untill the user enters the coreecr password
	do {	
		printf("Enter the system's password: ");
		
		//checking for if the input is numeric
		if (scanf("%d", &password) !=1) {
			while (getchar() != '\n'); // flushing the input to avoid garbange printing
			printf("Invalid input!!..Please enter a numeric password!!: ");
			continue; // skips the rest of the loop and prompts again
		}
		// checking if the password is correct
		if (password==correctPassword) {
			printf("\nAccess granted\n");
			break; // exit the loop if the password is correct
		}else{
			printf("Incorrect password...Try again\n");
		}
	}while(1); //infinite loop until the pasword is correct
	return 0;
}