#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

long cube(int);
using namespace std;

int main()
{
    long cubes[80];
    cubes[0] = 0;

    int limit = 1;
    long limitCube =1;
    while(limitCube-cubes[limit-1]<10000)
    {
        cubes[limit] = limitCube;
        limit++;
        limitCube = cube(limit);
    }


    int n;
    while(scanf("%d", &n)!=EOF)
    {
        if(n==0)
            break;
        bool found =false;
        int i, j;
        for( i=1; i<60; i++)
        {
            for( j=0; j<=i; j++)
            {
                if(cubes[i] -cubes[j] == n)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
        }

        if(found)
            printf("%d %d\n", i, j);
        else
            printf("No solution\n");
    }

}

long int cube(int n)
{
    return n*n*n;
}
