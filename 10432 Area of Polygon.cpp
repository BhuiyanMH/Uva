#define PI acos(-1.0)

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    double radius, number;
    while(scanf("%lf %lf", &radius, &number)!=EOF)
    {
         double area = 0.5*number*(radius*radius)*sin((2.0*PI)/number);//laws of area of polygon given radius
        printf("%.3lf\n", area);

    }
    return 0;
}


