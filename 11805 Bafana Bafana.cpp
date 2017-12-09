#include <stdio.h>
#include <math.h>

int main()
{
    int tc;

    scanf("%d", &tc);

    for(int i=1; i <= tc; i++)
    {
        int N, K, P;

        scanf("%d %d %d", &N, &K, &P);

        int rem = P % N;
        int result = rem + K;

        if( result > N)
            printf("Case %d: %d\n", i, (result%N));
        else
            printf("Case %d: %d\n", i, result);
    }
    return 0;
}
