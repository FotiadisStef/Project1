#include <stdio.h>

#define MAXNUMBER 100

int main()
{
    int i;
    for (i = 2; i <= MAXNUMBER; i++)
    {
        int divisor;

        for (divisor = 2; divisor <= i; divisor++)
        {
            if (i % divisor == 0)
            {
                break;
            }
        }
        if (i == divisor)
        {
            printf("%d is a prime number.\n", i);
        }
    }
}