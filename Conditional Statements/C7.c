// Write a C program to determine the smallest value from three numbers.

#include <stdio.h>
int main () {
    // Intializing variables.
    int a, b, c;
    // Prompt the user for inputs
    printf("Enter theree values for a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking conditions for A is the smallest number
    if (a <= b && a <= c) {
        printf("A is the smallest number!\n");
    }
    // Checking conditions for B is the smallest number
    else if (b <= a && b <= c) {
        printf("B is the smallest number!\n");
    }
    // Checking conditions for C is the smallest number
    else {
        printf("C is the smallest number!\n");
    }
    return 0;

}
