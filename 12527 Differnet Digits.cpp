#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

bool isDifferent(int);

int main()
{

    int number[5001];
    int num=0;
    for(int i=1; i<5001; i++)
    {

        bool status[10], repeat = false;
        for(int l=0; l<10; l++)
            status[l] = false;

        int n = i;
        while(n)
        {
            int rem = n%10;
            if(status[rem])
            {
                repeat = true;
                break;
            }
            else
                status[rem] = true;
            n/=10;

        }
        if(repeat)
            number[i] = num;
        else
        {
            num++;
            number[i] = num;
        }
    }

    int a, b;

    while(scanf("%d %d", &a ,&b) !=EOF)
    {
        if(isDifferent(a))
            printf("%d\n", number[b]-number[a]+1);
        else
            printf("%d\n", number[b]-number[a]);
    }
    return 0;
}

bool isDifferent(int N)
{
    bool dig[10];

    for(int x=0; x<10; x++)
        dig[x] = false;

    while(N)
    {
        int r = N%10;
        if(dig[r])
        {
            return false;
        }
        else
            dig[r] = true;
        N/=10;
    }
    return true;
}
