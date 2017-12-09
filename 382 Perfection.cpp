#include <iostream>
#include <cstdio>
#include<cstdlib>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    long int a;
    vector <long int> v;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld", &a)==1)
    {
        if(a == 0)
        {
            break;
        }
        else
        {
            v.push_back(a);
        }
    }
    int l = v.size();
    for(int j=0; j<l; j++)
    {

        long int sum =0;
        int limit = (v[j]/2);
        for(int i=1; i<=limit; i++)
        {
            if(v[j]%i==0)
            {
                sum+=i;
            }
        }

        if(sum == v[j])
            printf("%5ld  PERFECT\n", v[j]);
        else if(sum >v[j])
            printf("%5ld  ABUNDANT\n", v[j]);
        else
            printf("%5ld  DEFICIENT\n", v[j]);

    }
    printf("END OF OUTPUT\n");
    return 0;
}


