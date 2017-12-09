#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main()
{
    int tc, sqr;
    char input[10009];

    scanf("%d", &tc);
    getchar();

    while(tc--)
    {
        gets(input);

        int length = strlen(input);
        sqr = sqrt(length);

        if( sqr*sqr != length)
        {
            printf("INVALID\n");
        }

        else
        {
            int index = 0;
            char str[sqr][sqr+5];

            for(int i =0; i<sqr; i++)
                for(int j = 0; j<sqr; j++)
                {
                    str[i][j] = input[index];
                    index++;
                }

            for(int i =0; i<sqr; i++)
                for(int j = 0; j<sqr; j++)
                {
                    putchar(str[j][i]);
                }

            printf("\n");

        }

    }
    return 0;

}
