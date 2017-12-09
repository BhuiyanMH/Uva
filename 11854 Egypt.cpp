#include <stdio.h>

int main()
{
    long int a,b,c,temp;

    while(scanf("%ld %ld %ld", &a, &b, &c)){
        if(!a && !b && !c) break;

        if(b>a){
            temp=a;
            a=b;
            b=temp;
        }

        if(c>a){
            temp=a;
            a=c;
            c=temp;
        }

        if((a*a)==((b*b) + (c*c))) printf("right\n");
        else printf("wrong\n");

    }

}
