#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    char data[105][105];

    int row, col;
    while(scanf("%d %d", &row, &col) !=EOF)
    {
        getchar();
        if(row == 0 && col == 0)
            break;
        for(int i=0; i<row; i++)
        {
            gets(data[i]);
        }

        bool isIsolated = true;

        int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int y[] = {-1, 0, 1, -1, 1, -1, 0, 1 };

        int count = 0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(data[i][j] == '*')
                {
                    for(int l=0; l<8; l++)
                    {
                        if((i+x[l] <row && i+x[l]>=0)&&(j+y[l] <col && j+y[l] >=0) && data[i+x[l]][j+y[l]] == '*')
                        {
                            isIsolated = false;
                            break;
                        }
                    }
                    if(isIsolated)
                        count++;
                    isIsolated = true;
                }

            }
        }
        printf("%d\n", count);
    }
    return 0;
}

