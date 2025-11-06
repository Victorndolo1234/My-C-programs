/* Name:Victor Ndolo
   RegNo:CT101/G/26520/25
   A code to create a file in order to store the book titles in a library
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int number;
    char title[300];

    // Open file in append mode
    FILE *fp = fopen("C:\\Users\\V.MENDY 312\\OneDrive\\Documents\\Projects\\borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter the number of books borrowed today: ");
    scanf("%d", &number);

    // Clear newline left by scanf
    getchar();
    int i;
    for ( i = 0; i < number; i++) {
        printf("Enter the title of book %d: ", i + 1);
        fgets(title, sizeof(title), stdin);

        // Remove trailing newline from fgets
        title[strcspn(title, "\n")] = '\0';

        // Write title to file
        fprintf(fp, "%s\n", title);
    }
    printf("\nAll book tittles are saved successfully in the file");

    fclose(fp);
    return 0;
}
