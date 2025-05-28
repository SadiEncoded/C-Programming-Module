// Write a C program to determine whether a number is positive or negative.
#include <stdio.h>
int main() {
  int number;
  // Prompt user for input
  printf("Enter an integer:");
  scanf("%d", &number);
  // Check if the number is positive
  if (number > 0) {
    printf("%d is a positive number.\n", number);
  }
  // Check if the number is negative
  else if (number < 0) {
    printf("%d is a negative number.\n", number);
  }
  // Check if the number is zero
  else {
    printf("%d is zero.\n", number);
  }
  return 0;
}
