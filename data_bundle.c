/*	NAME:VICTOR NDOLO
	REGNO:CT101/G/26520/25
	A program to enable the user to purchase data of his/her own choice
*/
#include <stdio.h>
int main() {
	int option;
	
	printf("Select data bundle of your choice:\n");
	printf("1. 100MB @ 50  KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB   @ 350 KES\n");
	printf("4. 2GB   @ 600 KES\n");
	
	printf("\nEnter your option (1-4): ");
	scanf("%d", &option);
	
	switch (option) {
		case 1:
			printf("You selected 100MB. Cost = 50 KES\n");
			break;
		case 2:
			printf("You selected 500 MB. Cost = 200 KES\n");
			break;
		case 3:
			printf("You selected 1 GB. Cost =  350 KES\n");
			break;
		case 4:
			printf("You selected 2 GB. Cost = 600 KES\n");
			break;
		default:
			printf("Invalid choice!!\n");
			break;
		
	}
	return 0;
}