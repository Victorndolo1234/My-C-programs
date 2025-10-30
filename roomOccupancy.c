/* Name:Victor Ndolo
   RegNo:CT101/G/26520/25
    A program to assign occupied and vacant rooms randomly,
   and display the occupancy status for each floor in a 5-floor building.
 */
#include <stdio.h> 
#include <stdlib.h>//Includes rand() and srand() for random number generation
#include <time.h> //Includes time() for seeding randomness with current time

int main() {
	int occupancy[5][10]; // 5 floors × 10 rooms
	int occupied,vacant; // Counters for each floor's occupancy status
	
	// seed random number generator with current time
	srand(time(NULL));
	
    // Simulate occupancy data: 1 = occupied, 0 = vacant
    int floor,room; //declaring loop variables
    for(floor=0;floor<5;floor++) {
		for(room=0;room <10;room++) {
			occupancy[floor][room]=rand() % 2; // give each room a random 0 or 1
		}
	}
	// dispaly occupancy status per floor
	for(floor=0;floor<5;floor++){
		occupied=0; // reset the counter for current floor
		vacant=0;	
			
		 //counting the occupied and vacant rooms on each floor
		for(room=0;room <10; room++){
			if (occupancy[floor][room]==1)	{
				occupied++;
			}else{
				vacant++;
			}					
	    }
	    printf("Floor %d: occupied: %d, vacant: %d\n", floor+1,occupied,vacant);
	}
	return 0;
}