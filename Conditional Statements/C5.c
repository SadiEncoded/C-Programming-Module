// Write a C program to convert the temperature from Fahrenheit to Celsius and vice versa. Use the following formula: C/5=(F-32)/9
// Fahrenheit to Celcius

#include <stdio.h>
int main() {
    // Initializing variables F (Fahrenheit) & C (Celcius)
    float F, C;

    //Prompt user for input
    printf("Enter the Fahrenheit value: ");
    scanf("%f", &F);

    // Converting the value to Celcius using the formula of celcuius and fahrenheit
    C = (F-32)*5/9;
    
    // Output
    printf("The %.2f Fahrenheit value in Celcius is: %.2f", F, C);
    return 0;
}
