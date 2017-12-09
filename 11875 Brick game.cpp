#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for(int i=1; i<=tc; i++)
    {
        int num;
        cin >> num;
        vector<int> v;
        for(int j=0; j<num; j++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        cout << "Case "<<i<<": "<<v[(int)(num/2)]<<endl;
    }
    return 0;
}
