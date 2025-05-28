// Write a C program to determine whether a number is odd or even.
#include <stdio.h>
int main() {
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
// Author: Md. Mahmudul Hasan Sadi
// Date: 2025-28-05
// Description: This program checks if a number is positive or negative based on user input.
