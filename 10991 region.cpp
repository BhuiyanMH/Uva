#define PI acos(-1.0)

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int tc;
    scanf("%d", &tc);

    for(int i=1; i<=tc; i++)
    {
        double r1, r2, r3;
        scanf("%lf %lf %lf", &r1, &r2, &r3);

        double a, b, c;
        a = r1+r2;
        b = r2+r3;
        c = r3+r1;

        double s = (a+b+c)/2.0;
        double areaOfTriangle = sqrt(s*(s-a)*(s-b)*(s-c));

        double cosC = ((a*a+b*b)-c*c)/(2.0*a*b);
        double cosA = ((b*b+c*c)-a*a)/(2.0*b*c);
        double cosB = ((a*a+c*c)-b*b)/(2.0*a*c);


        cosA = (acos(cosA)*180.0/PI);
        cosB = (acos(cosB)*180.0/PI);
        cosC = (acos(cosC)*180.0/PI);


        double areaOfA = (PI*r3*r3*cosA)/360.0;
        double areaOfB = (PI*r1*r1*cosB)/360.0;
        double areaOfC = (PI*r2*r2*cosC)/360.0;

        printf("%.6lf\n",areaOfTriangle-(areaOfA+areaOfB+areaOfC));
    }
    return 0;
}


