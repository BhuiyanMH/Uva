#include <stdio.h>

int main()
{
    long int in,d=5;
    int lp=0,sum=0;

    int bn[32];

    while(scanf("%ld",&in)){
        if(in==0) break;

        while(d>0){
            bn[lp]=in%2;
            sum+=bn[lp];
            d=in/2;
            in=in/2;
            lp++;

        }
         lp=lp-1;
         printf("The parity of ");
         for(lp; lp>=0; lp--){
            printf("%d",bn[lp]);
        }
        printf(" is %d (mod 2).\n",sum);

        d=5;
        sum=lp=0;


    }

}
