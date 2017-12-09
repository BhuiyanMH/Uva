#include <stdio.h>

int main()
{
    int cas,t,n,i,max=0;

    scanf("%d",& t);

    for(cas=1;cas<=t;cas++){
        scanf("%d", &n);
        int spd[n];

        for(i=0;i<n;i++){
            scanf("%d", &spd[i]);
            if(max<spd[i]) max=spd[i];

        }

        printf("Case %d: %d\n",cas,max);
        max=0;

    }
    return 0;
}
