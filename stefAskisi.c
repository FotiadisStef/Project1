#include <stdio.h>

#define MINNUM 1
#define MAXNUM 100
#define MAXK 4

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
                int isPrime = 1;

                for (int divisorOfDivisor = 2; divisorOfDivisor <= divisor / 2; divisorOfDivisor++)
                {
                    if (divisor % divisorOfDivisor == 0)
                    {
                        isPrime = 0;
                    }
                }

                if (isPrime == 1)
                {
                    while (tempNum % divisor == 0)
                    {
                        tempNum = tempNum / divisor;
                        product = product * divisor;
                        countk++;
                        if (countk == 4)
                        {
                            break;
                        }
                    }

                    if (tempNum == 1)
                    {
                        // printf("Number: %d, is %d-prime\n", number, countk);
                    }
                }
            }
        }

        if (countk >= 2 && countk <= 4)
        {
            sum++;
        }
    }

    printf("The number of k-almost primes is %d\n", sum);
}