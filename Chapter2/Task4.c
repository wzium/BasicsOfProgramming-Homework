//
// Create a program which calculates the absolute value of an entered number.
//
#include <stdio.h>
#include <math.h>

int main()
{
    float input;
    float end_value;
    printf("Enter a number\n");
    scanf("%f", &input);
    end_value = pow(input, 2);
    end_value = sqrt(end_value);

    printf("Absolute value of your number equals %f", end_value);
}
