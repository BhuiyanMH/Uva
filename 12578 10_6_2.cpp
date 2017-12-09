#include <stdio.h>
#include <math.h>
#define pi acos(-1)

int main()
{
    int t,l;
    double ar,ag,w,rc;

    scanf("%d", &t);
    for(t;t>0;t--){
        scanf("%d",&l);
        w=(double)(l*6.0)/10.0;
        //printf("%f\n",w);

        rc=(double)l/5.0;
       // printf("%f\n",rc);

        ar=pi*rc*rc;
        //printf("%.2f\n", ar);
        ag=(double)(l*w)-ar;
       // printf("%.2f", ag);
        printf("%.2lf %.2lf\n",ar, ag);
    }
    return 0;

}
