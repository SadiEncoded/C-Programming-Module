// Area of a triangle is given by the formula A = √(s(s-a)(s-b)(s-c)) where a, b, c are sides of the triangle and a + b + c = 25. Write a C program to compute the area of the triangle given the values of a, b, and c.

#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c, Area;
    
    //Prompt user for input
    printf("Enter the value of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perameter
        float S = (a + b + c)/ 2;
        // Calculate the  area using Heron's formula
        Area = sqrt(S * (S-a) * (S-b) * (S-c));
        // Print the area of the triangle
        printf("The area of the triangle is: %.2f\n", Area);
    }
    else {
        printf( "The given values of sides do not form a valid trianngle.\n");
    }
    return 0;
}
