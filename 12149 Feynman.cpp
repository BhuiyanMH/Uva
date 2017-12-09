#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

long num[101];

int main()
{
    int n;

    for(int i=0; i<101; i++)
        num[i] =0;
    while(scanf("%d", &n) && n)
    {
        if(num[n] == 0)
        {
            long sum = n*(n+1)*(2*n+1);
            sum/=6;
            num[n] = sum;
        }
        printf("%ld\n", num[n]);
    }
    return 0;
}
