#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int tc;
    scanf("%d", &tc);
    int radius;
    for(int i=1; i<=tc; i++)
    {
        scanf("%d", &radius);

        int x1, y1, x2;

        y1 = (radius*3)/2;
        x1 = ((radius*9)/4);
        x2 = (radius*11)/4;
        printf("Case %d:\n", i);
        printf("-%d %d\n%d %d\n%d -%d\n-%d -%d\n", x1, y1, x2, y1, x2, y1, x1, y1);
    }
    return 0;
}
