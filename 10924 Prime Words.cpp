#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
#include <cmath>

using namespace std;

bool isPrime(int);
int main()
{
    char num[25];


    while(gets(num))
    {
        int sum=0;
        int limit = strlen(num);
        for(int i=0; i<limit; i++)
        {
            if(isupper(num[i]))
            {
                sum+=(num[i])-38;
            }
            else
                sum+=(num[i])-96;
        }
        if(isPrime(sum))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");

    }
    return 0;

}
bool isPrime(int n)
{
    int limit = sqrt((double)n);
    for(int i=2; i<=limit; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
