/* NAME:VICTOR NDOLO
   REGNO:CT101/G/26520/25
   A Program to print numbers from 100 to 50
*/

#include <stdio.h>

int main() {
    int i=100; //declaring the starting point

    do {
        printf("%d ", i); i--; // printing the numbers in a decreasing mode

    } while(i>=50); // condtion for printing the numbers..stops when reaches to 50

    return 0;
}
