#include <iostream>
#include<cstdio>

using namespace std;
int main()
{

    int tc, x, y, z;

     cin >> tc;

     for(int i =1; i<=tc; i++)
     {
         int xdone;

         cin >> x >> y >> z;

         xdone = (z*(x+x-y))/(x+y);

         cout << xdone << endl;
     }
}

