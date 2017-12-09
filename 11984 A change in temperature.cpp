#include <stdio.h>
#include <stdlib.h>

main()
{
    int tc, c, f,lp;
    double far, more, total;

    scanf("%d", &tc);

    for(lp=1;lp<=tc;lp++){
        scanf("%d %d", &c, &f);

        far=(double)f+(double)((c*9.0)/5.0)+32;
        total=(far*5.0-160)/9.0;

        printf("Case %d: %.2lf\n", lp, total);

    }

}
