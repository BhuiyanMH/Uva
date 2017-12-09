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
    scanf("%d",&tc);

    for(int l=1; l<=tc; l++)
    {
        int num;
        scanf("%d", &num);
        getchar();

        char matches[num+1];
        int i;
        for(i=0; i<num; i++)
        {
            scanf("%c", &matches[i]);
            getchar();
        }
        matches[i] ='\0';
        int survived =0, danger =0;
        for(int i=0; i<num && danger<3; i++)
        {
            if(matches[i] == 'W')
            {
                survived++;
                danger =0;
            }
            else
            {
                survived++;
                danger++;
            }
        }
        if(danger !=3)
            printf("Case %d: Yay! Mighty Rafa persists!\n", l);
        else
            printf("Case %d: %d\n", l, survived);

    }
    return 0;
}

