#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

long long power(int, int);

int main()
{
    int tc;
    cin >>tc;

    long long  arm[10][11];
    for(int i =0; i<10; i++)
    {
        for(int j=0; j<11; j++)
        {
            arm[i][j] = power(i, j);
        }
    }
    getchar();
    char  num[11];
    while(tc--)
    {

        gets(num);
        long long number;
        number = atoll(num);
        int limit = strlen(num);
        int exp = limit;

        for(int p=0; p<limit; p++)
        {
            if(num[p] =='0')
            {
                exp--;
            }
            else
            {
                break;
            }
        }
        long long sum =0;
        for(int i = 0; i<limit; i++)
        {
            sum+=arm[(num[i]-'0')][exp];
        }

        if(number == sum)
            cout <<"Armstrong"<<endl;
        else
            cout <<"Not Armstrong"<<endl;

    }
    return 0;
}

long long power(int x, int y)
{
    long long result = x;
    if(x ==0)
        return 0;
    if(y ==0)
        return 1;
    for(int i =1; i<y; i++ )
    {
        result*=x;
    }
    return result;
}
