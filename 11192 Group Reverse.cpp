#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

char input[105];

void groupReverse(int, int);

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        if(n==0)
            break;
        getchar();
        gets(input);

        int length = strlen(input);

        int groups = length/n;

        int s = 0;
        while(s<length)
        {
            groupReverse(s, s+groups-1);
            s+=groups;
        }

        puts(input);
    }
    return 0;
}

void groupReverse(int start, int end)
{
    while(start<end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
    return ;
}
