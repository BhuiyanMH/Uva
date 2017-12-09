#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

#define PI 2*acos(0)

using namespace std;

int main()
{
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
    {
        double s = (double)(a+b+c)/2.0;
        double areaOfTriangle = sqrt(s*(s-a)*(s-b)*(s-c));

        double radiusOfBigCircle = (a*b*c)/(4*areaOfTriangle);
        double areaOfBigCircle = PI*(radiusOfBigCircle*radiusOfBigCircle);

        double radiusOfSmallCircle = (2*areaOfTriangle)/(a+b+c);
        double areaOfSmallCircle = PI*radiusOfSmallCircle*radiusOfSmallCircle;

        printf("%.4lf %.4lf %.4lf\n", (areaOfBigCircle-areaOfTriangle), (areaOfTriangle-areaOfSmallCircle), areaOfSmallCircle);
    }

    return 0;
}
