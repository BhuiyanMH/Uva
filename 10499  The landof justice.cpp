#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
    long long data;
    while(scanf("%lld", &data) !=EOF)
    {
        if(data <0)
            break;
        long long num = data*25;
        if(data == 1)
            cout <<"0%"<<endl;
        else

            cout << num <<"%"<<endl;
    }
    return 0;
}
