/* NAME:VICTOR NDOLO
   REG NO:CT101/G/26520/25
   A PROGRAM TO CHECK IF THE STUDENT ELIGIBLE FOR EXAM
*/

#include <stdio.h>
int main() {
	float attendance,marks;
	
	printf("Enter your attedance percentange:");
	scanf("%f", &attendance);
	
	printf("Enter your marks: ");
	scanf("%f", &marks);
	
	if (attendance>=75 && marks>=40) {
		printf("\nEligible\n");
	}
	else{
		printf("\nNot eligible\n");
	}
	return 0;
}