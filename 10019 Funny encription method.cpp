#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
int numOf1(int);

int main()
{
    int tc;
    int numOfOne[]={0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2};
    scanf("%d", &tc);
    long long data;
    for(int i=1; i<=tc; i++)
    {
        scanf("%lld", &data);
        int a, b = 0;
        a = numOf1(data);

        while(data)
        {
            int temp = numOfOne[data%10];
            b+=numOfOne[data%10];
            data/=10;
        }

        printf("%d %d\n", a, b);
    }
    return 0;
}

int numOf1(int n)
{
    int count = 0;

    while(n!=0)
    {
        if(n%2!=0)
        {
            count++;
        }
        n/=2;
    }
    return count;
}
