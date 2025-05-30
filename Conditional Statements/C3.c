// Write a C program to determine whether a character is a vowel or a consonant.


#include <stdio.h>
int main () {
    char ch;
    // Prompt user for input
    printf("Entere a character: ");
    scanf("%c", &ch);
    // Check if the character is inside the range of alphabetic characters values of ASCII
    if ((ch >= 'a' && ch<= 'z' && ch>= 'A' && ch<= 'Z')) 
    {
        // Check if the character is a vowel
      if ( ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u') 
      {
          printf("%c is a vowel.\n", ch);
      }
      else {
          printf("%c is a consonant.\n", ch);
      }
    }
  else {
    printf("Not an alphabetic character.\n");
  }
  return 0;
}
