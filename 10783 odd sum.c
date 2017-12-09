#include <stdio.h>
int main()
{
    long int a,b,c=1,e=0,t;
    scanf("%ld",&t);
    while(c<=t)
        {
            scanf("%ld \n",&a);
            scanf("%ld",&b);
            for(a;a<=b;a++)
            {
                if(a%2!=0) e=e+a;
                else continue;
            }

            printf("Case %ld: %ld\n",c,e);
            e=0;
            c++;
        }
    return 0;
}
