#include <stdio.h>

#define MINNUM 100
#define MAXNUM 105

int main()
{
    int i;

    for(i = MINNUM; i <= MAXNUM; i++)
    {
        int perfectdivisor;

        for(perfectdivisor = 2; perfectdivisor < i; perfectdivisor++)      //exluded 1 because its a perfect divider for all numbers
        {
            if(i % perfectdivisor == 0)
            {
                printf("%d is a perfect divisor for %d\n", perfectdivisor, i);
            }
        }
    }
}