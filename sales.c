/* Name: Victor Ndolo
   RegNo: CT101/G/26520/25
   A code to create a file to store transaction in a store
*/
#include <stdio.h>
#include <stdlib.h>
int main (){
	int transaction;
	float amount, total=0;
		
	 //  Create and write to sales.txt
	 FILE *fp;
    fp =fopen("C:\\Users\\V.MENDY 312\\OneDrive\\Documents\\Projects\\sales.txt", "w");
    if (fp == NULL) {
        printf("Error opening sales.txt");
        return 1;
    }
    // prompt the user to enter the number of transcations and the amount
    printf("Enter the number of transactions: ");
    scanf("%d", &transaction);
	    
    int i;
    for(i=0;i<transaction;i++){
		printf("Enter the amount for transction %d: ", i+1 );
		scanf("%f", &amount);
		fprintf(fp, "%.2f\n",amount); // write each amount to the file
	}
	fclose(fp);
	
	printf("\nTransactions saved successfully to sales.txt\n");
	
	fp = fopen("C:\\Users\\V.MENDY 312\\OneDrive\\Documents\\Projects\\sales.txt", "r");
    if (fp == NULL) {
        printf("Error reading sales.txt");
        return 1;
    }
    while(fscanf(fp, "%f", &amount) ==1) {
		total+=amount;
	}
	fclose(fp);
	printf("\nThe total sales of today: %.2f", total);
	
	return 0;
} 