#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

char t[200005];
long int p = 0;


bool isFound( char );
int main()
{
    char s[200000];
    while(scanf("%s %s", s, t) !=EOF)
    {
        bool decision = true;
        p = 0;

        long int l = strlen(s);

        for (long int i =0; i<l; i++)
        {
            if(isFound(s[i]))
               continue;
            else
            {
                decision = false;
                break;
            }
        }

        if(decision)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}

bool isFound( char c)
{
    long int l = strlen(t);

    for( p; p < l;  ){

       if(c == t[p++]){
           return true;
           }

       else
        continue;
    }

    return false;

}

