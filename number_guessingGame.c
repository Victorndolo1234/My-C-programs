/* NAME: VICTOR NDOLO
   REGNO: CT101/G/26520/25
   A NUMBER GUESSING GAME
*/

#include <stdio.h>      // For input/output functions
#include <stdlib.h>     // For rand() and srand()
#include <time.h>       // For time() to seed random number generator

int main() {
    srand(time(0));  // to seed random number generator with current time to produce randomn numbers each time it runs

    int correctGuess, guess;
    char playAgain = 'y';        // Control variable to repeat the game

    printf("Welcome to Mendy's number guessing game..Hope you will enjoy it\n");

    // Outer loop: continues as long as the user wants to play again
    while (playAgain == 'y' || playAgain == 'Y') {
        correctGuess = rand() % 20 + 1;  /*Generates a random number between 1 and 20.the plus one is because when it
        									 20% it will print upto to 19 because of the null digit so we have to add one
  									      */

        printf("\nHey guess which number I'm thinking now? (1-20)\n");

        // Inner loop: keeps asking for guesses until the correct number is guessed
        while (1) {
            printf("Enter the number you have guessed: ");

            // Validating if the number is a integer ranges between 1 and 20
            if (scanf("%d", &guess) != 1 || guess < 1 || guess > 20) {
                printf("Invalid guess..Please enter only numbers from 1 to 20.\n");

                // Clear input buffer to remove invalid characters
                while (getchar() != '\n');
                continue;  // Skip rest of loop and prompt again
            }

            // Check if guess is correct
            if (guess == correctGuess) {
                printf("Congratulations! The correct number was %d\n", correctGuess);
                break;  // Exit inner loop
            } else if (guess < correctGuess) {
                printf("Too low!! Try again!\n");
            } else {
                printf("Too High!! Try again!\n");
            }
        }

        // Ask user if they want to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);  // Note the space before %c to consume any leftover newline
    }

    // Exit message
    printf("Thanks for playing Mendy's guessing game\n");

    return 0;  // End of program
}
