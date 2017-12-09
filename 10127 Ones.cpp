#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n)!=EOF)
    {
        int count =1,rem=1%n;

        while(rem!=0)
        {
            rem = ((rem*10)+1)%n;
            count++;
        }

        printf("%d\n", count);

    }
    return 0;
}
