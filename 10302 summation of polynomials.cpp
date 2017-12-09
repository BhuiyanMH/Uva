#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    long long n;

    while(scanf("%lld", &n)!=EOF)
    {
        long long ans = (n*(n+1))/2;
        ans*=ans;
        printf("%lld\n", ans);

    }
    return 0;
}
