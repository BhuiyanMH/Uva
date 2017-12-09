#include <stdio.h>
#include <math.h>

int main()
{
    long long int lowRange, highRange, result;
    int tc, divisor=0, maximum=0;

    scanf("%d", &tc);

    for(int i=1; i<=tc; i++)
    {
        scanf("%lld %lld", &lowRange, &highRange);

        for(int j=lowRange; j <= highRange; j++)
        {
            int loop = sqrt((double)j);

            if(loop*loop == j) divisor = -1;

            for(int k=1; k <=loop; k++)
            {
                if(j%k == 0)
                    divisor+=2;
            }

            if( maximum < divisor ) {
                    maximum = divisor;
                    result = j;
            }
            divisor = 0;

        }

        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",  lowRange, highRange, result, maximum );
        result = maximum = 0;
    }
    return 0;
}
