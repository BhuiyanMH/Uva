#include <stdio.h>

main()
{
    int num,total,extra;

    while( scanf("%d", &num)){
        if(num==0) break;
        total=num/3;
        extra=total+num%3;

        while(extra>=3){
            total+=extra/3;
            extra=extra/3 + extra%3;
        }
        if(extra==2) printf("%d\n",total+1);
        else printf("%d\n", total);
    }
    return 0;
}
