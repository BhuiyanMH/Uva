#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>
#define PI acos(-1.0)
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) !=EOF)
    {
        getchar();

        char names[n][17];
        int year[n], date[n], month[n];

        for(int i=0; i<n; i++)
        {
            scanf("%s %d %d %d", &names[i], &date[i], &month[i], &year[i]);
        }

        int older = 0, younger=0 ;
        for(int i=1; i<n; i++)
        {
            if(year[i]<year[older] || (month[i] < month[older] && (year[i] == year[older])) || (date[i] < date[older] &&(year[i] == year[older]) &&(month[i] == month[older])))
            {
                older = i;
            }
            if(year[i]>year[younger] || (month[i] > month[younger])&&(year[i] == year[younger]) || (date[i] > date[younger]) &&(year[i] == year[younger]) &&(month[i] == month[younger]) )
            {
                younger = i;
            }

        }
        printf("%s\n%s\n", names[younger], names[older]);
    }
    return 0;
}
