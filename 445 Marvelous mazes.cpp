#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    char data[1000000];
    while(gets(data))
    {
        long limit = strlen(data);

        for(long i=0; i<limit; i++)
        {

            long sum =0;
            if(data[i] == '!')
                printf("\n");
            else if(data[i]>= 48 && data[i]<=57)
            {
                while(data[i]>= 48 && data[i]<=57)
                {
                    sum+=data[i]-'0';
                    i++;
                }
                for(long j=1; j<=sum; j++)
                {
                    if(data[i] == 'b')
                        printf(" ");
                    else
                        printf("%c",data[i]);
                }

            }
        }
        printf("\n");
    }
    return 0;
}
