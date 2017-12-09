#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

long long noise(int);

long long dp[52];

int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i=0; i<52; i++)
    {
        dp[i] = 0;
    }

    for(int i=1; i<=tc; i++)
    {
        int input;
        scanf("%d", &input);

        long long ans = noise(input);
        printf("Scenario #%d:\n%lld\n\n",i, ans);
    }
}

long long noise(int N)
{
    long long result;
    if(dp[N])
        return dp[N];
    if(N==1)
        return 2;
    if(N==2)
        return 3;
    dp[N] = noise(N-1)+noise(N-2);
    return dp[N];
}
