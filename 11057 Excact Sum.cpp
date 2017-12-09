#include <stdio.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int num, l1, l2, l3;

    long int money, diff  = 100000000, p1, p2;

    while(scanf("%d", &num) !=EOF)
    {
        long int book[num];

        for(l1=0; l1<num; l1++)
        {
            scanf("%ld", &book[l1]);
        }

        scanf("%ld", &money);

        for(l2=0; l2<num; l2++)
        {
            for(l3=0; l3<num; l3++)
            {
                if(l2 == l3)
                    continue;

                if((book[l2]+book[l3])==money)
                {
                    if(abs(book[l2]-book[l3]) < diff)
                    {
                        p1 = min(book[l2], book[l3]);
                        p2 = max(book[l2], book[l3]);

                        diff  = p2-p1;
                    }
                }
            }
        }

        diff  = 100000000;

        printf("Peter should buy books whose prices are %ld and %ld.\n\n", p1, p2);
    }
    return 0;
}
