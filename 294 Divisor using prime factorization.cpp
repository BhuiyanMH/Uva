#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long int totalDivisor(long int);

int main()
{
    int testCase;

    long int lowerRange, highRange, maxNum = 0, maxDiv = 0;

    scanf("%d", &testCase);

    for( int i=1; i<=testCase; i++)
    {
        long int numDivisor = 0;

        scanf("%ld %ld", &lowerRange, &highRange);

        for( long int loop = lowerRange; loop <= highRange; loop++)
        {
            numDivisor = totalDivisor(loop);

            if(numDivisor > maxDiv)
            {
                maxDiv = numDivisor;
                maxNum = loop;

            }
        }

        printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n", lowerRange, highRange, maxNum, maxDiv);

        maxNum = maxDiv =0;
    }
    return 0;
}

long int totalDivisor(long int input)
{

    int primeFactor = 0;
    long int  retValue = 1;

    for(int i = 2; i*i <= input; i++)
    {

        while(input % i == 0)
        {
            primeFactor++;
            input/=i;
        }

        retValue *= primeFactor+1;
        primeFactor =0;
    }

    if(input != 1)
        retValue *=2;

    return retValue;
}
