#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        if(n == 0)
            break;

        int index = -1,data[n], diff[n];
        bool jolly = true;

        while(n--)
        {
            scanf("%d", &data[++index]);
        }
        if(index == 0)
        {
            printf("Jolly\n");
            continue;
        }

        for(int i = 0; i<index; i++)
        {
            diff[i]=abs(data[i+1]-data[i]);
        }

        //printf("index = %d\n", index);
        sort(diff, diff+index);

//        for(int i = 0; i<index; i++)
//        {
//            printf("%d ", diff[i]);
//        }
//        printf("\n");
/* the main theorem is that if it different array contains all numbers 1 to n-1, then index 0 must contain 1, index 5 must contain 6 and so on... */
        for(int i = 0; i<index; i++)
        {
            if(diff[i] != i+1)
            {
               jolly = false;
                break;
            }
        }
        if(jolly)
            printf("Jolly\n");
        else
            printf("Not jolly\n");

    }
    return 0;
}

