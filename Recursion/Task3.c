//
// Create a program which uses the recursive function to display a following half-pyramid:
// 12345
// 1234
// 123
// 12
// 1
// Function will use the argument to define the height of the pyramid.
//
#include <stdio.h>

void printNumbersTo(int maxValue, int startValue)
{
    printf("%d", startValue);
    if (startValue < maxValue)
        printNumbersTo(maxValue, ++startValue);
}
void drawPyramid(int height)
{
    int pyramidBase = 1;
    for (int i = height; i >= pyramidBase; --i)
    {
        printNumbersTo(i, pyramidBase);
        printf("\n");
    }
}
int main()
{
    drawPyramid(5);
    return 0;
}