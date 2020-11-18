#include <stdio.h>

#define MINNUM 1
#define MAXNUM 10
#define K_MAX 4

int main()
{
    int sum = 0;

    for (int number = MINNUM; number <= MAXNUM; number++)
    {
        int countk = 0;
        int tempNum = number;
        int product = 1;

        for (int divisor = 2; divisor <= number; divisor++)
        {

            if (number % divisor == 0)
            {
                int isPrime1 = 1;

                for (int divisorOfDivisor = 2; divisorOfDivisor <= divisor / 2; divisorOfDivisor++)
                {
                    if (divisor % divisorOfDivisor == 0)
                    {
                        isPrime1 = 0;
                    }
                }

                if (isPrime1 == 1)
                {
                }
            }
        }

        for (int divisor2 = 2; divisor2 <= number; divisor2++)
        {

            if (number % divisor2 == 0)
            {
                int isPrime2 = 1;

                for (int divisorOfDivisor = 2; divisorOfDivisor <= divisor2 / 2; divisorOfDivisor++)
                {
                    if (divisor2 % divisorOfDivisor == 0)
                    {
                        isPrime2 = 0;
                    }
                }

                if (isPrime2 == 1)
                {
                }
            }
        }

        for (int divisor3 = 2; divisor3 <= number; divisor3++)
        {

            if (number % divisor3 == 0)
            {
                int isPrime3 = 1;

                for (int divisorOfDivisor = 2; divisorOfDivisor <= divisor3 / 2; divisorOfDivisor++)
                {
                    if (divisor3 % divisorOfDivisor == 0)
                    {
                        isPrime3 = 0;
                    }
                }

                if (isPrime3 == 1)
                {
                }
            }
        }

        for (int divisor4 = 2; divisor4 <= number; divisor4++)
        {

            if (number % divisor4 == 0)
            {
                int isPrime4 = 1;

                for (int divisorOfDivisor = 2; divisorOfDivisor <= divisor4 / 2; divisorOfDivisor++)
                {
                    if (divisor4 % divisorOfDivisor == 0)
                    {
                        isPrime4 = 0;
                    }
                }

                if (isPrime4 == 1)
                {
                }
            }
        }
    }
}