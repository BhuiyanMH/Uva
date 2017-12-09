#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

bool PRIMES[1000001];
int digitPrimes[1000001];
bool digitPrime(long);
void SEIVE();

int main()
{
    SEIVE();
    int dprime = 0;
    for(int i=0; i<1000001; i++)
    {
        if(!PRIMES[i]&&digitPrime(i))
        {
            dprime++;
            digitPrimes[i] = dprime;
        }
        else
        {
            digitPrimes[i] = dprime;
        }
    }

    int tc;
    scanf("%d", &tc);

    long a, b;
    for(int i=1; i<=tc; i++)
    {
        scanf("%ld %ld", &a, &b);
        if((!PRIMES[a]&&digitPrime(a)))
            printf("%d\n", 1+(digitPrimes[b]-digitPrimes[a]));
        else
            printf("%d\n", (digitPrimes[b]-digitPrimes[a]));
    }
    return 0;
}

bool digitPrime(long number)
{
    int sum =0;
    while(number)
    {
        sum+=(number%10);
        number/=10;
    }
    if(!PRIMES[sum])
        return true;
    else
        return false;

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
