// Write a C program to verify whether a given year is a leap year or not.

#include <stdio.h>
int main() {
    
    // Initializing variables.
    int year;

    // Prompt the user for input.
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year.
    if ( year % 400 == 0 && year % 4 == 0 || year % 100 != 0) {
        printf("%d is a leap year!\n", year);
      } else {
        printf("%d is not a leap year!\n", year);
      };
      return 0;
}
