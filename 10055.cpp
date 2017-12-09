#include <stdio.h>
#include <stdlib.h>
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    long long a, b;
    while (scanf("%lld %lld",&a,&b)!=EOF)
    {

            (a>b) ? printf("%lld\n",a-b) : printf("%lld\n",b-a);
    }

return 0;
}
