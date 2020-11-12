//
// Create a function which writes down numbers from 1 to n where n > 1. Don't use loop.
//
#include <stdio.h>

void recursion(int n, int i)
{
    printf("%d\n", i);
    if (i < n)
        recursion(n, i++);
}
int main()
{
    int n;
    printf("Enter n > 1");
    scanf("%d", &n);
    recursion(n, 1);
    return 0;
}