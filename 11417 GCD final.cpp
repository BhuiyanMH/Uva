#include <stdio.h>
#include <math.h>

long int f_gcd(int,int);

int main()
{
    int N,i,j;
    long int result=0,get;
    while(scanf("%d",&N)){
        if(N==0) break;
        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                get=f_gcd(i,j);
                result=result+get;

            }
        }
        printf("%ld\n",result);
        result=0;
    }

    return 0;

}

long int f_gcd(int x,int y)
{
    long int gcd=0;
    int rem;
    for(;;){

                rem=y%x;
                gcd=x;
                if(rem==0)break;
                y=x;
                x=rem;

    }

    return gcd;

}
