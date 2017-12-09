#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>

long long POWER(int, int);
int main()
{
    unsigned int a1, b1;
    char a[33], b[33];
    int result[33];
    while(scanf("%u %u", &a1, &b1)!=EOF)
    {

        for(int i = 0; i<32; i++)
        {
            a[i] = '0';
            b[i] = '0';
        }
        a[32] = '\0';
        b[32] = '\0';

        if(a1)
        {
            int index = 31;
            while(a1)
            {
               a[index--] = a1%2 + 48;
               a1 = a1/2;
            }
        }


        if(b1)
        {
            int index = 31;
            while(b1)
            {
               b[index--] = b1%2 + 48;
               b1 = b1/2;
            }
        }

        int indx = 0;
        for(int i=31; i>=0; i--)
        {
            int num1 = a[i] -'0';
            int num2  = b[i] - '0';

            result[indx++] = ((num1 || num2) && !(num1 && num2));

        }


        long long int r = 0;

        for(int i = 31; i>=0; i--)
        {
            r+=result[i]*(POWER(2, i));
        }
        printf("%lld\n", r);
    }
    return 0;
}

long long POWER(int NUM, int EXP)
{
    if(NUM == 0)
        return 0;
    if(EXP == 0)
        return 1;
    long long RESULT = NUM;
    for(int i=1; i<EXP; i++)
    {
        RESULT*=NUM;
    }
    return RESULT;
}

