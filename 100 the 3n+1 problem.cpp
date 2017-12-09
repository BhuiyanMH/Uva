#include <stdio.h>

long long int myfunc(long long int);

int main()
{
    long long int a,b,c,i,max_1=1;

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        printf("%lld %lld",a,b);

        for(a;a<=b;a++){
         c=myfunc(a);
         if(c>max_1)max_1=c;
        }

        printf(" %lld\n",max_1);
        max_1=1;
    }

    return 0;
}

long long int myfunc(long long int i)
{
    long long int count_1=1;

    while(i!=1){
        if(i%2==0)i=i/2;
        else i=(3*i)+1;
        count_1++;

    }

    return count_1;
}
