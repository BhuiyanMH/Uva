#include <stdio.h>
#include <math.h>
#include <string.h>

int sumDigit(long long int);

int main()
{
    long long in;

    while(scanf("%lld", &in))
    {
        if(in == 0) break;

        int sum = sumDigit(in);

        while( sum > 9 )
        {
            sum = sumDigit(sum);
        }

       printf("%d\n", sum);
    }
    return 0;
}

int sumDigit(long long int input)
{
        int remainder, sum = 0, div = 5;

        while( input > 0 )
        {

            remainder = input % 10;
            sum += remainder;
            input = input/10;
        }

        return sum;
}
