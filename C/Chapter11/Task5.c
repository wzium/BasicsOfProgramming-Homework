//
// Create a program which breaks down the given number (integer) to bills and coins.
//
#include <stdio.h>

int main()
{
    int amount;
    int division;
    printf("Enter the value\n");
    scanf(" %i", &amount);
    division = amount / 200;
    printf("%i x 200\n", division);
    amount -= division*200;
    division = amount / 100;
    printf("%i x 100\n", division);
    amount -= division*100;
    division = amount / 50;
    printf("%i x 50\n", division);
    amount -= division*50;
    division = amount / 20;
    printf("%i x 20\n", division);
    amount -= division*20;
    division = amount / 10;
    printf("%i x 10\n", division);
    amount -= division*10;
    division = amount / 5;
    printf("%i x 5\n", division);
    amount -= division*5;
    division = amount / 2;
    printf("%i x 2\n", division);
    amount -= division*2;
    division = amount / 1;
    printf("%i x 1\n", division);
    amount -= division*1;
}
