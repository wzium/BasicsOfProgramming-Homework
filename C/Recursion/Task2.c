//
// Create a program which calculates recursively the following string of numbers (n - natural number):
// Xn = Xn-1 + Xn-2; where X0 = 1; X1 = 1;
// Program should write down elements starting with n to m, and the number difference.
//
#include <stdio.h>

int fib(unsigned int startPoint)
{
    if (startPoint <= 1) return 1;
    return fib(startPoint -2) + fib(startPoint - 1);
}
void calculateFib(int startPoint, int endPoint)
{
    int i;
    for (i = startPoint; i <= endPoint; i++)
    {
        int result = fib(startPoint);
        int difference = fib(++startPoint) - result;
        printf("%d element equals %d, difference equals %d\n", i, result, difference);
    }
}
int main()
{
    calculateFib(1, 9);
    return 0;
}
