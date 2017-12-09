#include <iostream>
#include <cstdio>
#include <cstring>

#define check(x, y) x>=0 && x<row && y>=0 && y<col && data[x][y]=='*'

using namespace std;

int main()
{

    int row, col;
    int tc= 1;
    while(scanf("%d %d", &row, &col)!=EOF)
    {
        getchar();
        char data[row][col+1];
        if(row ==0 && col == 0)
            break;

        for(int i = 0; i<row; i++)
        {
            gets(data[i]);
        }
        int count = 0;
        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                if(data[i][j] != '*')
                {

                    if(check(i-1, j-1))
                        count++;
                    if(check(i-1, j))
                        count++;
                    if(check(i-1, j+1))
                        count++;
                    if(check(i, j-1))
                        count++;
                    if(check(i, j+1))
                        count++;
                    if(check(i+1, j-1))
                        count++;
                    if(check(i+1, j))
                        count++;
                    if(check(i+1, j+1))
                        count++;
                    data[i][j] = count+48;
                    count = 0;
                }

            }

        }
        if(tc != 1)
            printf("\n");
        printf("Field #%d:\n", tc);
        tc++;

        for(int i =0; i<row; i++)
        {
            puts(data[i]);
        }
    }
    return 0;
}
