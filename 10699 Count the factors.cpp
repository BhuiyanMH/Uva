#include <stdio.h>
#include <math.h>

int main()
{
    long int input, print;
    int loop, factorNum = 0;

    while(scanf("%ld", &input))
    {
        print = input;

        if( input == 0) break;
        loop = sqrt((double ) input);

        for(int i = 2; i <= loop; i++)
        {
            if( input % i == 0)
            {
                factorNum++;

                while( input % i == 0)
                {
                    input = input/i;
                }
            }

        }
        if(input != 1) factorNum++;

        printf("%ld : %d\n", print, factorNum);
        factorNum = 0;
    }

}
