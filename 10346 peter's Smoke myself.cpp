//it shows time limit exit

#include <stdio.h>

int main()
{
    int a,b,eex;
    long int sum;

    while(scanf("%d %d", &a, &b)==2){

        sum=a+(a/b);
        eex=(a/b)+a%b;
        while(1){
                eex=eex/b;
                sum+=eex;
                if(eex<b) break;
                eex=eex+eex%b;

        }
        printf("%ld\n", sum);
    }
}
