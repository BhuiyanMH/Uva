#include <iostream>
#include <cstdio>
#include <cmath>

bool PRIMES[1000000];
void SEIVE();

using namespace std;

int main()
{
    SEIVE();
    int n;
    while(scanf("%d", &n) !=EOF)
    {
        long count = 0;
        if(n == 0)
        {
            break;
        }
        else
        {

            int limit = n-2;

            for(int l=2; l<=limit; l++)
            {

                if(!PRIMES[l] && !PRIMES[limit])
                {
                    count++;
                }
                limit--;
            }
        }
        printf("%ld\n", count);

    }
    return 0;
}

void SEIVE()
{
    PRIMES[0] = 1;
    PRIMES[1] = 1;
    for(int i=2; i<=1000001; i++)
    {
        PRIMES[i] = 0;
    }
    for(int i=4; i<=1000001; i+=2)
    {
        PRIMES[i] = 1;
    }

    for( int i= 3; i<=1000000; i+=2)
    {
        if(PRIMES[i] == 0)
        {

            for(int j=i*3; j<=1000000; j+=2*i)
            {
                PRIMES[j] = 2;
            }
        }
    }
}
