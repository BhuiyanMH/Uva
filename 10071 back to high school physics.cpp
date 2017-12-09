#include <Stdio.h>
#include <stdlib.h>
int main()
{
    int t,v,s;
    while(scanf("%d %d",&t,&v) !=EOF)
    {
        s=abs(2*v*t);
        printf("%d\n",s);

    }
    return 0;
}
