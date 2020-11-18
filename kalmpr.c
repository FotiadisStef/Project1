#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MINNUM 100
#define MAXNUM 100000
#define MAXK 4

int main()
{
    int i;

    for (i = MINNUM; i <= MAXNUM; i++)
    {
        for (int divisor = 2; divisor <= i / 2; divisor++) //exluded 1 because its a perfect divider for all numbers
        {
            if (i % divisor == 0)
            {
                int isPrime = 1; //edw upothetw

                for (int divisor2 = 2; divisor2 <= divisor / 2; divisor2++)
                {
                    if (divisor % divisor2 == 0)
                    {
                        isPrime = 0;
                    }
                }

                if (isPrime == 1)
                {
                    printf("%d is a prime divisor of %d\n", divisor, i);
                }
            }
        }
    }
}