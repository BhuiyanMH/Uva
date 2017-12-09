#include <iostream>

using namespace std;

long long countIt(long long);

int main()
{
    int tc;
    cin >>tc;

    long long num;
    while(tc--)
    {
        cin >> num;
        cout << countIt(num) <<endl;
    }
}

long long countIt(long long n)
{
    if(n ==0)
        return 0;
    else
        return countIt(n/2) + n%2;
}
