//
// Knowing that the highest common divisor for a and b can be determined with following function written in pseudocode:
//
// euclidFunction(n, m)
//    if m = 0
//        Euclid = n;
//    else
//        Euclid(m, n mod m);
//
// Create a function which uses the Euclid algorithm and check if it works for following numbers:
// a = 289, b = 850; a = 17, b = 72; a = 170, b = 850; a = 2890, b = 850
//
#include <stdio.h>

int euclid(int n, int m)
{
    if (m == 0) return n;
    else return euclid(m, n%m);
}
int main()
{
    int pairs[4][2] =
    {
        {289, 850},
        {17, 72},
        {178, 850},
        {2890, 850}
    };
    for (int i = 0; i < 4; i++)
        printf("%d\n", euclid(pairs[i][0], pairs[i][1]));
}

