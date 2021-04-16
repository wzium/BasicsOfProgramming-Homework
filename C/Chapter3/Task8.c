//
// Create a program which checks if the input number is even (use "%").
//
#include <stdio.h>

int main()
{
    int input;
    int modulo;
    printf("Enter a number\n");
    scanf("%i", &input);
    modulo = input % 2;
    if (modulo == 0)
    {
        printf("Entered number is even.");
    }
    else
    {
        printf("Entered number is not even.");
    }
}
