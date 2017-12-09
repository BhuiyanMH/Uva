#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int input;

    while(scanf("%d", &input))
    {
        bool isPrint = false;
        if(input == 0)
            break;
        cout << input << " = ";

        if(input < 0)
        {
            cout << "-1 x ";
            input*=-1;
        }

        int limit = (int)sqrt(input);
        for(int i=2; i <=limit; i++)
        {
            while(input % i == 0)
            {
                if(!isPrint)
                {
                    cout << i;
                    isPrint = true;
                }

                else
                {
                    cout << " x " << i;
                }

                input/=i;
            }
        }

        if(input > 1)
        {
            if(!isPrint)
                cout << input;
            else
                cout << " x " << input;

        }
        cout << endl;
    }
    return 0;
}
