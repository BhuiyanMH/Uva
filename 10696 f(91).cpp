#include<stdio.h>

int main()
{
   long int N,ans;
   while(scanf("%d",&N)){
        if(N==0)break;
        else if(N<=100)ans=91;

        else ans=N-10;
        printf("f91(%ld) = %ld\n",N,ans);

   }
   return 0;
}
