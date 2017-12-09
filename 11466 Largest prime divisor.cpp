#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    long long n;
    while(scanf("%lld", &n)!=EOF)
    {


        if(n==0)
            break;

        if(n<0)
            n=n*(-1);
        long long number =n;

        if(n ==1 || n==2 ||n==3 ||n==5 || n==4)
        {
            printf("-1\n");
            continue;
        }

        long int i;
        int count =0;
        long long largest = 2;

        long limit =(long)sqrt(n)+1;

        for( i=2; i <=limit; i++)
        {
            if(n%i == 0)
            {
                count++;
                if(i>largest)
                    largest =i;

                while(n%i == 0)
                {
                    n=n/i;
                }
            }

        }
        if(n>1)
        {
            largest = n;
            count++;

        }


        if(largest == number || count == 1)
            printf("-1\n");
        else
            printf("%lld\n", largest);
    }
    return 0;
}
