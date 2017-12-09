#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int tc, N;

    scanf("%d", &tc);

    for(int i =1; i<= tc; i++)
    {
        scanf("%d", &N);
        int arr[N];

        for(int j =0; j<N; j++)
        {
            scanf("%d", &arr[j]);
        }
        int highJump = 0, lowJump =0;

        for(int k = 1; k<N; k++)
        {
            if( arr[k] < arr[k-1])
                lowJump++;
            if( arr[k] > arr[k-1])
                highJump++;
        }

        printf("Case %d: %d %d\n", i, highJump, lowJump);
    }
    return 0;
}
