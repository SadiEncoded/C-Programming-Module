// Write a C program to determine whether a character is a vowel or a consonant.
// The program should handle both uppercase and lowercase letters.
// The program should also handle non-alphabetic characters gracefully.


#include <stdio.h>
#include <ctype.h>
int main() {
  char ch;
  // Input character
  printf("Enter a character: ");
  scanf("%c", &ch);
  // Convert character to lowercase for unformity
  ch = tolower(ch);
  // Check if the character is a vowel or consonant
  if( ch>= 'a' && ch<= 'z') {
    if(ch == 'a' || ch == 'e' || ch== 'i' || ch == 'o' || ch == 'u') {
      printf( "%c is vowel.\n", ch);
    }
    else {
      printf("%c is consonant. \n", ch);
    }
    }
    return 0;
    
  }
main();
