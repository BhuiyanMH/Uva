#include <iostream>
#include <cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    int tc;
    cin >>tc;

    while(tc--)
    {
        double x0, x1, y0, y1, cx, cy, r;

        scanf("%lf %lf %lf %lf %lf %lf %lf", &x0, &y0, &x1, &y1, &cx, &cy, &r);

        double length, width, cl;

        length = x1-x0;
        width = y1-y0;
        cl = x0+((length*9)/20);

        if(length !=(5*r) || length != ((width*10)/6) || r>(width/2) ||r>cl||(cx != (x0+((length*9)/20))) ||(cy != (y0+(width/2))))
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
    return 0;
}
