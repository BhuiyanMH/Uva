#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char in[1000000];
bool isDiv(int);
int main()
{
    bool isprint = false;
    while(gets(in))
    {
         bool is4, is100, is400, is55, is15, isleap = false,isbulu = false;

         is4 = isDiv(4);
         is100 = isDiv(100);
         is400 = isDiv(400);
         is55 = isDiv(55);
         is15 = isDiv(15);

         if((is4 && !is100) || is400)
         {
             isleap = true;

             if(is55)
                isbulu = true;
         }

        if(isprint)
            printf("\n");
        if(isleap)
            printf("This is leap year.\n");
        if(is15)
            printf("This is huluculu festival year.\n");
        if(isbulu)
            printf("This is bulukulu festival year.\n");
        if( !isleap && !is15 && !isbulu)
            printf("This is an ordinary year.\n");
        isprint = true;

    }
    return 0;
}

bool isDiv(int x)
{

    int len =  strlen(in);
    int rem = 0, divident;

    for(int i=0; i<len; i++)
    {
        divident = rem*10 + (in[i]-'0');
        rem = divident % x;
    }

    if(rem == 0)
        return true;
    else
        return false;
}

