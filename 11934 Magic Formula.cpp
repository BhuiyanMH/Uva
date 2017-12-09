#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

long long a, b, c;
long long d;
bool isDiv(long long);

int main()
{
    long long limit;

    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &limit)!=EOF)
    {
        if(!a && !b && !c && !d && !limit)
            break;
        long long count = 0;
        for(long long i=0; i<=limit; i++)
        {
            if(isDiv(i))
                count++;
        }
        printf("%lld\n", count);
    }
    return 0;

}

bool isDiv(long long x)
{
    long long result  = (a*x*x)+b*x+c;

    if(result%d == 0)
        return true;
    else
        return false;
}

