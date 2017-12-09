#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    char keys[][6] = {"    \0" , ".,?\"\0", "abca\0", "defd\0", "ghig\0", "jklj\0", "mnom\0", "pqrs\0", "tuvt\0", "wxyz\0"};
    int num;
    for(int i=1; i<=tc; i++)
    {

        cin >> num;

        int k[num], prs[num];

        for(int i=0; i<num ; i++)
        {
            cin >>k[i];
        }
        for(int j=0; j<num; j++)
        {
            cin >> prs[j];
        }

        for(int l = 0; l<num; l++)
        {
            cout << keys[(k[l])][(prs[l]-1)];
        }
        cout <<endl;
    }
    return 0;
}
