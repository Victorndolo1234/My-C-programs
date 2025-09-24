/* NAME:Victor Ndolo
   REGNO:CT101/G/26520/25
   program to check loan qualifiers
*/
#include <stdio.h>

int main() {
    int age;
    double income;
    
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%lf", &income);
    
    if(age>=21 && income>=21000){
    printf("\nCongratulations you qualify for the loan.");
    }else{
        printf("\nUnfortunately,we are unable to offer you a loan at this time.");
    }

    return 0;
}