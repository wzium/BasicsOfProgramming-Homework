//
// Create a simple calculator which will perform basic math operations (+-*/) on two entered real numbers. Use switch.
// Prevent from dividing by 0.
//
#include <stdio.h>

int main()
{
    float number1;
    float number2;
    float result;
    int operator_case;
    char operator;
    printf("Enter the first number\n");
    scanf(" %f", &number1);
    printf("Select the operator (+, -, *, /)\n");
    scanf(" %c", &operator);
    if (operator == '+')
    {
        operator_case = 0;
    }
    else if (operator == '-')
    {
        operator_case = 1;
    }
    else if (operator == '*')
    {
        operator_case = 2;
    }
    else if (operator == '/')
    {
        operator_case = 3;
    }
    else
    {
        printf("You entered the wrong operator, try again.");
        return 0;
    }
    printf("Enter the second number\n");
    scanf(" %f", &number2);
    switch(operator_case)
    {
        case 0:
            result = number1 + number2;
            printf("%f + %f = %f", number1, number2, result);
            break;
        case 1:
            result = number1 - number2;
            printf("%f - %f = %f", number1, number2, result);
            break;
        case 2:
            result = number1 * number2;
            printf("%f * %f = %f", number1, number2, result);
            break;
        case 3:
            if (number2 == 0)
            {
                printf("You tried to divide by 0 which is impossible, try again.");
                break;
            }
            else
            {
                result = number1 / number2;
                printf("%f / %f = %f", number1, number2, result);
                break;
            }
    }
    return 0;
}

