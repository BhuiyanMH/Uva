#include <stdio.h>
#include <math.h>

int main()
{
    double n, p, ans;

    while(scanf("%lf %lf", &n, &p) !=EOF)
    {
        ans = pow(p, 1/n );
        printf("%0.lf\n", ans);
    }
    return 0;
}
