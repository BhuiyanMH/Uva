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

    int n, m;

    while(tc--)
    {
        scanf("%d %d", &n, &m);

        int current = n, numOfShow =0;

        while( current >= m )
        {
            numOfShow++;
           // printf("numOfShow = %d  current = %d\n", numOfShow, current);
            current = current-m+1;

        }
       // printf("LASTcurren = %d\n", current);
        if(current != 1)
            printf("cannot do this\n");
        else
            printf("%d\n", numOfShow);
    }
    return 0;
}

