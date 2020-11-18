#include <stdio.h>

#define MINNUM 100
#define MAXNUM 10000

int main()
{
    int i, divisor, count;

    for (i = MINNUM; i <= MAXNUM; i++)
    {
        count = 2;
        for (divisor = 2; divisor * divisor < i; divisor++)
        {
            if (i % divisor == 0)
            {
                count += 2;
            }
        }

        if (divisor * divisor == i)
        {
            count += 1;
        }
        printf("Number of divisors for %d is %d\n", i, count);
    }
}