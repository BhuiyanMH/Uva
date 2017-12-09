#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

long long ackermann(long long);
long long result =0;
long long data[100000];

int main()
{
    long long L, H;
    while(scanf("%lld %lld", &L, &H)!=EOF)
    {
        long long largest =0, value;
        if(L==0 && H==0)
            break;
        if(L>H)
        {
            long temp = L;
            L= H;
            H = temp;
        }
        for(long l=L; l<=H; l++)
        {
            long res;
            if(l<100000 && data[l])
                res = data[l];
            else
            {
                res = ackermann(l);
                if(l<100000)
                    data[l] = res;
            }
            result = 0;
            if(res > largest)
            {
                value = l;
                largest= res;
            }
        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", L, H, value, largest);

    }
    return 0;

}

long long ackermann(long  long n)
{
    if(n == 1)
        return 3;

    else
    {
        if(n%2 == 0)
            n/=2;
        else
            n=n*3+1;
        result++;
        ackermann(n);
    }
    return result;
}

