#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    long int num;
    bool under = false, over = false;
    while(scanf("%ld", &num)!=EOF)
    {
        long long factorial = 1;

        if(num<0)
        {
            if(num%2)
                printf("Overflow!\n");
            else
                printf("Underflow!\n");
            continue;
        }
        for(int i=2; i<=num; i++)
        {
            factorial *=i;

            if(factorial>6227020800)
            {
                over = true;
                break;
            }
        }
        if(factorial < 10000)
        {
            printf("Underflow!\n");
            continue;
        }
        else if(over)
        {
            printf("Overflow!\n");
        }
        else
        {
            printf("%lld\n", factorial);
        }

    }
    return 0;
}
