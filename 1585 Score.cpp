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
    int tc;
    scanf("%d", &tc);
    getchar();
    char input[85];
    while(tc--)
    {
        gets(input);
        int len = strlen(input);

        int sum =0;
        for(int i=0; i<len; i++)
        {
            int add=1;
            if(input[i] == 'O')
            {
                while(input[i] == 'O')
                {
                    sum+=add;
                    add++;
                    i++;
                }
            }
        }
        printf("%d\n", sum);

    }
    return 0;
}

