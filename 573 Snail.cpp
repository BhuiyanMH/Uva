#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    double h,u,d,f;

    while(scanf("%lf %lf %lf %lf", &h, &u, &d, &f) !=EOF)
    {
        if(h == 0)
            break;

        int day =1;
        double climb = u;
        double current = 0.0;
        double loss = u*f/100.0;

        while(1)
        {
           // printf("\nday = %d\n climb = %lf\n", day, climb);

            current += climb;
            if(climb-loss>=0)
                climb-=loss;
            if(current >h )
            {
                printf("success on day %d\n", day);
                break;
            }

           // printf("\nafter climb current = %lf\n", current);
            current = current-d;
            // printf("after slide current = %lf\n",current);
            if(current < 0.0)
            {
                printf("failure on day %d\n", day);
                break;
            }
            day++;
        }
    }

    return 0;
}

