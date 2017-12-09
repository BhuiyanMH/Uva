#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long int input_1, input_2;
    int sqrt;

    while(scanf("%ld %ld", &input_1, &input_2))
    {
        if(input_1 == 0 && input_2 == 0) break;

        int count = 0;

        for(long int i =input_1; i <= input_2; i++)
        {
            int sqr = sqrtl(i);

            if( sqr*sqr == i )
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
