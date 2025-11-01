/* Name:Victor Ndolo
   RegNo:CT101/G/26520/25
    A program to assign occupied and vacant rooms randomly accros the three branches
   and display the  the total of occupied rooms
 */
#include <stdio.h> 
#include <stdlib.h>//Includes rand() and srand() for random number generation
#include <time.h> //Includes time() for seeding randomness with current time

int main(){
	int chain[3][5][10];
	
	// seed the random number generator with current time
	srand(time(NULL));
	
	// Simulate occupancy data: 1 = occupied, 0 = vacant
	int branch,floor,room;
	int totalOccupied=0;
	for(branch=0;branch <3;branch++) {
		for(floor=0;floor <5;floor++) {
			for(room=0;room <10;room++) {
				chain[branch][floor][room]=rand() %2;
			}
		}
	}
	//counting the occupied and adding them accross the 3 branches
	for(branch=0;branch <3; branch++){		
		for(floor=0;floor<5;floor++) {		
			for(room=0;room<10;room++) {
				if (chain[branch][floor][room]==1) {
					totalOccupied++;
				}
			}
		}
	}
	//display the total number of occupied rooms accroos the 3 branches	
    printf("Total number of occupied rooms across all branches: %d Rooms\n", totalOccupied);
	
    return 0;
	}
	
