#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    char input[1005];

    while(gets(input))
    {
        int length = strlen(input);
        if(input[0] =='0' && length == 1)
            break;

        int remainder =0;

        for(int i=0; i<length; i++)
        {
            remainder = ((input[i]-'0')+10*remainder)%11;
        }
        if(!remainder)
            printf("%s is a multiple of 11.\n", input);
        else
            printf("%s is not a multiple of 11.\n", input);
    }
    return 0;
}
