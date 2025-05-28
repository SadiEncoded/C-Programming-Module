//Area of a triangle is given by the formula A = √(s(s-a)(s-b)(s-c)) where a, b, c are sides of the triangle and a + b + c = 25. Write a C program to compute the area of the triangle given the values of a, b, and c.

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, s, area;

    // Input sides of the triangle
    printf("Enter the lengths of sides a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Check if the input is valid
        if (a+b > c && b+c > a && a+c > b && (a + b + c == 25)) 
        {
            // Calculate area using Heron's formula
              area = sqrt(s * (s - a) * (s - b) * (s - c));
            // Output the area
              printf("The area of the triangle is: %.2f\n", area);
          }
    else {
        printf("Invalid triangle sides. \n");
    }
  return 0;

}
