#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double m1,  m2, m3, sm, middle, ans;
    while(scanf("%lf %lf %lf", &m1, &m2, &m3)!=EOF)
    {
        sm =(m1+m2+m3)/2.0;
        middle = sm*(sm-m1)*(sm-m2)*(sm-m3);

        if(middle <=0)
            printf("-1.000\n");
        else
        {
            printf("%.3lf\n", (4.0/3.0)*sqrt(middle));
        }

    }
    return 0;
}
