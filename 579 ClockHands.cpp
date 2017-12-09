#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour,minute;
    double result;

    while(scanf("%d:%d",&hour ,&minute))
    {
        if(hour == 0&&minute == 0) break;

        result = (double)minute*6.0 - ( 30.0 * ((double)hour + (double)(minute/60.0)));

        if(result < 0) result *= -1;

        if(result > 180 )
            printf("%.3lf\n", (360.0-result));

        else printf("%.3lf\n", result);

    }

    return 0;
}

