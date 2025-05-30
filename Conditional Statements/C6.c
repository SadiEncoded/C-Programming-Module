// Write a C program to determine the largest value from three numbers.

#include <stdio.h>
int main() {

    // Initializing variables.
    int a, b, c;
    
    // Prompt the user for inputs
    printf("Enter three values for a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    //Checking conditions for A is the Lartgest number
    if ( a >= c && a >= b) {
        printf("A is the largest number!");
    }
    //Checking conditions for B is the Lartgest number
    else if (b >= a && b >= c) {
        printf("B is the Largest Number!");
    }
    //Checking conditions for C is the Lartgest number
    else {
        printf("C is the Largest Number!");
    }
  return 0;
}
