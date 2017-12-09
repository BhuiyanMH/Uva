#include <stdio.h>

int main()
{
    char t,cas;
    int a,b,c,temp;

    scanf("%d", &t);
   for(cas=1;cas<=t;cas++){
        scanf("%d %d %d", &a, &b, &c);

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

        if(b>c) printf("Case %d: %d\n",cas ,b);
        else printf("Case %d: %d\n",cas ,c);
   }

   return 0;

}
